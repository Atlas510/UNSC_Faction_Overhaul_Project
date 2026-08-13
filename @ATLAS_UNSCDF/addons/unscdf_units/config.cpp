class CfgPatches
{
	class B_ATLAS_UNSCDF
	{
		author = "Atlas";
		name = "UNSCDF Units";
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
	class B_ATLAS_UNSCDF
	{
		displayName = "United Nations Space Command";
		priority = 2;
		side = 1;
		icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
	};
};

class CfgEditorSubcategories
{
	class UNSCDF_Infantry_Marines
	{
		displayName = "Men (Marines)";
	};
	class UNSCDF_Infantry_ODST
	{
		displayName = "Men (ODST)";
	};
};

class CfgVehicleClasses
{
	class B_ATLAS_UNSCDF_INF       { displayName = "Men"; };
	class B_ATLAS_UNSCDF_INF_ODST  { displayName = "Men (ODST)"; };
	class B_ATLAS_UNSCDF_MOT       { displayName = "Cars"; };
	class B_ATLAS_UNSCDF_MECH      { displayName = "IFVs"; };
	class B_ATLAS_UNSCDF_ARMR      { displayName = "Tanks"; };
	class B_ATLAS_UNSCDF_ARTY      { displayName = "Artillery"; };
	class M705_MLRS_Viper          { displayName = "Artillery"; };
	class B_ATLAS_UNSCDF_NAV       { displayName = "Boats"; };
	class B_ATLAS_UNSCDF_AIR       { displayName = "Helicopters"; };
	class B_ATLAS_UNSCDF_DRN       { displayName = "Drones"; };
	class B_ATLAS_UNSCDF_TUR       { displayName = "Turrets"; };
};

class CfgVehicles
{
	#include "CfgVehicles_BaseImports.hpp"
	#include "CfgVehicles_Infantry.hpp"
	#include "CfgVehicles_Vehicles.hpp"
};

// IMPORTANT: CfgGroups.hpp already defines class CfgGroups, so include it directly.
#include "CfgGroups.hpp"

