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
		};

		units[] =
		{
			"B_UNSCAF_Marine_Pilot",
			"B_UNSCAF_Marine_Aircrewman",
			"B_UNSCAF_SF_Team_Leader",
			"B_UNSCAF_SF_Airman",
			"B_UNSCAF_SF_Sentry"
		};
		weapons[] = {};
	};
};

class CfgFactionClasses
{
	class B_ATLAS_UNSCAF
	{
		displayName = "[ATLAS] UNSCAF";
		priority = 2;
		side = 1;
		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
	};
};

class CfgEditorSubcategories
{
	class UNSCAF_Infantry
	{
		displayName = "Men";
	};
};

class CfgVehicleClasses
{
	class B_ATLAS_UNSCAF_INF       { displayName = "Men"; };
	class B_ATLAS_UNSCAF_MOT       { displayName = "Cars"; };
	class B_ATLAS_UNSCAF_PLN       { displayName = "Planes"; };
	class B_ATLAS_UNSCAF_DRN       { displayName = "Drones"; };
	class B_ATLAS_UNSCAF_AIR       { displayName = "Helicopters"; };
	class B_ATLAS_UNSCAF_TUR       { displayName = "Turrets"; };
};

class CfgFunctions
{
	class ATLAS
	{
		tag = "ATLAS";
		class UniformsAF
		{
			class randomizeAFUniform
			{
				file = "\unscaf_units\functions\fn_randomizeUniform.sqf";
			};
			class randomizeKit
			{
				file = "\unscaf_units\functions\fn_randomizeKit.sqf";
			};
		};
	};
};

#define ATLAS_AF_UNIFORM_RAND_EH \
class EventHandlers { \
	class CBA_Extended_EventHandlers {}; \
	class ALiVE_orbatCreator { \
		init = "if (local (_this select 0)) then {_onSpawn = {_u = _this select 0; sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _u) >> 'backpack'); waituntil {sleep 0.2; backpack _u == _backpack}; if !(_u getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _u) >> 'ALiVE_orbatCreator_loadout'); _u setUnitLoadout _loadout; reload _u;}; [_u] call ATLAS_fnc_randomizeAFUniform; [_u] call ATLAS_fnc_randomizeKit;}; _this spawn _onSpawn; (_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};"; \
	}; \
};

class CfgVehicles
{
	#include "CfgVehicles_BaseImports.hpp"
	#include "CfgVehicles_Infantry.hpp"
	#include "CfgVehicles_Vehicles.hpp"
};

#include "CfgGroups.hpp"
