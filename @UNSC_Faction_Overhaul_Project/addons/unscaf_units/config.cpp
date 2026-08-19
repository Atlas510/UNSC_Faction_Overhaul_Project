// ============================================================
//  config.cpp — UNSCAF Units
//  Faction: UNSC Air Force (UNSCAF)
//  Author: Atlas510
//
//  FILL-IN GUIDE:
//    - Replace every TODO comment with the correct value.
//    - Search for "FILL:" to find every spot that needs work.
// ============================================================

class CfgPatches
{
	class B_ATLAS_UNSCAF
	{
		author = "Atlas510";
		name = "UNSCAF Units";
		requiredVersion = 0.1;

		requiredAddons[] =
		{
			"A3_Characters_F",
			"A3_Characters_F_BLUFOR",
			"A3_Soft_F",
			"A3_Armor_F",
			"cba_main",
			"ace_common",
			"ALiVE_main",
			"OPTRE_Core"
			// FILL: add any additional required addons here
		};

		// FILL: list every unit classname defined in CfgVehicles_Infantry.hpp and CfgVehicles_Vehicles.hpp
		units[] =
		{
			// Infantry
			"B_UNSCAF_Officer",
			"B_UNSCAF_Rifleman",
			// TODO — add remaining infantry classnames

			// Vehicles
			// TODO — add vehicle classnames
		};
		weapons[] = {};
	};
};

// ============================================================
//  Faction display settings
// ============================================================
class CfgFactionClasses
{
	class B_ATLAS_UNSCAF
	{
		displayName = "UNSC Air Force";   // FILL: full faction display name
		priority = 2;
		side = 1;                          // 1 = BLUFOR
		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa"; // FILL: custom icon path if available
	};
};

// ============================================================
//  Editor subcategories (shown in Zeus / Eden unit list)
// ============================================================
class CfgEditorSubcategories
{
	class UNSCAF_Infantry
	{
		displayName = "Men";               // FILL: adjust subcategory names as needed
	};
	// TODO — add more subcategories (e.g. ODST, Pilots) if required
};

// ============================================================
//  Vehicle classes (Zeus filter categories)
// ============================================================
class CfgVehicleClasses
{
	class B_ATLAS_UNSCAF_INF  { displayName = "Men"; };
	class B_ATLAS_UNSCAF_MOT  { displayName = "Cars"; };
	class B_ATLAS_UNSCAF_MECH { displayName = "IFVs"; };
	class B_ATLAS_UNSCAF_ARMR { displayName = "Tanks"; };
	class B_ATLAS_UNSCAF_ARTY { displayName = "Artillery"; };
	class B_ATLAS_UNSCAF_AIR  { displayName = "Helicopters / Aircraft"; };
	class B_ATLAS_UNSCAF_DRN  { displayName = "Drones"; };
	class B_ATLAS_UNSCAF_TUR  { displayName = "Turrets"; };
	// FILL: add / remove vehicle class categories as needed
};

// ============================================================
//  Script functions
// ============================================================
class CfgFunctions
{
	class ATLAS
	{
		tag = "ATLAS";
		class UniformsAF
		{
			class randomizeAFUniform
			{
				file = "\unscaf_units\functions\fn_randomizeUniform.sqf"; // FILL: update path if folder is renamed
			};
			class randomizeKit
			{
				file = "\unscaf_units\functions\fn_randomizeKit.sqf";
			};
		};
	};
};

// ============================================================
//  Macro — ALiVE / respawn event handler (copy from UNSCMC,
//  replace function tag if you create AF-specific functions)
// ============================================================
#define ATLAS_AF_UNIFORM_RAND_EH \
class EventHandlers { \
	class CBA_Extended_EventHandlers {}; \
	class ALiVE_orbatCreator { \
		init = "if (local (_this select 0)) then {_onSpawn = {_u = _this select 0; sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _u) >> 'backpack'); waituntil {sleep 0.2; backpack _u == _backpack}; if !(_u getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _u) >> 'ALiVE_orbatCreator_loadout'); _u setUnitLoadout _loadout; reload _u;}; [_u] call ATLAS_fnc_randomizeAFUniform; [_u] call ATLAS_fnc_randomizeKit;}; _this spawn _onSpawn; (_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};"; \
	}; \
};

// ============================================================
//  Include split files
// ============================================================
class CfgVehicles
{
	#include "CfgVehicles_BaseImports.hpp"
	#include "CfgVehicles_Infantry.hpp"
	#include "CfgVehicles_Vehicles.hpp"
};

#include "CfgGroups.hpp"
