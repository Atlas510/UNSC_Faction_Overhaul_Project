/*
 * fn_randomizeKit.sqf
 * UNSC Air Force – kit / equipment randomiser
 *
 * Description:
 *   Role-aware equipment randomiser (headgear, vest, NVGs, attachments,
 *   extras).  Called after uniform randomisation on spawn.
 *   Mirror the structure of fn_randomizeKit.sqf from unscdf_units when
 *   implementing this function.
 *
 * Parameters:
 *   0: OBJECT – the unit whose kit should be randomised
 *
 * Returns: Nothing
 *
 * Example:
 *   [this] call ATLAS_fnc_randomizeKit;
 */

params ["_unit"];

// TODO: implement kit randomisation logic for UNSCAF personnel
// Consider separating pools for pilots vs. ground crew roles.
