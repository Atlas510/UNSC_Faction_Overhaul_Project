// ============================================================
//  functions/fn_randomizeUniform.sqf — UNSCAF Units
//
//  Randomly selects a uniform from the UNSCAF uniform pool
//  and applies it to the unit while preserving uniform items.
//
//  Parameters:
//    _unit : Object — the unit to randomize
//
//  FILL-IN GUIDE:
//    Replace the TODO strings inside _uniformPool with actual
//    uniform classnames available for the UNSC Air Force.
//    You can have as many or as few entries as needed.
// ============================================================

params ["_unit"];
if (isNull _unit) exitWith {};
if (!local _unit) exitWith {};

private _uniformPool = [
	// FILL: paste UNSCAF uniform classnames here, one per line
	// "TODO_AF_Uniform_Variant1",
	// "TODO_AF_Uniform_Variant2",
	// "TODO_AF_Uniform_Variant3",
];

if (_uniformPool isEqualTo []) exitWith {};

private _newUniform = selectRandom _uniformPool;
if ((uniform _unit) isEqualTo _newUniform) exitWith {};

private _uniformItems = uniformItems _unit;

removeUniform _unit;
_unit forceAddUniform _newUniform;

{ _unit addItemToUniform _x; } forEach _uniformItems;
