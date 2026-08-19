// ============================================================
//  CfgVehicles_Infantry.hpp — UNSCAF Units
//
//  Define one class block per infantry role.
//  Duplicate the template block below for each new unit.
//
//  FILL-IN GUIDE:
//    Search for "FILL:" — every occurrence marks something
//    you must provide before the faction will work in-game.
//
//  NAMING CONVENTION:
//    Classname  : B_UNSCAF_<RoleName>
//    Faction    : B_ATLAS_UNSCAF
//    VehicleClass (Zeus category) : B_ATLAS_UNSCAF_INF
// ============================================================

// ---- OFFICER -----------------------------------------------
class B_UNSCAF_Officer : TODO_ParentClass_Officer /* FILL: parent class from OPTRE/TCP */ {
	author = "Atlas510";
	scope = 2;
	scopeCurator = 2;
	displayName = "Officer";                // FILL: display name shown in Zeus
	side = 1;
	faction = "B_ATLAS_UNSCAF";
	vehicleClass = "B_ATLAS_UNSCAF_INF";
	editorSubcategory = "UNSCAF_Infantry";  // FILL: must match a class in CfgEditorSubcategories

	identityTypes[] = {"Head_NATO","LanguageENG_F"};

	uniformClass = "TODO_UniformClass";     // FILL: classname of default uniform item
	backpack = "";                          // FILL: backpack classname, or leave ""

	linkedItems[] =
	{
		"TODO_Vest",       // FILL: vest classname
		"TODO_Helmet",     // FILL: headgear classname
		"ItemMap","ItemRadio","ItemCompass","ACE_Altimeter"
		// FILL: add/remove items as needed
	};
	respawnlinkedItems[] =
	{
		"TODO_Vest",
		"TODO_Helmet",
		"ItemMap","ItemRadio","ItemCompass","ACE_Altimeter"
	};

	weapons[] = {"TODO_PrimaryWeapon","TODO_Sidearm","TODO_Binoculars"}; // FILL
	respawnWeapons[] = {"TODO_PrimaryWeapon","TODO_Sidearm","TODO_Binoculars"};

	magazines[] =
	{
		"TODO_PrimaryMag","TODO_PrimaryMag",
		"TODO_SidearmMag","TODO_SidearmMag"
		// FILL: all carried magazines
	};
	respawnMagazines[] =
	{
		"TODO_PrimaryMag","TODO_PrimaryMag",
		"TODO_SidearmMag","TODO_SidearmMag"
	};

	// ALiVE loadout array — paste full loadout export here
	ALiVE_orbatCreator_loadout[] = {}; // FILL: ALiVE loadout array

	ATLAS_AF_UNIFORM_RAND_EH
};

// ---- RIFLEMAN ----------------------------------------------
class B_UNSCAF_Rifleman : TODO_ParentClass_Rifleman /* FILL */ {
	author = "Atlas510";
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman";
	side = 1;
	faction = "B_ATLAS_UNSCAF";
	vehicleClass = "B_ATLAS_UNSCAF_INF";
	editorSubcategory = "UNSCAF_Infantry";

	identityTypes[] = {"Head_NATO","LanguageENG_F"};

	uniformClass = "TODO_UniformClass"; // FILL
	backpack = "";

	linkedItems[] = {"TODO_Vest","TODO_Helmet","ItemMap","ItemRadio","ItemCompass"};
	respawnlinkedItems[] = {"TODO_Vest","TODO_Helmet","ItemMap","ItemRadio","ItemCompass"};

	weapons[] = {"TODO_PrimaryWeapon","TODO_Sidearm"};
	respawnWeapons[] = {"TODO_PrimaryWeapon","TODO_Sidearm"};

	magazines[] = {"TODO_PrimaryMag","TODO_PrimaryMag","TODO_PrimaryMag","TODO_SidearmMag"};
	respawnMagazines[] = {"TODO_PrimaryMag","TODO_PrimaryMag","TODO_PrimaryMag","TODO_SidearmMag"};

	ALiVE_orbatCreator_loadout[] = {}; // FILL

	ATLAS_AF_UNIFORM_RAND_EH
};

// ---- TEAM LEADER -------------------------------------------
class B_UNSCAF_Team_Leader : TODO_ParentClass_TL /* FILL */ {
	author = "Atlas510";
	scope = 2;
	scopeCurator = 2;
	displayName = "Team Leader";
	side = 1;
	faction = "B_ATLAS_UNSCAF";
	vehicleClass = "B_ATLAS_UNSCAF_INF";
	editorSubcategory = "UNSCAF_Infantry";

	identityTypes[] = {"Head_NATO","LanguageENG_F"};

	uniformClass = "TODO_UniformClass"; // FILL
	backpack = "";

	linkedItems[] = {"TODO_Vest","TODO_Helmet","ItemMap","ItemRadio","ItemCompass"};
	respawnlinkedItems[] = {"TODO_Vest","TODO_Helmet","ItemMap","ItemRadio","ItemCompass"};

	weapons[] = {"TODO_PrimaryWeapon","TODO_Sidearm"};
	respawnWeapons[] = {"TODO_PrimaryWeapon","TODO_Sidearm"};

	magazines[] = {"TODO_PrimaryMag","TODO_PrimaryMag","TODO_PrimaryMag","TODO_SidearmMag"};
	respawnMagazines[] = {"TODO_PrimaryMag","TODO_PrimaryMag","TODO_PrimaryMag","TODO_SidearmMag"};

	ALiVE_orbatCreator_loadout[] = {}; // FILL

	ATLAS_AF_UNIFORM_RAND_EH
};

// ---- SQUAD LEADER ------------------------------------------
class B_UNSCAF_Squad_Leader : TODO_ParentClass_SL /* FILL */ {
	author = "Atlas510";
	scope = 2;
	scopeCurator = 2;
	displayName = "Squad Leader";
	side = 1;
	faction = "B_ATLAS_UNSCAF";
	vehicleClass = "B_ATLAS_UNSCAF_INF";
	editorSubcategory = "UNSCAF_Infantry";

	identityTypes[] = {"Head_NATO","LanguageENG_F"};

	uniformClass = "TODO_UniformClass"; // FILL
	backpack = "";

	linkedItems[] = {"TODO_Vest","TODO_Helmet","ItemMap","ItemRadio","ItemCompass"};
	respawnlinkedItems[] = {"TODO_Vest","TODO_Helmet","ItemMap","ItemRadio","ItemCompass"};

	weapons[] = {"TODO_PrimaryWeapon","TODO_Sidearm"};
	respawnWeapons[] = {"TODO_PrimaryWeapon","TODO_Sidearm"};

	magazines[] = {"TODO_PrimaryMag","TODO_PrimaryMag","TODO_PrimaryMag","TODO_SidearmMag"};
	respawnMagazines[] = {"TODO_PrimaryMag","TODO_PrimaryMag","TODO_PrimaryMag","TODO_SidearmMag"};

	ALiVE_orbatCreator_loadout[] = {}; // FILL

	ATLAS_AF_UNIFORM_RAND_EH
};

// ---- CORPSMAN (MEDIC) --------------------------------------
class B_UNSCAF_Corpsman : TODO_ParentClass_Medic /* FILL */ {
	author = "Atlas510";
	scope = 2;
	scopeCurator = 2;
	displayName = "Corpsman";
	side = 1;
	faction = "B_ATLAS_UNSCAF";
	vehicleClass = "B_ATLAS_UNSCAF_INF";
	editorSubcategory = "UNSCAF_Infantry";

	identityTypes[] = {"Head_NATO","LanguageENG_F"};

	uniformClass = "TODO_UniformClass"; // FILL
	backpack = "TODO_MedicBackpack";    // FILL

	linkedItems[] = {"TODO_Vest","TODO_Helmet","ItemMap","ItemRadio","ItemCompass"};
	respawnlinkedItems[] = {"TODO_Vest","TODO_Helmet","ItemMap","ItemRadio","ItemCompass"};

	weapons[] = {"TODO_PrimaryWeapon","TODO_Sidearm"};
	respawnWeapons[] = {"TODO_PrimaryWeapon","TODO_Sidearm"};

	magazines[] = {"TODO_PrimaryMag","TODO_PrimaryMag","TODO_SidearmMag"};
	respawnMagazines[] = {"TODO_PrimaryMag","TODO_PrimaryMag","TODO_SidearmMag"};

	ALiVE_orbatCreator_loadout[] = {}; // FILL

	ATLAS_AF_UNIFORM_RAND_EH
};

// ---- PILOT -------------------------------------------------
class B_UNSCAF_Pilot : TODO_ParentClass_Pilot /* FILL */ {
	author = "Atlas510";
	scope = 2;
	scopeCurator = 2;
	displayName = "Pilot";
	side = 1;
	faction = "B_ATLAS_UNSCAF";
	vehicleClass = "B_ATLAS_UNSCAF_INF";
	editorSubcategory = "UNSCAF_Infantry";

	identityTypes[] = {"Head_NATO","LanguageENG_F"};

	uniformClass = "TODO_PilotUniform"; // FILL
	backpack = "";

	linkedItems[] = {"TODO_PilotVest","TODO_PilotHelmet","ItemMap","ItemRadio","ItemCompass"};
	respawnlinkedItems[] = {"TODO_PilotVest","TODO_PilotHelmet","ItemMap","ItemRadio","ItemCompass"};

	weapons[] = {"TODO_Sidearm"};
	respawnWeapons[] = {"TODO_Sidearm"};

	magazines[] = {"TODO_SidearmMag","TODO_SidearmMag"};
	respawnMagazines[] = {"TODO_SidearmMag","TODO_SidearmMag"};

	ALiVE_orbatCreator_loadout[] = {}; // FILL

	ATLAS_AF_UNIFORM_RAND_EH
};

// ---- GRENADIER ---------------------------------------------
class B_UNSCAF_Grenadier : TODO_ParentClass_Grenadier /* FILL */ {
	author = "Atlas510";
	scope = 2;
	scopeCurator = 2;
	displayName = "Grenadier";
	side = 1;
	faction = "B_ATLAS_UNSCAF";
	vehicleClass = "B_ATLAS_UNSCAF_INF";
	editorSubcategory = "UNSCAF_Infantry";

	identityTypes[] = {"Head_NATO","LanguageENG_F"};

	uniformClass = "TODO_UniformClass"; // FILL
	backpack = "";

	linkedItems[] = {"TODO_Vest","TODO_Helmet","ItemMap","ItemRadio","ItemCompass"};
	respawnlinkedItems[] = {"TODO_Vest","TODO_Helmet","ItemMap","ItemRadio","ItemCompass"};

	weapons[] = {"TODO_GrenadeLauncher","TODO_Sidearm"};
	respawnWeapons[] = {"TODO_GrenadeLauncher","TODO_Sidearm"};

	magazines[] = {"TODO_PrimaryMag","TODO_PrimaryMag","TODO_GrenadeMag","TODO_GrenadeMag","TODO_SidearmMag"};
	respawnMagazines[] = {"TODO_PrimaryMag","TODO_PrimaryMag","TODO_GrenadeMag","TODO_GrenadeMag","TODO_SidearmMag"};

	ALiVE_orbatCreator_loadout[] = {}; // FILL

	ATLAS_AF_UNIFORM_RAND_EH
};

// ---- MARKSMAN ----------------------------------------------
class B_UNSCAF_Marksman : TODO_ParentClass_Marksman /* FILL */ {
	author = "Atlas510";
	scope = 2;
	scopeCurator = 2;
	displayName = "Marksman";
	side = 1;
	faction = "B_ATLAS_UNSCAF";
	vehicleClass = "B_ATLAS_UNSCAF_INF";
	editorSubcategory = "UNSCAF_Infantry";

	identityTypes[] = {"Head_NATO","LanguageENG_F"};

	uniformClass = "TODO_UniformClass"; // FILL
	backpack = "";

	linkedItems[] = {"TODO_Vest","TODO_Helmet","ItemMap","ItemRadio","ItemCompass"};
	respawnlinkedItems[] = {"TODO_Vest","TODO_Helmet","ItemMap","ItemRadio","ItemCompass"};

	weapons[] = {"TODO_DMR","TODO_Sidearm"};
	respawnWeapons[] = {"TODO_DMR","TODO_Sidearm"};

	magazines[] = {"TODO_DMRMag","TODO_DMRMag","TODO_DMRMag","TODO_SidearmMag"};
	respawnMagazines[] = {"TODO_DMRMag","TODO_DMRMag","TODO_DMRMag","TODO_SidearmMag"};

	ALiVE_orbatCreator_loadout[] = {}; // FILL

	ATLAS_AF_UNIFORM_RAND_EH
};

// ---- AUTORIFLEMAN ------------------------------------------
class B_UNSCAF_Autorifleman : TODO_ParentClass_AR /* FILL */ {
	author = "Atlas510";
	scope = 2;
	scopeCurator = 2;
	displayName = "Autorifleman";
	side = 1;
	faction = "B_ATLAS_UNSCAF";
	vehicleClass = "B_ATLAS_UNSCAF_INF";
	editorSubcategory = "UNSCAF_Infantry";

	identityTypes[] = {"Head_NATO","LanguageENG_F"};

	uniformClass = "TODO_UniformClass"; // FILL
	backpack = "TODO_LMGAmmoBackpack";  // FILL

	linkedItems[] = {"TODO_Vest","TODO_Helmet","ItemMap","ItemRadio","ItemCompass"};
	respawnlinkedItems[] = {"TODO_Vest","TODO_Helmet","ItemMap","ItemRadio","ItemCompass"};

	weapons[] = {"TODO_LMG","TODO_Sidearm"};
	respawnWeapons[] = {"TODO_LMG","TODO_Sidearm"};

	magazines[] = {"TODO_LMGMag","TODO_LMGMag","TODO_SidearmMag"};
	respawnMagazines[] = {"TODO_LMGMag","TODO_LMGMag","TODO_SidearmMag"};

	ALiVE_orbatCreator_loadout[] = {}; // FILL

	ATLAS_AF_UNIFORM_RAND_EH
};

// ---- MISSILE SPECIALIST (AT) --------------------------------
class B_UNSCAF_Missile_Specialist_AT : TODO_ParentClass_AT /* FILL */ {
	author = "Atlas510";
	scope = 2;
	scopeCurator = 2;
	displayName = "Missile Specialist (AT)";
	side = 1;
	faction = "B_ATLAS_UNSCAF";
	vehicleClass = "B_ATLAS_UNSCAF_INF";
	editorSubcategory = "UNSCAF_Infantry";

	identityTypes[] = {"Head_NATO","LanguageENG_F"};

	uniformClass = "TODO_UniformClass"; // FILL
	backpack = "TODO_ATBackpack";       // FILL

	linkedItems[] = {"TODO_Vest","TODO_Helmet","ItemMap","ItemRadio","ItemCompass"};
	respawnlinkedItems[] = {"TODO_Vest","TODO_Helmet","ItemMap","ItemRadio","ItemCompass"};

	weapons[] = {"TODO_Launcher","TODO_PrimaryWeapon","TODO_Sidearm"};
	respawnWeapons[] = {"TODO_Launcher","TODO_PrimaryWeapon","TODO_Sidearm"};

	magazines[] = {"TODO_RocketMag","TODO_RocketMag","TODO_PrimaryMag","TODO_SidearmMag"};
	respawnMagazines[] = {"TODO_RocketMag","TODO_RocketMag","TODO_PrimaryMag","TODO_SidearmMag"};

	ALiVE_orbatCreator_loadout[] = {}; // FILL

	ATLAS_AF_UNIFORM_RAND_EH
};

// ---- MISSILE SPECIALIST (AA) --------------------------------
class B_UNSCAF_Missile_Specialist_AA : TODO_ParentClass_AA /* FILL */ {
	author = "Atlas510";
	scope = 2;
	scopeCurator = 2;
	displayName = "Missile Specialist (AA)";
	side = 1;
	faction = "B_ATLAS_UNSCAF";
	vehicleClass = "B_ATLAS_UNSCAF_INF";
	editorSubcategory = "UNSCAF_Infantry";

	identityTypes[] = {"Head_NATO","LanguageENG_F"};

	uniformClass = "TODO_UniformClass"; // FILL
	backpack = "TODO_AABackpack";       // FILL

	linkedItems[] = {"TODO_Vest","TODO_Helmet","ItemMap","ItemRadio","ItemCompass"};
	respawnlinkedItems[] = {"TODO_Vest","TODO_Helmet","ItemMap","ItemRadio","ItemCompass"};

	weapons[] = {"TODO_AALauncher","TODO_PrimaryWeapon","TODO_Sidearm"};
	respawnWeapons[] = {"TODO_AALauncher","TODO_PrimaryWeapon","TODO_Sidearm"};

	magazines[] = {"TODO_AAMag","TODO_AAMag","TODO_PrimaryMag","TODO_SidearmMag"};
	respawnMagazines[] = {"TODO_AAMag","TODO_AAMag","TODO_PrimaryMag","TODO_SidearmMag"};

	ALiVE_orbatCreator_loadout[] = {}; // FILL

	ATLAS_AF_UNIFORM_RAND_EH
};

// ---- CREWMAN -----------------------------------------------
class B_UNSCAF_Crewman : TODO_ParentClass_Crew /* FILL */ {
	author = "Atlas510";
	scope = 2;
	scopeCurator = 2;
	displayName = "Crewman";
	side = 1;
	faction = "B_ATLAS_UNSCAF";
	vehicleClass = "B_ATLAS_UNSCAF_INF";
	editorSubcategory = "UNSCAF_Infantry";

	identityTypes[] = {"Head_NATO","LanguageENG_F"};

	uniformClass = "TODO_CrewUniform"; // FILL
	backpack = "";

	linkedItems[] = {"TODO_CrewVest","TODO_CrewHelmet","ItemMap","ItemRadio","ItemCompass"};
	respawnlinkedItems[] = {"TODO_CrewVest","TODO_CrewHelmet","ItemMap","ItemRadio","ItemCompass"};

	weapons[] = {"TODO_Sidearm"};
	respawnWeapons[] = {"TODO_Sidearm"};

	magazines[] = {"TODO_SidearmMag","TODO_SidearmMag"};
	respawnMagazines[] = {"TODO_SidearmMag","TODO_SidearmMag"};

	ALiVE_orbatCreator_loadout[] = {}; // FILL

	ATLAS_AF_UNIFORM_RAND_EH
};

// ---- ENGINEER ----------------------------------------------
class B_UNSCAF_Engineer : TODO_ParentClass_Engineer /* FILL */ {
	author = "Atlas510";
	scope = 2;
	scopeCurator = 2;
	displayName = "Engineer";
	side = 1;
	faction = "B_ATLAS_UNSCAF";
	vehicleClass = "B_ATLAS_UNSCAF_INF";
	editorSubcategory = "UNSCAF_Infantry";

	identityTypes[] = {"Head_NATO","LanguageENG_F"};

	uniformClass = "TODO_UniformClass"; // FILL
	backpack = "TODO_EngineerBackpack"; // FILL

	linkedItems[] = {"TODO_Vest","TODO_Helmet","ItemMap","ItemRadio","ItemCompass"};
	respawnlinkedItems[] = {"TODO_Vest","TODO_Helmet","ItemMap","ItemRadio","ItemCompass"};

	weapons[] = {"TODO_PrimaryWeapon","TODO_Sidearm"};
	respawnWeapons[] = {"TODO_PrimaryWeapon","TODO_Sidearm"};

	magazines[] = {"TODO_PrimaryMag","TODO_PrimaryMag","TODO_SidearmMag"};
	respawnMagazines[] = {"TODO_PrimaryMag","TODO_PrimaryMag","TODO_SidearmMag"};

	ALiVE_orbatCreator_loadout[] = {}; // FILL

	ATLAS_AF_UNIFORM_RAND_EH
};

// TODO — Add more roles below following the same template block.
// Copy any block above, update:
//   1. Classname (B_UNSCAF_<Role>)
//   2. Parent class (TODO_ParentClass_<Role>)
//   3. displayName
//   4. uniformClass / backpack
//   5. linkedItems / respawnlinkedItems
//   6. weapons / respawnWeapons
//   7. magazines / respawnMagazines
//   8. ALiVE_orbatCreator_loadout
