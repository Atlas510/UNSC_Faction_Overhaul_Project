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
			"B_UNSCAF_Officer","B_UNSCAF_Rifleman","B_UNSCAF_Squad_Leader","B_UNSCAF_Team_Leader",
			"B_UNSCAF_Ammo_Bearer","B_UNSCAF_Autorifleman_01","B_UNSCAF_Corpsman","B_UNSCAF_Crewman",
			"B_UNSCAF_Engineer","B_UNSCAF_Explosive_Specialist","B_UNSCAF_Grenadier","B_UNSCAF_Marksman",
			"B_UNSCAF_Missile_Speacialist_AA","B_UNSCAF_Missile_Specialist_AT","B_UNSCAF_Repair_Specialist",
			"B_UNSCAF_Rifleman_AT","B_UNSCAF_Rifleman_Unarmed","B_UNSCAF_Rifleman_Light",
			"B_UNSCAF_UAV_Operator_OQ_38_Wren","B_UNSCAF_UAV_Operator_OQ_40_Minibee","B_UNSCAF_Sniper",
			"B_UNSCAF_Forward_Observer","B_UNSCAF_Marine_Pilot","B_UNSCAF_Marine_Aircrewman",
			"B_UNSCAF_Heavy_Gunner","B_UNSCAF_Asst_Heavy_Gunner",
			"B_UNSCAF_SF_Team_Leader","B_UNSCAF_SF_Airman","B_UNSCAF_SF_Sentry",

			"B_UNSCAF_M12A_FAV","B_UNSCAF_M12A_LRV_M41","B_UNSCAF_M12AG1_LAAV_M68A","B_UNSCAF_M12G2_LAAV_M68B",
			"B_UNSCAF_M831A_LTV","B_UNSCAF_M274R_ULATV","B_UNSCAF_M112_WPC","B_UNSCAF_M112_WPC_M41",
			"B_UNSCAF_Maintenance_Cart","B_UNSCAF_M1087_Repair","B_UNSCAF_M1087","B_UNSCAF_M1087C",
			"B_UNSCAF_M1087_Ammo","B_UNSCAF_M1087_Fuel","B_UNSCAF_M1087_Medical",
			"B_UNSCAF_OQ_40_Minibee","B_UNSCAF_OQ_38_Wren","B_UNSCAF_D77H_TCI",
			"B_UNSCAF_AV_14_CAP","B_UNSCAF_AV_14_CAS",
			"B_UNSCAF_AIE_486H_MMG","B_UNSCAF_AU_44","B_UNSCAF_M95_Lance","B_UNSCAF_LAU_65D_SGM_151",
			"B_UNSCAF_M247A1_MMG","B_UNSCAF_M250_HMG","B_UNSCAF_M460AGL","B_UNSCAF_M71_Scythe","B_UNSCAF_M247H",
			"B_UNSCAF_M494_IFV","B_UNSCAF_M808B2","B_UNSCAF_M808B_MBT","B_UNSCAF_M808BM_MBT",
			"B_UNSCAF_M850_HBT","B_UNSCAF_M875_SPH","B_UNSCAF_D77H_TCI_AV",
			"B_UNSCAF_M808R_MRV","B_UNSCAF_M808B2A1","B_UNSCAF_M705_MLRS"
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
