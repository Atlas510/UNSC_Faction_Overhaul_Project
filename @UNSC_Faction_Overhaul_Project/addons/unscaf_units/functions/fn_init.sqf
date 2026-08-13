// ============================================================
//  functions/fn_init.sqf — UNSCAF Units
//
//  Called on unit init. Handles initial cosmetics / kit setup.
//  Mirror of UNSCMC fn_init — update function names if you
//  create AF-specific cosmetic functions.
// ============================================================

params ["_unit"];
if (isNull _unit) exitWith {};
if (!local _unit) exitWith {};

// FILL: call your AF-specific cosmetic / kit functions
// Example (uncomment and update once functions exist):
// [_unit] call ATLAS_fnc_randomizeAFUniform;
// [_unit] call ATLAS_fnc_randomizeKit;
