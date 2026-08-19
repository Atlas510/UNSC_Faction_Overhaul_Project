/*
 * fn_randomizeAFUniform.sqf
 * UNSC Air Force – uniform randomiser
 *
 * Description:
 *   Called on unit spawn to randomise uniform / appearance variants
 *   for AF personnel.  Mirror the structure of fn_randomizeMarineUniform.sqf
 *   from unscdf_units when implementing this function.
 *
 * Parameters:
 *   0: OBJECT – the unit whose uniform should be randomised
 *
 * Returns: Nothing
 *
 * Example:
 *   [this] call ATLAS_fnc_randomizeAFUniform;
 */

params ["_unit"];

// TODO: implement uniform randomisation logic for UNSCAF personnel
// Example structure from Marines version:
//
// private _roll = random 100;
// if (_roll < 50) then {
//     _unit forceAddUniform "UNIFORM_VARIANT_A";
// } else {
//     _unit forceAddUniform "UNIFORM_VARIANT_B";
// };
