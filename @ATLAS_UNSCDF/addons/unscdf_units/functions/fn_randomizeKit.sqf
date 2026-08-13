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
        ["headgear",  ["TCP_Patrol_Cap_Olive", "none"]],
        ["vest",      ["TCP_V_M43A_Light_1_Olive","TCP_V_M43A_Light_2_Olive","TCP_V_M43A_Light_3_Olive","TCP_V_M43A_GungnirS_3_Olive" ]],
        ["nvg",       ["OPTRE_NVG"]],
        ["optics",    ["CTGCY_BR55_Scope_ACE","OPTRE_M12_Optic","OPTRE_M12_Optic_Green","OPTRE_M12_Optic_Red"]],
        ["muzzles",   []],
        ["pointers",  ["OPTRE_BMR_Laser", "none"]],
        ["bipods",    []],
        ["extras",    ["ACE_MRE_BeefStew_Item", "ACE_MRE_ChikenTikkaMasala_Item", "ACE_MRE_ChickenHerbDumplings_Item", "ACE_MRE_CreamChickenSoup_Item",
                       "ACE_MRE_CreamTomatoSoup_Item", "ACE_MRE_LambCurry_Item", "ACE_MRE_MeatballsPasta_Item", "ACE_MRE_SteakVegetables_Item " ]]
    ]],

    ["B_UNSCDF_Rifleman", createHashMapFromArray [
        ["headgear",  ["TCP_H_Helmet_CH43A_Olive", "TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Olive","TCP_H_WatchCap_Olive","TCP_H_Helmet_ECH43A_Olive_Silver",
                       "TCP_H_booniehat_Olive","WOLFoT_TcP_UNSC_A_Boonie_Woodland_2"]],
        ["vest",      ["TCP_V_M43A_GungnirS_1_Olive","TCP_V_M43A_GungnirS_2_Olive","TCP_V_M43A_GungnirS_3_Olive"]],
        ["nvg",       ["OPTRE_NVG"]],
        ["optics",    ["OPTRE_MA5_BUIS","CTGCY_MA5_Sight_2"]],
        ["muzzles",   []],
        ["pointers",  []],
        ["bipods",    []],
        ["extras",    ["ACE_MRE_BeefStew_Item", "ACE_MRE_ChikenTikkaMasala_Item", "ACE_MRE_ChickenHerbDumplings_Item", "ACE_MRE_CreamChickenSoup_Item",
                       "ACE_MRE_CreamTomatoSoup_Item", "ACE_MRE_LambCurry_Item", "ACE_MRE_MeatballsPasta_Item", "ACE_MRE_SteakVegetables_Item "]]
    ]],

    ["B_UNSCDF_Squad_Leader", createHashMapFromArray [
        ["headgear",  ["TCP_H_Helmet_CH43A_Olive", "TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Olive","TCP_H_WatchCap_Olive","TCP_H_Helmet_ECH43A_Olive_Silver",
                       "TCP_H_booniehat_Olive","WOLFoT_TcP_UNSC_A_Boonie_Woodland_2"]],
        ["vest",      ["TCP_V_M43A_GungnirS_1_Olive","TCP_V_M43A_GungnirS_2_Olive","TCP_V_M43A_GungnirS_3_Olive"]],
        ["nvg",       ["OPTRE_NVG"]],
        ["optics",    ["CTGCY_BR55_Scope_ACE","OPTRE_M12_Optic","OPTRE_M12_Optic_Green","OPTRE_M12_Optic_Red"]],
        ["muzzles",   []],
        ["pointers",  []],
        ["bipods",    []],
        ["extras",    ["ACE_MRE_BeefStew_Item", "ACE_MRE_ChikenTikkaMasala_Item", "ACE_MRE_ChickenHerbDumplings_Item", "ACE_MRE_CreamChickenSoup_Item",
                       "ACE_MRE_CreamTomatoSoup_Item", "ACE_MRE_LambCurry_Item", "ACE_MRE_MeatballsPasta_Item", "ACE_MRE_SteakVegetables_Item "]]
    ]],

    ["B_UNSCDF_Team_Leader", createHashMapFromArray [
        ["headgear",  ["TCP_H_Helmet_CH43A_Olive", "TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Olive","TCP_H_WatchCap_Olive","TCP_H_Helmet_ECH43A_Olive_Silver",
                       "TCP_H_booniehat_Olive","WOLFoT_TcP_UNSC_A_Boonie_Woodland_2"]],
        ["vest",      ["TCP_V_M43A_GungnirS_1_Olive","TCP_V_M43A_GungnirS_2_Olive","TCP_V_M43A_GungnirS_3_Olive"]],
        ["nvg",       ["OPTRE_NVG"]],
        ["optics",    ["OPTRE_MA5_BUIS","CTGCY_MA5_Sight_2"]],
        ["muzzles",   []],
        ["pointers",  []],
        ["bipods",    []],
        ["extras",    ["ACE_MRE_BeefStew_Item", "ACE_MRE_ChikenTikkaMasala_Item", "ACE_MRE_ChickenHerbDumplings_Item", "ACE_MRE_CreamChickenSoup_Item",
                       "ACE_MRE_CreamTomatoSoup_Item", "ACE_MRE_LambCurry_Item", "ACE_MRE_MeatballsPasta_Item", "ACE_MRE_SteakVegetables_Item " ]]
    ]],

    ["B_UNSCDF_Ammo_Bearer", createHashMapFromArray [
        ["headgear",  ["TCP_H_Helmet_CH43A_Olive", "TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Olive","TCP_H_WatchCap_Olive","TCP_H_Helmet_ECH43A_Olive_Silver",
                       "TCP_H_booniehat_Olive","WOLFoT_TcP_UNSC_A_Boonie_Woodland_2"]],
        ["vest",      ["TCP_V_M43A_GungnirS_1_Olive","TCP_V_M43A_GungnirS_2_Olive","TCP_V_M43A_GungnirS_3_Olive"]],
        ["nvg",       ["OPTRE_NVG"]],
        ["optics",    ["OPTRE_MA5_BUIS","CTGCY_MA5_Sight_2"]],
        ["muzzles",   []],
        ["pointers",  []],
        ["bipods",    []],
        ["extras",     ["ACE_MRE_BeefStew_Item", "ACE_MRE_ChikenTikkaMasala_Item", "ACE_MRE_ChickenHerbDumplings_Item", "ACE_MRE_CreamChickenSoup_Item",
                        "ACE_MRE_CreamTomatoSoup_Item", "ACE_MRE_LambCurry_Item", "ACE_MRE_MeatballsPasta_Item", "ACE_MRE_SteakVegetables_Item "]]
    ]],

    ["B_UNSCDF_Autorifleman_01", createHashMapFromArray [
        ["headgear",  ["TCP_H_Helmet_CH43A_Olive", "TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Olive","TCP_H_WatchCap_Olive","TCP_H_Helmet_ECH43A_Olive_Silver",
                       "TCP_H_booniehat_Olive","WOLFoT_TcP_UNSC_A_Boonie_Woodland_2"]],
        ["vest",      ["TCP_V_M43A_GungnirL_1_Olive","TCP_V_M43A_GungnirL_2_Olive","TCP_V_M43A_GungnirL_3_Olive"]],
        ["nvg",       ["OPTRE_NVG"]],
        ["optics",    ["OPTRE_M73_SmartLink", "none"]],
        ["muzzles",   []],
        ["pointers",  []],
        ["bipods",    []],
        ["extras",     ["ACE_MRE_BeefStew_Item", "ACE_MRE_ChikenTikkaMasala_Item", "ACE_MRE_ChickenHerbDumplings_Item", "ACE_MRE_CreamChickenSoup_Item",
                        "ACE_MRE_CreamTomatoSoup_Item", "ACE_MRE_LambCurry_Item", "ACE_MRE_MeatballsPasta_Item", "ACE_MRE_SteakVegetables_Item "]]
    ]],

    // Corpsman — all arrays empty: no randomization applied
    ["B_UNSCDF_Corpsman", createHashMapFromArray [
        ["headgear",  []],
        ["vest",      ["TCP_V_M43A_GungnirS_1_Olive","TCP_V_M43A_GungnirS_2_Olive","TCP_V_M43A_GungnirS_3_Olive"]],
        ["nvg",       ["OPTRE_NVG"]],
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
        ["headgear",  ["TCP_H_Helmet_CH43A_Olive", "TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Olive","TCP_H_WatchCap_Olive","TCP_H_Helmet_ECH43A_Olive_Silver",
                       "TCP_H_booniehat_Olive","WOLFoT_TcP_UNSC_A_Boonie_Woodland_2"]],
        ["vest",      ["TCP_V_M43A_GungnirS_1_Olive","TCP_V_M43A_GungnirS_2_Olive","TCP_V_M43A_GungnirS_3_Olive"]],
        ["nvg",       ["OPTRE_NVG"]],
        ["optics",    ["OPTRE_MA5_BUIS","CTGCY_MA5_Sight_2"]],
        ["muzzles",   []],
        ["pointers",  []],
        ["bipods",    []],
        ["extras",     ["ACE_MRE_BeefStew_Item", "ACE_MRE_ChikenTikkaMasala_Item", "ACE_MRE_ChickenHerbDumplings_Item", "ACE_MRE_CreamChickenSoup_Item",
                       "ACE_MRE_CreamTomatoSoup_Item", "ACE_MRE_LambCurry_Item", "ACE_MRE_MeatballsPasta_Item", "ACE_MRE_SteakVegetables_Item "]]
    ]],

    ["B_UNSCDF_Explosive_Specialist", createHashMapFromArray [
        ["headgear",  ["TCP_H_Helmet_CH43A_Olive", "TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Olive","TCP_H_WatchCap_Olive","TCP_H_Helmet_ECH43A_Olive_Silver",
                       "TCP_H_booniehat_Olive","WOLFoT_TcP_UNSC_A_Boonie_Woodland_2"]],
        ["vest",      ["TCP_V_M43A_GungnirL_1_1_Olive","TCP_V_M43A_GungnirL_2_1_Olive","TCP_V_M43A_GungnirL_3_1_Olive"]],
        ["nvg",       ["OPTRE_NVG"]],
        ["optics",    ["OPTRE_MA5_BUIS","CTGCY_MA5_Sight_2"]],
        ["muzzles",   []],
        ["pointers",  []],
        ["bipods",    []],
        ["extras",    ["ACE_MRE_BeefStew_Item", "ACE_MRE_ChikenTikkaMasala_Item", "ACE_MRE_ChickenHerbDumplings_Item", "ACE_MRE_CreamChickenSoup_Item",
                       "ACE_MRE_CreamTomatoSoup_Item", "ACE_MRE_LambCurry_Item", "ACE_MRE_MeatballsPasta_Item", "ACE_MRE_SteakVegetables_Item "]]
    ]],

    ["B_UNSCDF_Grenadier", createHashMapFromArray [
        ["headgear",  ["TCP_H_Helmet_CH43A_Olive", "TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Olive","TCP_H_WatchCap_Olive","TCP_H_Helmet_ECH43A_Olive_Silver",
                       "TCP_H_booniehat_Olive","WOLFoT_TcP_UNSC_A_Boonie_Woodland_2"]],
        ["vest",      ["TCP_V_M43A_GungnirS_1_Olive","TCP_V_M43A_GungnirS_2_Olive","TCP_V_M43A_GungnirS_3_Olive"]],
        ["nvg",       ["OPTRE_NVG"]],
        ["optics",    ["OPTRE_MA5_BUIS","CTGCY_MA5_Sight_2"]],
        ["muzzles",   []],
        ["pointers",  []],
        ["bipods",    []],
        ["extras",    ["ACE_MRE_BeefStew_Item", "ACE_MRE_ChikenTikkaMasala_Item", "ACE_MRE_ChickenHerbDumplings_Item", "ACE_MRE_CreamChickenSoup_Item",
                       "ACE_MRE_CreamTomatoSoup_Item", "ACE_MRE_LambCurry_Item", "ACE_MRE_MeatballsPasta_Item", "ACE_MRE_SteakVegetables_Item "]]
    ]],

    ["B_UNSCDF_Marksman", createHashMapFromArray [
        ["headgear",  ["TCP_H_Helmet_CH43A_Olive"]],
        ["vest",      ["TCP_V_M43A_GungnirS_1_Olive","TCP_V_M43A_GungnirS_2_Olive","TCP_V_M43A_GungnirS_3_Olive"]],
        ["nvg",       []],
        ["optics",    []],
        ["muzzles",   []],
        ["pointers",  []],
        ["bipods",    []],
        ["extras",     ["ACE_MRE_BeefStew_Item", "ACE_MRE_ChikenTikkaMasala_Item", "ACE_MRE_ChickenHerbDumplings_Item", "ACE_MRE_CreamChickenSoup_Item",
                       "ACE_MRE_CreamTomatoSoup_Item", "ACE_MRE_LambCurry_Item", "ACE_MRE_MeatballsPasta_Item", "ACE_MRE_SteakVegetables_Item "]]
    ]],

    ["B_UNSCDF_Missile_Speacialist_AA", createHashMapFromArray [
        ["headgear",  ["TCP_H_Helmet_CH43A_Olive", "TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Olive","TCP_H_WatchCap_Olive","TCP_H_Helmet_ECH43A_Olive_Silver",
                       "TCP_H_booniehat_Olive","WOLFoT_TcP_UNSC_A_Boonie_Woodland_2"]],
        ["vest",      ["TCP_V_M43A_GungnirS_1_Olive","TCP_V_M43A_GungnirS_2_Olive","TCP_V_M43A_GungnirS_3_Olive"]],
        ["nvg",       ["OPTRE_NVG"]],
        ["optics",    ["OPTRE_MA5_BUIS","CTGCY_MA5_Sight_2"]],
        ["muzzles",   []],
        ["pointers",  []],
        ["bipods",    []],
        ["extras",     ["ACE_MRE_BeefStew_Item", "ACE_MRE_ChikenTikkaMasala_Item", "ACE_MRE_ChickenHerbDumplings_Item", "ACE_MRE_CreamChickenSoup_Item",
                       "ACE_MRE_CreamTomatoSoup_Item", "ACE_MRE_LambCurry_Item", "ACE_MRE_MeatballsPasta_Item", "ACE_MRE_SteakVegetables_Item "]]
    ]],

    ["B_UNSCDF_Missile_Specialist_AT", createHashMapFromArray [
        ["headgear",  ["TCP_H_Helmet_CH43A_Olive", "TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Olive","TCP_H_WatchCap_Olive","TCP_H_Helmet_ECH43A_Olive_Silver",
                       "TCP_H_booniehat_Olive","WOLFoT_TcP_UNSC_A_Boonie_Woodland_2"]],
        ["vest",      ["TCP_V_M43A_GungnirS_1_Olive","TCP_V_M43A_GungnirS_2_Olive","TCP_V_M43A_GungnirS_3_Olive"]],
        ["nvg",       ["OPTRE_NVG"]],
        ["optics",    ["OPTRE_MA5_BUIS","CTGCY_MA5_Sight_2"]],
        ["muzzles",   []],
        ["pointers",  []],
        ["bipods",    []],
        ["extras",     ["ACE_MRE_BeefStew_Item", "ACE_MRE_ChikenTikkaMasala_Item", "ACE_MRE_ChickenHerbDumplings_Item", "ACE_MRE_CreamChickenSoup_Item",
                       "ACE_MRE_CreamTomatoSoup_Item", "ACE_MRE_LambCurry_Item", "ACE_MRE_MeatballsPasta_Item", "ACE_MRE_SteakVegetables_Item "]]
    ]],

    ["B_UNSCDF_Repair_Specialist", createHashMapFromArray [
        ["headgear",  []],
        ["vest",      []],
        ["nvg",       []],
        ["optics",    []],
        ["muzzles",   []],
        ["pointers",  []],
        ["bipods",    []],
        ["extras",     ["ACE_MRE_BeefStew_Item", "ACE_MRE_ChikenTikkaMasala_Item", "ACE_MRE_ChickenHerbDumplings_Item", "ACE_MRE_CreamChickenSoup_Item",
                       "ACE_MRE_CreamTomatoSoup_Item", "ACE_MRE_LambCurry_Item", "ACE_MRE_MeatballsPasta_Item", "ACE_MRE_SteakVegetables_Item "]]
    ]],

    ["B_UNSCDF_Rifleman_AT", createHashMapFromArray [
        ["headgear",  ["TCP_H_Helmet_CH43A_Olive", "TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Olive","TCP_H_WatchCap_Olive","TCP_H_Helmet_ECH43A_Olive_Silver",
                       "TCP_H_booniehat_Olive","WOLFoT_TcP_UNSC_A_Boonie_Woodland_2"]],
        ["vest",      ["TCP_V_M43A_GungnirS_1_Olive","TCP_V_M43A_GungnirS_2_Olive","TCP_V_M43A_GungnirS_3_Olive"]],
        ["nvg",       ["OPTRE_NVG"]],
        ["optics",    ["OPTRE_MA5_BUIS","CTGCY_MA5_Sight_2"]],
        ["muzzles",   []],
        ["pointers",  []],
        ["bipods",    []],
        ["extras",     ["ACE_MRE_BeefStew_Item", "ACE_MRE_ChikenTikkaMasala_Item", "ACE_MRE_ChickenHerbDumplings_Item", "ACE_MRE_CreamChickenSoup_Item",
                       "ACE_MRE_CreamTomatoSoup_Item", "ACE_MRE_LambCurry_Item", "ACE_MRE_MeatballsPasta_Item", "ACE_MRE_SteakVegetables_Item "]]
    ]],

    ["B_UNSCDF_Rifleman_Unarmed", createHashMapFromArray [
        ["headgear",  []],
        ["vest",      []],
        ["nvg",       []],
        ["optics",    []],
        ["muzzles",   []],
        ["pointers",  []],
        ["bipods",    []],
        ["extras",    []]
    ]],

    ["B_UNSCDF_Rifleman_Light", createHashMapFromArray [
        ["headgear",  ["TCP_H_Helmet_CH43A_Olive", "TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Olive","TCP_H_WatchCap_Olive","TCP_H_Helmet_ECH43A_Olive_Silver",
                       "TCP_H_booniehat_Olive","WOLFoT_TcP_UNSC_A_Boonie_Woodland_2"]],
        ["vest",      ["TCP_V_M43A_Light_1_Olive","TCP_V_M43A_Light_2_Olive","TCP_V_M43A_Light_3_Olive"]],
        ["nvg",       ["OPTRE_NVG"]],
        ["optics",    ["OPTRE_MA5_BUIS","CTGCY_MA5_Sight_2"]],
        ["muzzles",   []],
        ["pointers",  []],
        ["bipods",    []],
        ["extras",     ["ACE_MRE_BeefStew_Item", "ACE_MRE_ChikenTikkaMasala_Item", "ACE_MRE_ChickenHerbDumplings_Item", "ACE_MRE_CreamChickenSoup_Item",
                       "ACE_MRE_CreamTomatoSoup_Item", "ACE_MRE_LambCurry_Item", "ACE_MRE_MeatballsPasta_Item", "ACE_MRE_SteakVegetables_Item "]]
    ]],

    // UAV Operators — headgear/vest only, no weapon attachments
    ["B_UNSCDF_UAV_Operator_OQ_38_Wren", createHashMapFromArray [
        ["headgear",  ["TCP_H_Helmet_CH43A_Olive", "TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Olive","TCP_H_WatchCap_Olive","TCP_H_Helmet_ECH43A_Olive_Silver",
                       "TCP_H_booniehat_Olive","WOLFoT_TcP_UNSC_A_Boonie_Woodland_2"]],
        ["vest",      ["TCP_V_M43A_Light_1_Olive","TCP_V_M43A_Light_2_Olive", "TCP_V_M43A_Light_3_Olive"]],
        ["nvg",       ["OPTRE_NVG"]],
        ["optics",    ["OPTRE_MA5_BUIS","CTGCY_MA5_Sight_2"]],
        ["muzzles",   []],
        ["pointers",  []],
        ["bipods",    []],
        ["extras",     ["ACE_MRE_BeefStew_Item", "ACE_MRE_ChikenTikkaMasala_Item", "ACE_MRE_ChickenHerbDumplings_Item", "ACE_MRE_CreamChickenSoup_Item",
                       "ACE_MRE_CreamTomatoSoup_Item", "ACE_MRE_LambCurry_Item", "ACE_MRE_MeatballsPasta_Item", "ACE_MRE_SteakVegetables_Item "]]
    ]],

    ["B_UNSCDF_UAV_Operator_OQ_40_Minibee", createHashMapFromArray [
        ["headgear",  ["TCP_H_Helmet_CH43A_Olive", "TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Olive","TCP_H_WatchCap_Olive","TCP_H_Helmet_ECH43A_Olive_Silver",
                       "TCP_H_booniehat_Olive","WOLFoT_TcP_UNSC_A_Boonie_Woodland_2"]],
        ["vest",      ["TCP_V_M43A_Light_1_Olive","TCP_V_M43A_Light_2_Olive", "TCP_V_M43A_Light_3_Olive"]],
        ["nvg",       []],
        ["optics",    []],
        ["muzzles",   []],
        ["pointers",  []],
        ["bipods",    []],
        ["extras",     ["ACE_MRE_BeefStew_Item", "ACE_MRE_ChikenTikkaMasala_Item", "ACE_MRE_ChickenHerbDumplings_Item", "ACE_MRE_CreamChickenSoup_Item",
                       "ACE_MRE_CreamTomatoSoup_Item", "ACE_MRE_LambCurry_Item", "ACE_MRE_MeatballsPasta_Item", "ACE_MRE_SteakVegetables_Item "]]
    ]],

    // Sniper — no randomization (specialized fixed gear)
    ["B_UNSCDF_Sniper", createHashMapFromArray [
        ["headgear",  []],
        ["vest",      ["TCP_V_M43A_Light_1_Olive","TCP_V_M43A_Light_2_Olive", "TCP_V_M43A_Light_3_Olive"]],
        ["nvg",       []],
        ["optics",    []],
        ["muzzles",   []],
        ["pointers",  []],
        ["bipods",    []],
        ["extras",    ["ACE_MRE_BeefStew_Item", "ACE_MRE_ChikenTikkaMasala_Item", "ACE_MRE_ChickenHerbDumplings_Item", "ACE_MRE_CreamChickenSoup_Item",
                       "ACE_MRE_CreamTomatoSoup_Item", "ACE_MRE_LambCurry_Item", "ACE_MRE_MeatballsPasta_Item", "ACE_MRE_SteakVegetables_Item "]]
    ]],

    ["B_UNSCDF_Forward_Observer", createHashMapFromArray [
        ["headgear",  ["TCP_H_Helmet_CH43A_Olive", "TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Olive","TCP_H_WatchCap_Olive","TCP_H_Helmet_ECH43A_Olive_Silver",
                       "TCP_H_booniehat_Olive","WOLFoT_TcP_UNSC_A_Boonie_Woodland_2"]],
        ["vest",      ["TCP_V_M43A_GungnirS_1_Olive","TCP_V_M43A_GungnirS_2_Olive","TCP_V_M43A_GungnirS_3_Olive"]],
        ["nvg",       ["OPTRE_NVG"]],
        ["optics",    ["OPTRE_MA5_BUIS","CTGCY_MA5_Sight_2"]],
        ["muzzles",   []],
        ["pointers",  []],
        ["bipods",    []],
        ["extras",     ["ACE_MRE_BeefStew_Item", "ACE_MRE_ChikenTikkaMasala_Item", "ACE_MRE_ChickenHerbDumplings_Item", "ACE_MRE_CreamChickenSoup_Item",
                       "ACE_MRE_CreamTomatoSoup_Item", "ACE_MRE_LambCurry_Item", "ACE_MRE_MeatballsPasta_Item", "ACE_MRE_SteakVegetables_Item "]]
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
        ["headgear",  ["TCP_H_Helmet_CH43A_Olive", "TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Olive","TCP_H_WatchCap_Olive","TCP_H_Helmet_ECH43A_Olive_Silver",
                       "TCP_H_booniehat_Olive","WOLFoT_TcP_UNSC_A_Boonie_Woodland_2"]],
        ["vest",      ["TCP_V_M43A_Light_1_Olive","TCP_V_M43A_Light_2_Olive", "TCP_V_M43A_Light_3_Olive"]],
        ["nvg",       ["OPTRE_NVG"]],
        ["optics",    ["OPTRE_MA5_BUIS","CTGCY_MA5_Sight_2"]],
        ["muzzles",   []],
        ["pointers",  []],
        ["bipods",    []],
        ["extras",     ["ACE_MRE_BeefStew_Item", "ACE_MRE_ChikenTikkaMasala_Item", "ACE_MRE_ChickenHerbDumplings_Item", "ACE_MRE_CreamChickenSoup_Item",
                       "ACE_MRE_CreamTomatoSoup_Item", "ACE_MRE_LambCurry_Item", "ACE_MRE_MeatballsPasta_Item", "ACE_MRE_SteakVegetables_Item "]]
    ]],

    ["B_UNSCDF_Asst_Heavy_Gunner", createHashMapFromArray [
        ["headgear",  ["TCP_H_Helmet_CH43A_Olive", "TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Olive","TCP_H_Helmet_CH43A_Olive","TCP_H_WatchCap_Olive","TCP_H_Helmet_ECH43A_Olive_Silver",
                       "TCP_H_booniehat_Olive","WOLFoT_TcP_UNSC_A_Boonie_Woodland_2"]],
        ["vest",      ["TCP_V_M43A_Light_1_Olive","TCP_V_M43A_Light_2_Olive", "TCP_V_M43A_Light_3_Olive"]],
        ["nvg",       ["OPTRE_NVG"]],
        ["optics",    ["OPTRE_MA5_BUIS","CTGCY_MA5_Sight_2"]],
        ["muzzles",   []],
        ["pointers",  []],
        ["bipods",    []],
        ["extras",     ["ACE_MRE_BeefStew_Item", "ACE_MRE_ChikenTikkaMasala_Item", "ACE_MRE_ChickenHerbDumplings_Item", "ACE_MRE_CreamChickenSoup_Item",
                       "ACE_MRE_CreamTomatoSoup_Item", "ACE_MRE_LambCurry_Item", "ACE_MRE_MeatballsPasta_Item", "ACE_MRE_SteakVegetables_Item "]]
    ]],

    // -----------------------------------------------------------------
    // ODST
    // -----------------------------------------------------------------

    ["B_UNSCDF_ODST_Rifleman", createHashMapFromArray [
        ["headgear",  []],
        ["vest",      ["TCP_V_M43D_ODST_2_Black","TCP_V_M43D_ODST_3_Black", "TCP_V_M43D_ODST_4_Black"]],
        ["nvg",       ["OPTRE_NVG", "OPTRE_NVG_CNM", "OPTRE_NVG_UL", "OPTRE_NVG_HUL", "OPTRE_NVG_HUL3", "OPTRE_NVG_HUL3_Gray", "OPTRE_NVG_HURS",
                       "OPTRE_NVG_HUL_UAB_HURS", "OPTRE_NVG_HURS_CNM", "OPTRE_NVG_HURS_HUL", "OPTRE_NVG_UA_CNM", "OPTRE_NVG_UA_HUL", "OPTRE_NVG_UA_HURS", "OPTRE_NVG_UA_HURS_CNM", "OPTRE_NVG_UA_HURS_HUL",
                       "OPTRE_NVG_UAB"]],
        ["optics",    ["OPTRE_MA5_BUIS","CTGCY_MA5_Sight_2"]],
        ["muzzles",   []],
        ["pointers",  []],
        ["bipods",    []],
        ["extras",     ["ACE_MRE_BeefStew_Item", "ACE_MRE_ChikenTikkaMasala_Item", "ACE_MRE_ChickenHerbDumplings_Item", "ACE_MRE_CreamChickenSoup_Item",
                       "ACE_MRE_CreamTomatoSoup_Item", "ACE_MRE_LambCurry_Item", "ACE_MRE_MeatballsPasta_Item", "ACE_MRE_SteakVegetables_Item "]]
    ]],

    ["B_UNSCDF_ODST_Team_Leader", createHashMapFromArray [
        ["headgear",  []],
        ["vest",      ["TCP_V_M43D_ODST_2_Black","TCP_V_M43D_ODST_3_Black", "TCP_V_M43D_ODST_4_Black"]],
        ["nvg",       ["OPTRE_NVG", "OPTRE_NVG_CNM", "OPTRE_NVG_UL", "OPTRE_NVG_HUL", "OPTRE_NVG_HUL3", "OPTRE_NVG_HUL3_Gray", "OPTRE_NVG_HURS",
                       "OPTRE_NVG_HUL_UAB_HURS", "OPTRE_NVG_HURS_CNM", "OPTRE_NVG_HURS_HUL", "OPTRE_NVG_UA_CNM", "OPTRE_NVG_UA_HUL", "OPTRE_NVG_UA_HURS", "OPTRE_NVG_UA_HURS_CNM", "OPTRE_NVG_UA_HURS_HUL",
                       "OPTRE_NVG_UAB"]],
        ["optics",    ["CTGCY_BR55_Scope_ACE","OPTRE_M12_Optic","OPTRE_M12_Optic_Green","OPTRE_M12_Optic_Red"]],
        ["muzzles",   []],
        ["pointers",  []],
        ["bipods",    []],
        ["extras",     ["ACE_MRE_BeefStew_Item", "ACE_MRE_ChikenTikkaMasala_Item", "ACE_MRE_ChickenHerbDumplings_Item", "ACE_MRE_CreamChickenSoup_Item",
                       "ACE_MRE_CreamTomatoSoup_Item", "ACE_MRE_LambCurry_Item", "ACE_MRE_MeatballsPasta_Item", "ACE_MRE_SteakVegetables_Item "]]
    ]],

    ["B_UNSCDF_ODST_Scout", createHashMapFromArray [
        ["headgear",  []],
        ["vest",      ["TCP_V_M43D_ODST_2_Black","TCP_V_M43D_ODST_3_Black", "TCP_V_M43D_ODST_4_Black"]],
        ["nvg",       ["OPTRE_NVG", "OPTRE_NVG_CNM", "OPTRE_NVG_UL", "OPTRE_NVG_HUL", "OPTRE_NVG_HUL3", "OPTRE_NVG_HUL3_Gray", "OPTRE_NVG_HURS",
                       "OPTRE_NVG_HUL_UAB_HURS", "OPTRE_NVG_HURS_CNM", "OPTRE_NVG_HURS_HUL", "OPTRE_NVG_UA_CNM", "OPTRE_NVG_UA_HUL", "OPTRE_NVG_UA_HURS", "OPTRE_NVG_UA_HURS_CNM", "OPTRE_NVG_UA_HURS_HUL",
                       "OPTRE_NVG_UAB"]],
        ["optics",    ["CTGCY_SLSV_Scope", "CTGCY_SLSV_Sight", "CTGCY_SLSV_Sight_2", "none"]],
        ["muzzles",   ["OPTRE_M7_Silencer"]],
        ["pointers",  ["OPTRE_M7_Laser"]],
        ["bipods",    []],
        ["extras",     ["ACE_MRE_BeefStew_Item", "ACE_MRE_ChikenTikkaMasala_Item", "ACE_MRE_ChickenHerbDumplings_Item", "ACE_MRE_CreamChickenSoup_Item",
                       "ACE_MRE_CreamTomatoSoup_Item", "ACE_MRE_LambCurry_Item", "ACE_MRE_MeatballsPasta_Item", "ACE_MRE_SteakVegetables_Item "]]
    ]],

    ["B_UNSCDF_ODST_Corpsman", createHashMapFromArray [
        ["headgear",  []],
        ["vest",      ["TCP_V_M43D_ODST_2_Black","TCP_V_M43D_ODST_3_Black", "TCP_V_M43D_ODST_4_Black"]],
        ["nvg",       ["OPTRE_NVG", "OPTRE_NVG_CNM", "OPTRE_NVG_UL", "OPTRE_NVG_HUL", "OPTRE_NVG_HUL3", "OPTRE_NVG_HUL3_Gray", "OPTRE_NVG_HURS",
                       "OPTRE_NVG_HUL_UAB_HURS", "OPTRE_NVG_HURS_CNM", "OPTRE_NVG_HURS_HUL", "OPTRE_NVG_UA_CNM", "OPTRE_NVG_UA_HUL", "OPTRE_NVG_UA_HURS", "OPTRE_NVG_UA_HURS_CNM", "OPTRE_NVG_UA_HURS_HUL",
                       "OPTRE_NVG_UAB"]],
        ["optics",    ["CTGCY_SLSV_Scope", "CTGCY_SLSV_Sight", "CTGCY_SLSV_Sight_2", "none"]],
        ["muzzles",   ["OPTRE_M7_Silencer"]],
        ["pointers",  ["OPTRE_M7_Laser"]],
        ["bipods",    []],
        ["extras",    []]
    ]],

    ["B_UNSCDF_ODST_AT_Specialist", createHashMapFromArray [
        ["headgear",  []],
        ["vest",      ["TCP_V_M43D_ODST_2_Black","TCP_V_M43D_ODST_3_Black", "TCP_V_M43D_ODST_4_Black"]],
        ["nvg",       ["OPTRE_NVG", "OPTRE_NVG_CNM", "OPTRE_NVG_UL", "OPTRE_NVG_HUL", "OPTRE_NVG_HUL3", "OPTRE_NVG_HUL3_Gray", "OPTRE_NVG_HURS",
                       "OPTRE_NVG_HUL_UAB_HURS", "OPTRE_NVG_HURS_CNM", "OPTRE_NVG_HURS_HUL", "OPTRE_NVG_UA_CNM", "OPTRE_NVG_UA_HUL", "OPTRE_NVG_UA_HURS", "OPTRE_NVG_UA_HURS_CNM", "OPTRE_NVG_UA_HURS_HUL",
                       "OPTRE_NVG_UAB"]],
        ["optics",    ["OPTRE_MA5_BUIS","CTGCY_MA5_Sight_2"]],
        ["muzzles",   []],
        ["pointers",  []],
        ["bipods",    []],
        ["extras",     ["ACE_MRE_BeefStew_Item", "ACE_MRE_ChikenTikkaMasala_Item", "ACE_MRE_ChickenHerbDumplings_Item", "ACE_MRE_CreamChickenSoup_Item",
                       "ACE_MRE_CreamTomatoSoup_Item", "ACE_MRE_LambCurry_Item", "ACE_MRE_MeatballsPasta_Item", "ACE_MRE_SteakVegetables_Item "]]
    ]],

    ["B_UNSCDF_ODST_AA_Specialist", createHashMapFromArray [
        ["headgear",  []],
        ["vest",      ["TCP_V_M43D_ODST_2_Black","TCP_V_M43D_ODST_3_Black", "TCP_V_M43D_ODST_4_Black"]],
        ["nvg",       ["OPTRE_NVG", "OPTRE_NVG_CNM", "OPTRE_NVG_UL", "OPTRE_NVG_HUL", "OPTRE_NVG_HUL3", "OPTRE_NVG_HUL3_Gray", "OPTRE_NVG_HURS",
                       "OPTRE_NVG_HUL_UAB_HURS", "OPTRE_NVG_HURS_CNM", "OPTRE_NVG_HURS_HUL", "OPTRE_NVG_UA_CNM", "OPTRE_NVG_UA_HUL", "OPTRE_NVG_UA_HURS", "OPTRE_NVG_UA_HURS_CNM", "OPTRE_NVG_UA_HURS_HUL",
                       "OPTRE_NVG_UAB"]],
        ["optics",    ["OPTRE_MA5_BUIS","CTGCY_MA5_Sight_2"]],
        ["muzzles",   []],
        ["pointers",  []],
        ["bipods",    []],
        ["extras",     ["ACE_MRE_BeefStew_Item", "ACE_MRE_ChikenTikkaMasala_Item", "ACE_MRE_ChickenHerbDumplings_Item", "ACE_MRE_CreamChickenSoup_Item",
                       "ACE_MRE_CreamTomatoSoup_Item", "ACE_MRE_LambCurry_Item", "ACE_MRE_MeatballsPasta_Item", "ACE_MRE_SteakVegetables_Item "]]
    ]],

    ["B_UNSCDF_ODST_Marksman", createHashMapFromArray [
        ["headgear",  []],
        ["vest",      ["TCP_V_M43D_SHARPSHOOTER_1_Black","TCP_V_M43D_SHARPSHOOTER_2_Black", "TCP_V_M43D_SHARPSHOOTER_3_Black", "TCP_V_M43D_SHARPSHOOTER_4_Black"]],
        ["nvg",       ["OPTRE_NVG_MVI", "OPTRE_NVG_MVI_CNM", "OPTRE_NVG_MVI_HUL", "OPTRE_NVG_MVI_HURS", "OPTRE_NVG_MVI_UL"]],
        ["optics",    []],
        ["muzzles",   []],
        ["pointers",  []],
        ["bipods",    []],
        ["extras",     ["ACE_MRE_BeefStew_Item", "ACE_MRE_ChikenTikkaMasala_Item", "ACE_MRE_ChickenHerbDumplings_Item", "ACE_MRE_CreamChickenSoup_Item",
                       "ACE_MRE_CreamTomatoSoup_Item", "ACE_MRE_LambCurry_Item", "ACE_MRE_MeatballsPasta_Item", "ACE_MRE_SteakVegetables_Item "]]
    ]],

    ["B_UNSCDF_ODST_Sniper", createHashMapFromArray [
        ["headgear",  []],
        ["vest",      ["TCP_V_M43D_SHARPSHOOTER_1_Black","TCP_V_M43D_SHARPSHOOTER_2_Black", "TCP_V_M43D_SHARPSHOOTER_3_Black", "TCP_V_M43D_SHARPSHOOTER_4_Black"]],
        ["nvg",       ["OPTRE_NVG_MVI", "OPTRE_NVG_MVI_CNM", "OPTRE_NVG_MVI_HUL", "OPTRE_NVG_MVI_HURS", "OPTRE_NVG_MVI_UL"]],
        ["optics",    []],
        ["muzzles",   []],
        ["pointers",  []],
        ["bipods",    []],
        ["extras",    ["ACE_MRE_BeefStew_Item", "ACE_MRE_ChikenTikkaMasala_Item", "ACE_MRE_ChickenHerbDumplings_Item", "ACE_MRE_CreamChickenSoup_Item",
                       "ACE_MRE_CreamTomatoSoup_Item", "ACE_MRE_LambCurry_Item", "ACE_MRE_MeatballsPasta_Item", "ACE_MRE_SteakVegetables_Item "]]
    ]],

    ["B_UNSCDF_ODST_Breacher", createHashMapFromArray [
        ["headgear",  []],
        ["vest",      ["TCP_V_M43D_ODST_2_Black","TCP_V_M43D_ODST_3_Black", "TCP_V_M43D_ODST_4_Black"]],
        ["nvg",       ["OPTRE_NVG", "OPTRE_NVG_CNM", "OPTRE_NVG_UL", "OPTRE_NVG_HUL", "OPTRE_NVG_HUL3", "OPTRE_NVG_HUL3_Gray", "OPTRE_NVG_HURS",
                       "OPTRE_NVG_HUL_UAB_HURS", "OPTRE_NVG_HURS_CNM", "OPTRE_NVG_HURS_HUL", "OPTRE_NVG_UA_CNM", "OPTRE_NVG_UA_HUL", "OPTRE_NVG_UA_HURS", "OPTRE_NVG_UA_HURS_CNM", "OPTRE_NVG_UA_HURS_HUL",
                       "OPTRE_NVG_UAB"]],
        ["optics",    ["none"]],
        ["muzzles",   []],
        ["pointers",  []],
        ["bipods",    []],
        ["extras",    ["ACE_MRE_BeefStew_Item", "ACE_MRE_ChikenTikkaMasala_Item", "ACE_MRE_ChickenHerbDumplings_Item", "ACE_MRE_CreamChickenSoup_Item",
                       "ACE_MRE_CreamTomatoSoup_Item", "ACE_MRE_LambCurry_Item", "ACE_MRE_MeatballsPasta_Item", "ACE_MRE_SteakVegetables_Item "]]
    ]],

    ["B_UNSCDF_ODST_Autorifleman", createHashMapFromArray [
        ["headgear",  []],
        ["vest",      ["TCP_V_M43D_ODST_2_Black","TCP_V_M43D_ODST_3_Black", "TCP_V_M43D_ODST_4_Black"]],
        ["nvg",       ["OPTRE_NVG", "OPTRE_NVG_CNM", "OPTRE_NVG_UL", "OPTRE_NVG_HUL", "OPTRE_NVG_HUL3", "OPTRE_NVG_HUL3_Gray", "OPTRE_NVG_HURS",
                       "OPTRE_NVG_HUL_UAB_HURS", "OPTRE_NVG_HURS_CNM", "OPTRE_NVG_HURS_HUL", "OPTRE_NVG_UA_CNM", "OPTRE_NVG_UA_HUL", "OPTRE_NVG_UA_HURS", "OPTRE_NVG_UA_HURS_CNM", "OPTRE_NVG_UA_HURS_HUL",
                       "OPTRE_NVG_UAB"]],
        ["optics",    ["OPTRE_M73_SmartLink", "none"]],
        ["muzzles",   []],
        ["pointers",  []],
        ["bipods",    []],
        ["extras",     ["ACE_MRE_BeefStew_Item", "ACE_MRE_ChikenTikkaMasala_Item", "ACE_MRE_ChickenHerbDumplings_Item", "ACE_MRE_CreamChickenSoup_Item",
                       "ACE_MRE_CreamTomatoSoup_Item", "ACE_MRE_LambCurry_Item", "ACE_MRE_MeatballsPasta_Item", "ACE_MRE_SteakVegetables_Item "]]
    ]],

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