class CfgPatches
{
	class B_ATLAS_UNSCMC
	{
		author = "Atlas";
		name = "UNSCMC Units";
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

		units[] = {};
		weapons[] = {};
	};
};

class CfgFactionClasses
{
	class B_ATLAS_UNSCMC
	{
		displayName = "United Nations Space Command";
		priority = 2;
		side = 1;
		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
	};
};

class CfgEditorSubcategories
{
	class UNSCMC_Infantry_Marines
	{
		displayName = "Men (Marines)";
	};
	class UNSCMC_Infantry_ODST
	{
		displayName = "Men (ODST)";
	};
};

class CfgVehicleClasses
{
	class B_ATLAS_UNSCMC_INF       { displayName = "Men"; };
	class B_ATLAS_UNSCMC_INF_ODST  { displayName = "Men (ODST)"; };
	class B_ATLAS_UNSCMC_MOT       { displayName = "Cars"; };
	class B_ATLAS_UNSCMC_MECH      { displayName = "IFVs"; };
	class B_ATLAS_UNSCMC_ARMR      { displayName = "Tanks"; };
	class B_ATLAS_UNSCMC_ARTY      { displayName = "Artillery"; };
	class M705_MLRS_Viper          { displayName = "Artillery"; };
	class B_ATLAS_UNSCMC_NAV       { displayName = "Boats"; };
	class B_ATLAS_UNSCMC_AIR       { displayName = "Helicopters"; };
	class B_ATLAS_UNSCMC_DRN       { displayName = "Drones"; };
	class B_ATLAS_UNSCMC_TUR       { displayName = "Turrets"; };
};

class CfgFunctions
{
	class ATLAS
	{
		tag = "ATLAS";
		class Uniforms
		{
			class randomizeMarineUniform
			{
				file = "\unscdf_units\functions\fn_randomizeMarineUniform.sqf";
			};

			class randomizeODSTUniform
			{
				file = "\unscdf_units\functions\fn_randomizeODSTUniform.sqf";
			};

			class Kit {
			file = "unscdf_units\functions\fn_randomizeKit.sqf";
			};
			class randomizeKit {
			file = "unscdf_units\functions\fn_randomizeKit.sqf";	
			};
		};
	};
};

// Macro defined in config.cpp (as requested)
#define ATLAS_MARINE_UNIFORM_RAND_EH \
class EventHandlers { \
	class CBA_Extended_EventHandlers {}; \
	class ALiVE_orbatCreator { \
		init = "if (local (_this select 0)) then {_onSpawn = {_u = _this select 0; sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _u) >> 'backpack'); waituntil {sleep 0.2; backpack _u == _backpack}; if !(_u getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _u) >> 'ALiVE_orbatCreator_loadout'); _u setUnitLoadout _loadout; reload _u;}; [_u] call ATLAS_fnc_randomizeMarineUniform; [_u] call ATLAS_fnc_randomizeKit;}; _this spawn _onSpawn; (_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};"; \
	}; \
};

class CfgVehicles
{
	#include "CfgVehicles_BaseImports.hpp"
	#include "CfgVehicles_Infantry.hpp"
	#include "CfgVehicles_Vehicles.hpp"
};

#include "CfgGroups.hpp"