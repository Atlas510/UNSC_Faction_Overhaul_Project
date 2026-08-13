// ============================================================
//  functions/fn_applyCosmetics.sqf — UNSCAF Units
//
//  Applies headgear and other cosmetic items to a spawned unit.
//
//  Parameters:
//    _unit     : Object  — the unit to apply cosmetics to
//    _isMedic  : Boolean — true if the unit is a medic/corpsman
//
//  FILL-IN GUIDE:
//    Replace the TODO classnames with actual UNSCAF helmet /
//    headgear classnames from your modpack.
// ============================================================

params ["_unit", ["_isMedic", false]];
if (isNull _unit) exitWith {};

removeHeadgear _unit;

if (_isMedic) then {
	_unit addHeadgear "TODO_AF_MedicHelmet"; // FILL: medic headgear classname
} else {
	_unit addHeadgear "TODO_AF_Helmet";      // FILL: standard headgear classname
};

// FILL: add any additional cosmetic changes below
// Examples:
// _unit addGoggles "TODO_AF_Goggles";
// _unit addItemToVest "TODO_Item";
