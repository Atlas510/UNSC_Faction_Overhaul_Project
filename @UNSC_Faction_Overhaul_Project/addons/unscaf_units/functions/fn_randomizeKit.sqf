// ============================================================
//  functions/fn_randomizeKit.sqf — UNSCAF Units
//
//  Per-class equipment randomization for UNSCAF soldiers.
//  Assigns role-appropriate headgear, vest, NVGs, and
//  attachments from configurable pools.
//
//  Parameters:
//    _unit : Object — the unit to randomize
//
//  FILL-IN GUIDE:
//    1. Replace every TODO classname with valid items.
//    2. Add / remove items from each pool as needed.
//    3. Add role branches (switch/if) for each unit class
//       you want to treat differently (e.g. pilots, medics).
// ============================================================

params ["_unit"];
if (isNull _unit) exitWith {};
if (!local _unit) exitWith {};

private _type = typeOf _unit;

// ---- Headgear pools ----------------------------------------
private _helmetPool = [
	// FILL: standard helmets
	// "TODO_AF_Helmet_01",
	// "TODO_AF_Helmet_02",
];

private _pilotHelmetPool = [
	// FILL: pilot-specific helmets
	// "TODO_AF_PilotHelmet_01",
];

// ---- Vest pools --------------------------------------------
private _vestPool = [
	// FILL: standard vests
	// "TODO_AF_Vest_Light",
	// "TODO_AF_Vest_Medium",
];

// ---- NVG pool ----------------------------------------------
private _nvgPool = [
	// FILL: NVG classnames (leave empty [] to skip NVGs)
	// "TODO_NVG_01",
];

// ---- Weapon attachment pool --------------------------------
private _scopePool = [
	// FILL: optic classnames
	// "TODO_Scope_01",
	// "TODO_Scope_02",
];

// ---- Role-based selection ----------------------------------
switch (true) do {

	// Pilot
	case (_type in ["B_UNSCAF_Pilot"]):
	{
		if !(_pilotHelmetPool isEqualTo []) then {
			removeHeadgear _unit;
			_unit addHeadgear (selectRandom _pilotHelmetPool);
		};
		// Pilots keep assigned vest — no randomization
	};

	// Everyone else
	default
	{
		if !(_helmetPool isEqualTo []) then {
			removeHeadgear _unit;
			_unit addHeadgear (selectRandom _helmetPool);
		};

		if !(_vestPool isEqualTo []) then {
			removeVest _unit;
			_unit addVest (selectRandom _vestPool);
		};
	};
};

// ---- NVGs --------------------------------------------------
if !(_nvgPool isEqualTo []) then {
	_unit linkItem (selectRandom _nvgPool);
};

// ---- Weapon attachments ------------------------------------
// FILL: uncomment and adapt once scope pool is populated
/*
private _primaryWeapon = primaryWeapon _unit;
if (_primaryWeapon != "") then {
	_unit addPrimaryWeaponItem (selectRandom _scopePool);
};
*/
