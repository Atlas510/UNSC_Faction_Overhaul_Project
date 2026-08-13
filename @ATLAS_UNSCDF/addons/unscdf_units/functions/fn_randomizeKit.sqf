/*
    fn_randomizeKit.sqf
    Author: Atlas

    Description:
        Per-class equipment randomization for UNSCDF soldiers.
        Each unit class has its own individually tunable pool of headgear,
        vest, NVGs, primary weapon attachments, and optional inventory extras.
        A class with no entry in the pool map (or whose entry is an empty
        HashMap) receives no randomization and keeps its assigned gear intact.

    Usage:
        [_unit] call ATLAS_fnc_randomizeKit;

    Parameters:
        _unit - The unit to randomize <OBJECT>

    How to extend / fine-tune:
        - Find the entry for the class you want to adjust in _classPools below.
        - Edit the arrays under any category key:
              "headgear"  — helmet classnames to pick from
              "vest"      — vest classnames to pick from
              "nvg"       — NVG classnames to pick from
              "optics"    — primary-weapon optic classnames
              "muzzles"   — primary-weapon suppressor/muzzle classnames
              "pointers"  — primary-weapon laser/flashlight classnames
              "bipods"    — primary-weapon bipod classnames
              "extras"    — inventory items (1-2 added at random, no duplicates)
        - An empty array [] for any key means that category is skipped.
        - To make a class fully exempt from randomization, simply omit its
          classname from _classPools entirely (or set all its arrays to []).
        - To add a new unit class, copy an existing block and change the key to
          the exact classname (case-sensitive).
*/

params ["_unit"];
if (isNull _unit) exitWith {};
if (!local _unit) exitWith {};

// =========================================================================
// Per-class pool definitions
// Key   = exact unit classname (case-sensitive, must match typeOf _unit)
// Value = HashMap of category → array of classnames
//
// Classes not listed here are untouched (fully exempt by omission).
// =========================================================================
private _classPools = createHashMapFromArray [

    // -----------------------------------------------------------------
    // MARINES
    // -----------------------------------------------------------------

    ["B_UNSCDF_Officer", createHashMapFromArray [
        ["headgear",  ["TCP_H_PatrolCap_Olive","TCP_H_PatrolCap_Green"]],
        ["vest",      ["TCP_V_M43A_Light_1_Olive","TCP_V_M43A_Light_2_Olive"]],
        ["nvg",       []],
        ["optics",    ["CTGCY_BR55_Scope","optic_Holosight"]],
        ["muzzles",   []],
        ["pointers",  ["acc_pointer_IR"]],
        ["bipods",    []],
        ["extras",    ["ACE_MapTools","ACE_Altimeter","ACE_EarPlugs"]]
    ]],

    ["B_UNSCDF_Rifleman", createHashMapFromArray [
        ["headgear",  ["TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Green","TCP_H_Helmet_CH43A_Tan"]],
        ["vest",      ["TCP_V_M43A_GungnirS_3_Olive","TCP_V_M43A_GungnirS_2_Olive","TCP_V_M43A_BaseSec_2_Olive"]],
        ["nvg",       ["OPTRE_NVG","NVGoggles"]],
        ["optics",    ["OPTRE_MA5_BUIS","optic_Aco","optic_Hamr"]],
        ["muzzles",   ["muzzle_snds_M"]],
        ["pointers",  ["acc_pointer_IR","acc_flashlight"]],
        ["bipods",    []],
        ["extras",    ["ACE_Canteen","ACE_MapTools","ACE_EarPlugs","ACE_Flashlight_XL50"]]
    ]],

    ["B_UNSCDF_Squad_Leader", createHashMapFromArray [
        ["headgear",  ["TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Green","TCP_H_Helmet_CH43A_Tan"]],
        ["vest",      ["TCP_V_M43A_GungnirS_3_Olive","TCP_V_M43A_GungnirS_2_Olive"]],
        ["nvg",       ["OPTRE_NVG","NVGoggles"]],
        ["optics",    ["CTGCY_BR55_Scope","optic_Holosight","optic_ERCO_blk_F"]],
        ["muzzles",   ["muzzle_snds_M"]],
        ["pointers",  ["acc_pointer_IR","acc_flashlight"]],
        ["bipods",    []],
        ["extras",    ["ACE_Canteen","ACE_MapTools","ACE_EarPlugs","ACE_Chemlight_Orange"]]
    ]],

    ["B_UNSCDF_Team_Leader", createHashMapFromArray [
        ["headgear",  ["TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Green","TCP_H_Helmet_CH43A_Tan"]],
        ["vest",      ["TCP_V_M43A_GungnirS_3_Olive","TCP_V_M43A_GungnirS_2_Olive"]],
        ["nvg",       ["OPTRE_NVG","NVGoggles"]],
        ["optics",    ["CTGCY_BR55_Scope","optic_Holosight","optic_ERCO_blk_F"]],
        ["muzzles",   ["muzzle_snds_M"]],
        ["pointers",  ["acc_pointer_IR","acc_flashlight"]],
        ["bipods",    []],
        ["extras",    ["ACE_Canteen","ACE_MapTools","ACE_EarPlugs"]]
    ]],

    ["B_UNSCDF_Ammo_Bearer", createHashMapFromArray [
        ["headgear",  ["TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Green","TCP_H_Helmet_CH43A_Tan"]],
        ["vest",      ["TCP_V_M43A_GungnirS_3_Olive","TCP_V_M43A_BaseSec_2_Olive"]],
        ["nvg",       ["OPTRE_NVG","NVGoggles"]],
        ["optics",    ["OPTRE_MA5_BUIS","optic_Aco"]],
        ["muzzles",   []],
        ["pointers",  ["acc_pointer_IR","acc_flashlight"]],
        ["bipods",    []],
        ["extras",    ["ACE_Canteen","ACE_EarPlugs","ACE_CableTie"]]
    ]],

    ["B_UNSCDF_Autorifleman_01", createHashMapFromArray [
        ["headgear",  ["TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Green","TCP_H_Helmet_CH43A_Tan"]],
        ["vest",      ["TCP_V_M43A_GungnirS_3_Olive","TCP_V_M43A_BaseSec_2_Olive"]],
        ["nvg",       ["OPTRE_NVG"]],
        ["optics",    ["optic_Aco","optic_Hamr"]],
        ["muzzles",   []],
        ["pointers",  ["acc_pointer_IR"]],
        ["bipods",    []],
        ["extras",    ["ACE_Canteen","ACE_EarPlugs"]]
    ]],

    // Corpsman — all arrays empty: no randomization applied
    ["B_UNSCDF_Corpsman", createHashMapFromArray [
        ["headgear",  []],
        ["vest",      []],
        ["nvg",       []],
        ["optics",    []],
        ["muzzles",   []],
        ["pointers",  []],
        ["bipods",    []],
        ["extras",    []]
    ]],

    // Crewman — all arrays empty
    ["B_UNSCDF_Crewman", createHashMapFromArray [
        ["headgear",  []],
        ["vest",      []],
        ["nvg",       []],
        ["optics",    []],
        ["muzzles",   []],
        ["pointers",  []],
        ["bipods",    []],
        ["extras",    []]
    ]],

    ["B_UNSCDF_Engineer", createHashMapFromArray [
        ["headgear",  ["TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Green","TCP_H_Helmet_CH43A_Tan"]],
        ["vest",      ["TCP_V_M43A_GungnirS_3_Olive","TCP_V_M43A_BaseSec_2_Olive"]],
        ["nvg",       ["OPTRE_NVG","NVGoggles"]],
        ["optics",    ["OPTRE_MA5_BUIS","optic_Aco"]],
        ["muzzles",   []],
        ["pointers",  ["acc_pointer_IR","acc_flashlight"]],
        ["bipods",    []],
        ["extras",    ["ACE_Canteen","ACE_EarPlugs","ACE_CableTie","ACE_Flashlight_XL50"]]
    ]],

    ["B_UNSCDF_Explosive_Specialist", createHashMapFromArray [
        ["headgear",  ["TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Green","TCP_H_Helmet_CH43A_Tan"]],
        ["vest",      ["TCP_V_M43A_GungnirS_3_Olive","TCP_V_M43A_BaseSec_2_Olive"]],
        ["nvg",       ["OPTRE_NVG","NVGoggles"]],
        ["optics",    ["OPTRE_MA5_BUIS","optic_Aco"]],
        ["muzzles",   []],
        ["pointers",  ["acc_pointer_IR","acc_flashlight"]],
        ["bipods",    []],
        ["extras",    ["ACE_Canteen","ACE_EarPlugs","ACE_CableTie"]]
    ]],

    ["B_UNSCDF_Grenadier", createHashMapFromArray [
        ["headgear",  ["TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Green","TCP_H_Helmet_CH43A_Tan"]],
        ["vest",      ["TCP_V_M43A_GungnirS_3_Olive","TCP_V_M43A_GungnirS_2_Olive"]],
        ["nvg",       ["OPTRE_NVG","NVGoggles"]],
        ["optics",    ["OPTRE_MA5_BUIS","optic_Aco","optic_Hamr"]],
        ["muzzles",   ["muzzle_snds_M"]],
        ["pointers",  ["acc_pointer_IR","acc_flashlight"]],
        ["bipods",    []],
        ["extras",    ["ACE_Canteen","ACE_EarPlugs","ACE_MapTools"]]
    ]],

    ["B_UNSCDF_Marksman", createHashMapFromArray [
        ["headgear",  ["TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Green"]],
        ["vest",      ["TCP_V_M43A_GungnirS_3_Olive","TCP_V_M43A_BaseSec_2_Olive"]],
        ["nvg",       ["OPTRE_NVG"]],
        ["optics",    ["optic_ERCO_blk_F","optic_Hamr"]],
        ["muzzles",   ["muzzle_snds_H"]],
        ["pointers",  ["acc_pointer_IR"]],
        ["bipods",    []],
        ["extras",    ["ACE_EarPlugs","ACE_Flashlight_XL50"]]
    ]],

    ["B_UNSCDF_Missile_Speacialist_AA", createHashMapFromArray [
        ["headgear",  ["TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Green","TCP_H_Helmet_CH43A_Tan"]],
        ["vest",      ["TCP_V_M43A_GungnirS_3_Olive","TCP_V_M43A_BaseSec_2_Olive"]],
        ["nvg",       ["OPTRE_NVG","NVGoggles"]],
        ["optics",    ["OPTRE_MA5_BUIS","optic_Aco"]],
        ["muzzles",   []],
        ["pointers",  ["acc_pointer_IR"]],
        ["bipods",    []],
        ["extras",    ["ACE_Canteen","ACE_EarPlugs"]]
    ]],

    ["B_UNSCDF_Missile_Specialist_AT", createHashMapFromArray [
        ["headgear",  ["TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Green","TCP_H_Helmet_CH43A_Tan"]],
        ["vest",      ["TCP_V_M43A_GungnirS_3_Olive","TCP_V_M43A_BaseSec_2_Olive"]],
        ["nvg",       ["OPTRE_NVG","NVGoggles"]],
        ["optics",    ["OPTRE_MA5_BUIS","optic_Aco"]],
        ["muzzles",   []],
        ["pointers",  ["acc_pointer_IR"]],
        ["bipods",    []],
        ["extras",    ["ACE_Canteen","ACE_EarPlugs"]]
    ]],

    ["B_UNSCDF_Repair_Specialist", createHashMapFromArray [
        ["headgear",  ["TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Green","TCP_H_Helmet_CH43A_Tan"]],
        ["vest",      ["TCP_V_M43A_GungnirS_3_Olive","TCP_V_M43A_BaseSec_2_Olive"]],
        ["nvg",       ["OPTRE_NVG","NVGoggles"]],
        ["optics",    ["OPTRE_MA5_BUIS","optic_Aco"]],
        ["muzzles",   []],
        ["pointers",  ["acc_pointer_IR","acc_flashlight"]],
        ["bipods",    []],
        ["extras",    ["ACE_Canteen","ACE_EarPlugs","ACE_CableTie","ACE_Flashlight_XL50"]]
    ]],

    ["B_UNSCDF_Rifleman_AT", createHashMapFromArray [
        ["headgear",  ["TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Green","TCP_H_Helmet_CH43A_Tan"]],
        ["vest",      ["TCP_V_M43A_GungnirS_3_Olive","TCP_V_M43A_BaseSec_2_Olive"]],
        ["nvg",       ["OPTRE_NVG","NVGoggles"]],
        ["optics",    ["OPTRE_MA5_BUIS","optic_Aco"]],
        ["muzzles",   ["muzzle_snds_M"]],
        ["pointers",  ["acc_pointer_IR","acc_flashlight"]],
        ["bipods",    []],
        ["extras",    ["ACE_Canteen","ACE_EarPlugs"]]
    ]],

    ["B_UNSCDF_Rifleman_Unarmed", createHashMapFromArray [
        ["headgear",  ["TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Green","TCP_H_Helmet_CH43A_Tan"]],
        ["vest",      ["TCP_V_M43A_Light_1_Olive","TCP_V_M43A_Light_2_Olive"]],
        ["nvg",       []],
        ["optics",    []],
        ["muzzles",   []],
        ["pointers",  []],
        ["bipods",    []],
        ["extras",    ["ACE_Canteen","ACE_EarPlugs"]]
    ]],

    ["B_UNSCDF_Rifleman_Light", createHashMapFromArray [
        ["headgear",  ["TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Green","TCP_H_Helmet_CH43A_Tan"]],
        ["vest",      ["TCP_V_M43A_GungnirS_3_Olive","TCP_V_M43A_BaseSec_2_Olive"]],
        ["nvg",       ["OPTRE_NVG","NVGoggles"]],
        ["optics",    ["OPTRE_MA5_BUIS","optic_Aco"]],
        ["muzzles",   ["muzzle_snds_M"]],
        ["pointers",  ["acc_pointer_IR","acc_flashlight"]],
        ["bipods",    []],
        ["extras",    ["ACE_Canteen","ACE_EarPlugs"]]
    ]],

    // UAV Operators — headgear/vest only, no weapon attachments
    ["B_UNSCDF_UAV_Operator_OQ_38_Wren", createHashMapFromArray [
        ["headgear",  ["TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Green"]],
        ["vest",      ["TCP_V_M43A_Light_1_Olive","TCP_V_M43A_Light_2_Olive"]],
        ["nvg",       []],
        ["optics",    []],
        ["muzzles",   []],
        ["pointers",  []],
        ["bipods",    []],
        ["extras",    ["ACE_MapTools","ACE_EarPlugs"]]
    ]],

    ["B_UNSCDF_UAV_Operator_OQ_40_Minibee", createHashMapFromArray [
        ["headgear",  ["TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Green"]],
        ["vest",      ["TCP_V_M43A_Light_1_Olive","TCP_V_M43A_Light_2_Olive"]],
        ["nvg",       []],
        ["optics",    []],
        ["muzzles",   []],
        ["pointers",  []],
        ["bipods",    []],
        ["extras",    ["ACE_MapTools","ACE_EarPlugs"]]
    ]],

    // Sniper — no randomization (specialized fixed gear)
    ["B_UNSCDF_Sniper", createHashMapFromArray [
        ["headgear",  []],
        ["vest",      []],
        ["nvg",       []],
        ["optics",    []],
        ["muzzles",   []],
        ["pointers",  []],
        ["bipods",    []],
        ["extras",    []]
    ]],

    ["B_UNSCDF_Forward_Observer", createHashMapFromArray [
        ["headgear",  ["TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Green","TCP_H_Helmet_CH43A_Tan"]],
        ["vest",      ["TCP_V_M43A_GungnirS_3_Olive","TCP_V_M43A_GungnirS_2_Olive"]],
        ["nvg",       ["OPTRE_NVG","NVGoggles"]],
        ["optics",    ["OPTRE_MA5_BUIS","optic_Aco"]],
        ["muzzles",   []],
        ["pointers",  ["acc_pointer_IR"]],
        ["bipods",    []],
        ["extras",    ["ACE_MapTools","ACE_EarPlugs","ACE_Altimeter"]]
    ]],

    // Pilot — no randomization
    ["B_UNSCDF_Marine_Pilot", createHashMapFromArray [
        ["headgear",  []],
        ["vest",      []],
        ["nvg",       []],
        ["optics",    []],
        ["muzzles",   []],
        ["pointers",  []],
        ["bipods",    []],
        ["extras",    []]
    ]],

    // Aircrewman — no randomization
    ["B_UNSCDF_Marine_Aircrewman", createHashMapFromArray [
        ["headgear",  []],
        ["vest",      []],
        ["nvg",       []],
        ["optics",    []],
        ["muzzles",   []],
        ["pointers",  []],
        ["bipods",    []],
        ["extras",    []]
    ]],

    ["B_UNSCDF_Heavy_Gunner", createHashMapFromArray [
        ["headgear",  ["TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Green","TCP_H_Helmet_CH43A_Tan"]],
        ["vest",      ["TCP_V_M43A_GungnirS_3_Olive","TCP_V_M43A_BaseSec_2_Olive"]],
        ["nvg",       ["OPTRE_NVG"]],
        ["optics",    ["optic_Aco","optic_Hamr"]],
        ["muzzles",   []],
        ["pointers",  ["acc_pointer_IR"]],
        ["bipods",    []],
        ["extras",    ["ACE_Canteen","ACE_EarPlugs"]]
    ]],

    ["B_UNSCDF_Asst_Heavy_Gunner", createHashMapFromArray [
        ["headgear",  ["TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Green","TCP_H_Helmet_CH43A_Tan"]],
        ["vest",      ["TCP_V_M43A_GungnirS_3_Olive","TCP_V_M43A_BaseSec_2_Olive"]],
        ["nvg",       ["OPTRE_NVG","NVGoggles"]],
        ["optics",    ["OPTRE_MA5_BUIS","optic_Aco"]],
        ["muzzles",   []],
        ["pointers",  ["acc_pointer_IR"]],
        ["bipods",    []],
        ["extras",    ["ACE_Canteen","ACE_EarPlugs"]]
    ]],

    // -----------------------------------------------------------------
    // ODST
    // -----------------------------------------------------------------

    ["B_UNSCDF_ODST_Rifleman", createHashMapFromArray [
        ["headgear",  ["TCP_H_Helmet_ECH55D_Black_Silver","TCP_H_Helmet_ECH55D_Black_Gold","TCP_H_Helmet_ECH55D_Black_Black"]],
        ["vest",      ["TCP_V_M43D_ODST_3_1_Black","TCP_V_M43D_ODST_3_2_Black","TCP_V_M43D_ODST_3_3_Black"]],
        ["nvg",       ["OPTRE_NVG_Gen3","OPTRE_NVG"]],
        ["optics",    ["CTGCY_BR55_Scope","optic_Holosight","optic_ERCO_blk_F"]],
        ["muzzles",   ["muzzle_snds_H"]],
        ["pointers",  ["acc_pointer_IR","acc_flashlight"]],
        ["bipods",    []],
        ["extras",    ["ACE_CableTie","ACE_Flashlight_XL50","ACE_EarPlugs","ACE_Chemlight_Orange"]]
    ]],

    ["B_UNSCDF_ODST_Team_Leader", createHashMapFromArray [
        ["headgear",  ["TCP_H_Helmet_ECH55D_Black_Silver","TCP_H_Helmet_ECH55D_Black_Gold","TCP_H_Helmet_ECH55D_Black_Black"]],
        ["vest",      ["TCP_V_M43D_ODST_3_1_Black","TCP_V_M43D_ODST_3_2_Black"]],
        ["nvg",       ["OPTRE_NVG_Gen3","OPTRE_NVG"]],
        ["optics",    ["CTGCY_BR55_Scope","optic_ERCO_blk_F"]],
        ["muzzles",   ["muzzle_snds_H"]],
        ["pointers",  ["acc_pointer_IR","acc_flashlight"]],
        ["bipods",    []],
        ["extras",    ["ACE_CableTie","ACE_EarPlugs","ACE_Chemlight_Orange","ACE_MapTools"]]
    ]],

    ["B_UNSCDF_ODST_Scout", createHashMapFromArray [
        ["headgear",  ["TCP_H_Helmet_ECH55D_Black_Silver","TCP_H_Helmet_ECH55D_Black_Black"]],
        ["vest",      ["TCP_V_M43D_ODST_3_1_Black","TCP_V_M43D_ODST_3_2_Black","TCP_V_M43D_ODST_3_3_Black"]],
        ["nvg",       ["OPTRE_NVG_Gen3","OPTRE_NVG"]],
        ["optics",    ["optic_ERCO_blk_F","optic_Holosight"]],
        ["muzzles",   ["muzzle_snds_H"]],
        ["pointers",  ["acc_pointer_IR"]],
        ["bipods",    []],
        ["extras",    ["ACE_CableTie","ACE_EarPlugs","ACE_Flashlight_XL50"]]
    ]],

    // ODST Corpsman — no randomization (specialized fixed gear)
    ["B_UNSCDF_ODST_Corpsman", createHashMapFromArray [
        ["headgear",  []],
        ["vest",      []],
        ["nvg",       []],
        ["optics",    []],
        ["muzzles",   []],
        ["pointers",  []],
        ["bipods",    []],
        ["extras",    []]
    ]],

    ["B_UNSCDF_ODST_AT_Specialist", createHashMapFromArray [
        ["headgear",  ["TCP_H_Helmet_ECH55D_Black_Silver","TCP_H_Helmet_ECH55D_Black_Gold","TCP_H_Helmet_ECH55D_Black_Black"]],
        ["vest",      ["TCP_V_M43D_ODST_3_1_Black","TCP_V_M43D_ODST_3_2_Black"]],
        ["nvg",       ["OPTRE_NVG_Gen3","OPTRE_NVG"]],
        ["optics",    ["CTGCY_BR55_Scope","optic_Holosight"]],
        ["muzzles",   ["muzzle_snds_H"]],
        ["pointers",  ["acc_pointer_IR"]],
        ["bipods",    []],
        ["extras",    ["ACE_CableTie","ACE_EarPlugs"]]
    ]],

    ["B_UNSCDF_ODST_AA_Specialist", createHashMapFromArray [
        ["headgear",  ["TCP_H_Helmet_ECH55D_Black_Silver","TCP_H_Helmet_ECH55D_Black_Gold","TCP_H_Helmet_ECH55D_Black_Black"]],
        ["vest",      ["TCP_V_M43D_ODST_3_1_Black","TCP_V_M43D_ODST_3_2_Black"]],
        ["nvg",       ["OPTRE_NVG_Gen3","OPTRE_NVG"]],
        ["optics",    ["CTGCY_BR55_Scope","optic_Holosight"]],
        ["muzzles",   ["muzzle_snds_H"]],
        ["pointers",  ["acc_pointer_IR"]],
        ["bipods",    []],
        ["extras",    ["ACE_CableTie","ACE_EarPlugs"]]
    ]],

    ["B_UNSCDF_ODST_Marksman", createHashMapFromArray [
        ["headgear",  ["TCP_H_Helmet_ECH55D_Black_Silver","TCP_H_Helmet_ECH55D_Black_Black"]],
        ["vest",      ["TCP_V_M43D_ODST_3_1_Black","TCP_V_M43D_ODST_3_2_Black"]],
        ["nvg",       ["OPTRE_NVG_Gen3"]],
        ["optics",    ["optic_ERCO_blk_F"]],
        ["muzzles",   ["muzzle_snds_H"]],
        ["pointers",  ["acc_pointer_IR"]],
        ["bipods",    []],
        ["extras",    ["ACE_EarPlugs","ACE_Flashlight_XL50"]]
    ]],

    // ODST Sniper — no randomization
    ["B_UNSCDF_ODST_Sniper", createHashMapFromArray [
        ["headgear",  []],
        ["vest",      []],
        ["nvg",       []],
        ["optics",    []],
        ["muzzles",   []],
        ["pointers",  []],
        ["bipods",    []],
        ["extras",    []]
    ]],

    ["B_UNSCDF_ODST_Breacher", createHashMapFromArray [
        ["headgear",  ["TCP_H_Helmet_ECH55D_Black_Silver","TCP_H_Helmet_ECH55D_Black_Gold","TCP_H_Helmet_ECH55D_Black_Black"]],
        ["vest",      ["TCP_V_M43D_ODST_3_1_Black","TCP_V_M43D_ODST_3_2_Black","TCP_V_M43D_ODST_3_3_Black"]],
        ["nvg",       ["OPTRE_NVG_Gen3","OPTRE_NVG"]],
        ["optics",    ["optic_Holosight","optic_ERCO_blk_F"]],
        ["muzzles",   ["muzzle_snds_H"]],
        ["pointers",  ["acc_pointer_IR","acc_flashlight"]],
        ["bipods",    []],
        ["extras",    ["ACE_CableTie","ACE_EarPlugs","ACE_Chemlight_Orange"]]
    ]],

    ["B_UNSCDF_ODST_Autorifleman", createHashMapFromArray [
        ["headgear",  ["TCP_H_Helmet_ECH55D_Black_Silver","TCP_H_Helmet_ECH55D_Black_Gold","TCP_H_Helmet_ECH55D_Black_Black"]],
        ["vest",      ["TCP_V_M43D_ODST_3_1_Black","TCP_V_M43D_ODST_3_2_Black"]],
        ["nvg",       ["OPTRE_NVG_Gen3","OPTRE_NVG"]],
        ["optics",    ["optic_Holosight","optic_ERCO_blk_F"]],
        ["muzzles",   []],
        ["pointers",  ["acc_pointer_IR"]],
        ["bipods",    []],
        ["extras",    ["ACE_CableTie","ACE_EarPlugs"]]
    ]]

];

// =========================================================================
// Lookup this unit's pool — exit cleanly if no entry exists
// =========================================================================
private _unitClass = typeOf _unit;
if !(_unitClass in _classPools) exitWith {};

private _pool = _classPools get _unitClass;

// =========================================================================
// Helper: pick a random element from an array; returns "" if array is empty.
// =========================================================================
private _fnc_pick = {
    params ["_arr"];
    if (_arr isEqualTo []) exitWith {""};
    selectRandom _arr
};

// =========================================================================
// Randomize headgear
// =========================================================================
private _hg = [(_pool get "headgear")] call _fnc_pick;
if (_hg != "") then {
    removeHeadgear _unit;
    _unit addHeadgear _hg;
};

// =========================================================================
// Randomize vest — preserve vest contents
// =========================================================================
private _vest = [(_pool get "vest")] call _fnc_pick;
if (_vest != "") then {
    private _vestItems = vestItems _unit;
    removeVest _unit;
    _unit addVest _vest;
    { _unit addItemToVest _x; } forEach _vestItems;
};

// =========================================================================
// Randomize NVG — unlink any existing HMD first, then assign new one
// =========================================================================
private _nvg = [(_pool get "nvg")] call _fnc_pick;
if (_nvg != "") then {
    private _currentHmd = hmd _unit;
    if (_currentHmd != "") then { _unit unlinkItem _currentHmd; };
    _unit linkItem _nvg;
};

// =========================================================================
// Randomize primary weapon attachments (per-unit, clean slate each time)
// =========================================================================
private _pw = primaryWeapon _unit;
if (_pw != "") then {
    // Strip all current attachments before applying random selections
    { if (_x != "") then { _unit removePrimaryWeaponItem _x; }; } forEach (primaryWeaponItems _unit);

    // One random item per slot; skipped silently if that slot's array is empty
    {
        private _item = [(_pool get _x)] call _fnc_pick;
        if (_item != "") then { _unit addPrimaryWeaponItem _item; };
    } forEach ["optics","muzzles","pointers","bipods"];
};

// =========================================================================
// Add 1-2 random extras to inventory (no duplicates within one pass)
// =========================================================================
private _extras = +(_pool get "extras");
if !(_extras isEqualTo []) then {
    private _available = count _extras;
    private _count = (1 + floor random 2) min _available;
    for "_i" from 1 to _count do {
        private _idx = floor random (count _extras);
        _unit addItem (_extras select _idx);
        _extras deleteAt _idx;
    };
};
