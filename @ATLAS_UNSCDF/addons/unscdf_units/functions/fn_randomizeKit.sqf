/*
    fn_randomizeKit.sqf
    Author: Atlas

    Description:
        Role-aware equipment randomization for UNSCDF soldiers.
        Randomizes headgear, vest, NVGs, primary weapon attachments,
        and a small set of optional inventory items.
        Separate pools are maintained for ODST and Marine branches.
        Specialized roles (corpsman, pilot, aircrew, sniper, etc.) are
        exempt and retain their fixed loadout gear.

    Usage:
        [_unit] call ATLAS_fnc_randomizeKit;

    Parameters:
        _unit - The unit to randomize <OBJECT>

    How to extend:
        - Add classnames to the pool arrays below (headgear, vest, nvg,
          optics, muzzles, pointers, bipods, extras).
        - Add keyword substrings to _exemptTypes or _exemptDisplayNames
          to exclude additional roles from randomization.
        - ODST detection uses a classname substring check ("odst"); adjust
          _isODST if your naming convention changes.
*/

params ["_unit"];
if (isNull _unit) exitWith {};
if (!local _unit) exitWith {};

// -------------------------------------------------------------------------
// Exemption check
// Units whose class name OR display name contains any of these substrings
// will skip all randomization and keep their assigned gear.
// Add new role keywords here to protect additional specialist classes.
// -------------------------------------------------------------------------
private _exemptTypes = [
    "corpsman",
    "medic",
    "pilot",
    "aircrew",
    "helicrew",
    "sniper",
    "recon"
];

private _unitType = toLowerANSI (typeOf _unit);
private _unitDisplay = toLowerANSI (getText (configFile >> "CfgVehicles" >> (typeOf _unit) >> "displayName"));

private _isExempt = false;
{
    if ((_unitType find _x) >= 0 || (_unitDisplay find _x) >= 0) exitWith { _isExempt = true; };
} forEach _exemptTypes;

if (_isExempt) exitWith {};

// -------------------------------------------------------------------------
// Branch detection — ODST vs Marine
// Detection uses the unit's classname. Adjust the substring if needed.
// -------------------------------------------------------------------------
private _isODST = (_unitType find "odst") >= 0;

// -------------------------------------------------------------------------
// Equipment pools — edit classnames here to tailor available gear.
// An empty sub-array ("[]") means that category is skipped for that branch.
// -------------------------------------------------------------------------

// --- ODST pools ---
private _poolsODST = createHashMapFromArray [
    // Headgear variants; add/remove helmet classnames as desired
    ["headgear", [
        "TCP_H_Helmet_ECH55D_Black_Silver",
        "TCP_H_Helmet_ECH55D_Black_Gold",
        "TCP_H_Helmet_ECH55D_Black_Black"
    ]],
    // Vest variants
    ["vest", [
        "TCP_V_M43D_ODST_3_1_Black",
        "TCP_V_M43D_ODST_3_2_Black",
        "TCP_V_M43D_ODST_3_3_Black"
    ]],
    // NVG options
    ["nvg", [
        "OPTRE_NVG_Gen3",
        "OPTRE_NVG"
    ]],
    // Primary weapon optics
    ["optics", [
        "CTGCY_BR55_Scope",
        "optic_Holosight",
        "optic_ERCO_blk_F"
    ]],
    // Suppressors/muzzle devices
    ["muzzles", [
        "muzzle_snds_H"
    ]],
    // Laser/flashlight pointers
    ["pointers", [
        "acc_pointer_IR",
        "acc_flashlight"
    ]],
    // Bipods
    ["bipods", [
        "TCP_bipod_handGuard_M6G2_blk"
    ]],
    // Optional inventory extras (1-2 items added at random)
    ["extras", [
        "ACE_CableTie",
        "ACE_Flashlight_XL50",
        "ACE_EarPlugs",
        "ACE_Chemlight_Orange"
    ]]
];

// --- Marine pools ---
private _poolsMarine = createHashMapFromArray [
    // Headgear variants
    ["headgear", [
        "TCP_H_Helmet_CH43A_Olive",
        "TCP_H_Helmet_CH43A_Green",
        "TCP_H_Helmet_CH43A_Tan"
    ]],
    // Vest variants
    ["vest", [
        "TCP_V_M43A_GungnirS_3_Olive",
        "TCP_V_M43A_GungnirS_2_Olive",
        "TCP_V_M43A_BaseSec_2_Olive"
    ]],
    // NVG options
    ["nvg", [
        "OPTRE_NVG",
        "NVGoggles"
    ]],
    // Primary weapon optics
    ["optics", [
        "OPTRE_MA5_BUIS",
        "optic_Aco",
        "optic_Hamr"
    ]],
    // Suppressors/muzzle devices
    ["muzzles", [
        "muzzle_snds_M"
    ]],
    // Laser/flashlight pointers
    ["pointers", [
        "acc_pointer_IR",
        "acc_flashlight"
    ]],
    // Bipods — empty array means none assigned for Marines
    ["bipods", []],
    // Optional inventory extras
    ["extras", [
        "ACE_Canteen",
        "ACE_MapTools",
        "ACE_EarPlugs",
        "ACE_Flashlight_XL50"
    ]]
];

private _pool = if (_isODST) then {_poolsODST} else {_poolsMarine};

// -------------------------------------------------------------------------
// Helper: pick a random element from an array; returns "" if empty.
// -------------------------------------------------------------------------
private _fnc_pick = {
    params ["_arr"];
    if (_arr isEqualTo []) exitWith {""};
    selectRandom _arr
};

// -------------------------------------------------------------------------
// Randomize headgear
// -------------------------------------------------------------------------
removeHeadgear _unit;
private _hg = [(_pool get "headgear")] call _fnc_pick;
if (_hg != "") then { _unit addHeadgear _hg; };

// -------------------------------------------------------------------------
// Randomize vest — preserve vest contents
// -------------------------------------------------------------------------
private _vestItems = vestItems _unit;
removeVest _unit;
private _vest = [(_pool get "vest")] call _fnc_pick;
if (_vest != "") then {
    _unit addVest _vest;
    { _unit addItemToVest _x; } forEach _vestItems;
};

// -------------------------------------------------------------------------
// Randomize NVG — unlink any existing NVGs before assigning new one
// -------------------------------------------------------------------------
{
    private _nvgClass = _x;
    if (_unit linkedItems findIf { _x == _nvgClass } >= 0) then { _unit unlinkItem _nvgClass; };
} forEach ["OPTRE_NVG_Gen3","OPTRE_NVG","NVGoggles","NVGoggles_OPFOR","NVGoggles_INDEP"];
private _nvg = [(_pool get "nvg")] call _fnc_pick;
if (_nvg != "") then { _unit linkItem _nvg; };

// -------------------------------------------------------------------------
// Randomize primary weapon attachments (per-unit, not shared state)
// Strips all existing attachments then reapplies a random selection.
// -------------------------------------------------------------------------
private _pw = primaryWeapon _unit;
if (_pw != "") then {
    // Remove current attachments so the random pick is always applied clean
    { _unit removePrimaryWeaponItem _x; } forEach (primaryWeaponItems _unit);

    // Apply one random item from each attachment slot pool (skips empty pools)
    {
        private _item = [(_pool get _x)] call _fnc_pick;
        if (_item != "") then { _unit addPrimaryWeaponItem _item; };
    } forEach ["optics","muzzles","pointers","bipods"];
};

// -------------------------------------------------------------------------
// Add 1-2 random extras to inventory (no duplicates within one pass)
// -------------------------------------------------------------------------
private _extras = +(_pool get "extras");
if !(_extras isEqualTo []) then {
    private _count = 1 min (count _extras) max 0;
    _count = _count + floor random (2 min (count _extras));
    for "_i" from 1 to _count do {
        private _idx = floor random (count _extras);
        _unit addItem (_extras select _idx);
        _extras deleteAt _idx; // prevent duplicates within this pass
    };
};
