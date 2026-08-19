  class B_UNSCMC_Officer : TCP_B_UNSC_MC_Officer {
        author = "Atlas";
        scope = 2;
        scopeCurator = 2;
        displayName = "Officer";
        side = 1;
        faction = "B_ATLAS_UNSCMC";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_UNSC_Casual_Gray"};

        uniformClass = "TCP_U_B_CBUU_TacShirt_HalfRoll_Bloused_Kneepads_Olive";

        linkedItems[] = {"TCP_V_M43A_Light_1_Olive","TCP_H_PatrolCap_Olive","ItemMap","ItemRadio","ItemCompass","ACE_Altimeter"};
        respawnlinkedItems[] = {"TCP_V_M43A_Light_1_Olive","TCP_H_PatrolCap_Olive","ItemMap","ItemRadio","ItemCompass","ACE_Altimeter"};

        weapons[] = {"CTGCY_BR55_CTGCY","TCP_hgun_Pistol_M6C2","CTGCY_H120_BINOC"};
        respawnWeapons[] = {"CTGCY_BR55_CTGCY","TCP_hgun_Pistol_M6C2","CTGCY_H120_BINOC"};

        magazines[] = {"CTGCY_36Rnd_95x40_Mag","TCP_12Rnd_127x30_52_Mag","CTGCY_36Rnd_95x40_Mag","TCP_12Rnd_127x30_52_Mag"};
        respawnMagazines[] = {"CTGCY_36Rnd_95x40_Mag","TCP_12Rnd_127x30_52_Mag","CTGCY_36Rnd_95x40_Mag","TCP_12Rnd_127x30_52_Mag"};

        ALiVE_orbatCreator_loadout[] = {{"CTGCY_BR55_CTGCY","","","CTGCY_BR55_Scope",{"CTGCY_36Rnd_95x40_Mag",36},{},""},{},{"TCP_hgun_Pistol_M6C2","","","TCP_optic_KFA_M6C2",{"TCP_12Rnd_127x30_52_Mag",12},{},"TCP_bipod_handGuard_M6G2_blk"},{"TCP_U_B_CBUU_TacShirt_HalfRoll_Bloused_Kneepads_Olive",{{"TCP_12Rnd_127x30_52_Mag",3,12}}},{"TCP_V_M43A_Light_1_Olive",{{"ACE_CableTie",2},{"ACE_fieldDressing",4},{"ACE_Canteen",1},{"ACE_EarPlugs",1},{"ACE_MapTools",1},{"ACE_Flashlight_XL50",1},{"ACE_tourniquet",1},{"CTGCY_36Rnd_95x40_Mag",7,36},{"Chemlight_blue",2,1},{"TCP_M21_SmokeRed",1,1},{"TCP_M21_Smoke",1,1},{"HandGrenade",1,1}}},{},"TCP_H_PatrolCap_Olive","TCP_G_TacticalGlasses_Gold",{"CTGCY_H120_BINOC","","","",{},{},""},{"ItemMap","","ItemRadio","ItemCompass","ACE_Altimeter",""}};


      class EventHandlers {
	class CBA_Extended_EventHandlers {};

	class ALiVE_orbatCreator {
		init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0; sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout; reload _this}; [_this] call ATLAS_fnc_randomizeMarineUniform; [_this] call ATLAS_fnc_randomizeKit;}; _this spawn _onSpawn; (_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
	};
};

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_UNSCMC_Rifleman : TCP_B_UNSC_MC_Soldier {
        author = "Atlas";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 1;
        faction = "B_ATLAS_UNSCMC";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_UNSC_Default_Gray"};

        uniformClass = "TCP_U_B_CBUU_FieldTop_Full_Gloves_Kneepads_Woodland";

        linkedItems[] = {"TCP_V_M43A_GungnirS_3_Olive","TCP_H_Helmet_CH43A_Olive","ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch"};
        respawnlinkedItems[] = {"TCP_V_M43A_GungnirS_3_Olive","TCP_H_Helmet_CH43A_Olive","ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch"};

        weapons[] = {"CTGCY_MA5C_FL_CTGCY","TCP_hgun_Pistol_M6G2"};
        respawnWeapons[] = {"CTGCY_MA5C_FL_CTGCY","TCP_hgun_Pistol_M6G2"};

        magazines[] = {"CTGCY_32Rnd_762x51_Mag","TCP_8Rnd_127x30_52_Mag","CTGCY_32Rnd_762x51_Mag","TCP_8Rnd_127x30_52_Mag"};
        respawnMagazines[] = {"CTGCY_32Rnd_762x51_Mag","TCP_8Rnd_127x30_52_Mag","CTGCY_32Rnd_762x51_Mag","TCP_8Rnd_127x30_52_Mag"};

        ALiVE_orbatCreator_loadout[] = {{"CTGCY_MA5C_FL_CTGCY","","","OPTRE_MA5_BUIS",{"CTGCY_32Rnd_762x51_Mag",32},{},""},{},{"TCP_hgun_Pistol_M6G2","","","",{"TCP_8Rnd_127x30_52_Mag",8},{},"TCP_bipod_handGuard_M6G2"},{"TCP_U_B_CBUU_FieldTop_Full_Gloves_Kneepads_Woodland",{{"ACE_EarPlugs",1},{"ACE_fieldDressing",1},{"ACE_packingBandage",1},{"ACE_morphine",1},{"ACE_tourniquet",1},{"TCP_8Rnd_127x30_52_Mag",3,8}}},{"TCP_V_M43A_GungnirS_3_Olive",{{"ACE_fieldDressing",4},{"ACE_CableTie",2},{"ACE_Canteen",1},{"ACE_EarPlugs",1},{"ACE_MRE_BeefStew",1},{"ACE_tourniquet",1},{"TCP_M9R_Frag",1,1},{"TCP_M21_Smoke",1,1},{"Chemlight_green",1,1},{"CTGCY_32Rnd_762x51_Mag",8,32},{"Chemlight_red",1,1}}},{},"TCP_H_Helmet_CH43A_Olive","TCP_G_TacticalGlasses_Black_DP",{},{"ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch",""}};


        class EventHandlers {
	class CBA_Extended_EventHandlers {};

	class ALiVE_orbatCreator {
		init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0; sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout; reload _this}; [_this] call ATLAS_fnc_randomizeMarineUniform; [_this] call ATLAS_fnc_randomizeKit;}; _this spawn _onSpawn; (_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
	};
};

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_UNSCMC_Squad_Leader : TCP_B_UNSC_MC_Soldier_SL {
        author = "Atlas";
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Leader";
        side = 1;
        faction = "B_ATLAS_UNSCMC";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_UNSC_Default_Gray"};

        uniformClass = "TCP_U_B_CBUU_FieldTop_Full_Gloves_Kneepads_Woodland";

        linkedItems[] = {"TCP_V_M43A_GungnirS_3_Olive","TCP_H_Helmet_CH43A_Olive","ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch"};
        respawnlinkedItems[] = {"TCP_V_M43A_GungnirS_3_Olive","TCP_H_Helmet_CH43A_Olive","ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch"};

        weapons[] = {"CTGCY_BR55HB_CTGCY","TCP_hgun_Pistol_M6G2"};
        respawnWeapons[] = {"CTGCY_BR55HB_CTGCY","TCP_hgun_Pistol_M6G2"};

        magazines[] = {"CTGCY_36Rnd_95x40_Mag","TCP_8Rnd_127x30_52_Mag","CTGCY_36Rnd_95x40_Mag","TCP_8Rnd_127x30_52_Mag"};
        respawnMagazines[] = {"CTGCY_36Rnd_95x40_Mag","TCP_8Rnd_127x30_52_Mag","CTGCY_36Rnd_95x40_Mag","TCP_8Rnd_127x30_52_Mag"};

        ALiVE_orbatCreator_loadout[] = {{"CTGCY_BR55HB_CTGCY","","","CTGCY_BR55_Scope",{"CTGCY_36Rnd_95x40_Mag",36},{},""},{},{"TCP_hgun_Pistol_M6G2","","","",{"TCP_8Rnd_127x30_52_Mag",8},{},"TCP_bipod_handGuard_M6G2"},{"TCP_U_B_CBUU_FieldTop_Full_Gloves_Kneepads_Woodland",{{"ACE_EarPlugs",1},{"ACE_fieldDressing",1},{"ACE_packingBandage",1},{"ACE_morphine",1},{"ACE_tourniquet",1},{"TCP_8Rnd_127x30_52_Mag",3,8},{"CTGCY_36Rnd_95x40_Mag",1,36}}},{"TCP_V_M43A_GungnirS_3_Olive",{{"ACE_fieldDressing",4},{"ACE_CableTie",2},{"ACE_Canteen",1},{"ACE_EarPlugs",1},{"ACE_MRE_BeefStew",1},{"ACE_tourniquet",1},{"TCP_M9R_Frag",2,1},{"TCP_M21_Smoke",1,1},{"Chemlight_green",1,1},{"CTGCY_36Rnd_95x40_Mag",6,36},{"ACE_Chemlight_Orange",1,1},{"TCP_M21_SmokeRed",1,1}}},{},"TCP_H_Helmet_CH43A_Olive","TCP_G_TacticalGlasses_Black_DP",{},{"ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch",""}};


        class EventHandlers {
	class CBA_Extended_EventHandlers {};

	class ALiVE_orbatCreator {
		init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0; sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout; reload _this}; [_this] call ATLAS_fnc_randomizeMarineUniform; [_this] call ATLAS_fnc_randomizeKit;}; _this spawn _onSpawn; (_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
	};
};

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_UNSCMC_Team_Leader : TCP_B_UNSC_MC_Soldier_TL {
        author = "Atlas";
        scope = 2;
        scopeCurator = 2;
        displayName = "Team Leader";
        side = 1;
        faction = "B_ATLAS_UNSCMC";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_UNSC_Default_Gray"};

        uniformClass = "TCP_U_B_CBUU_FieldTop_Full_Gloves_Kneepads_Woodland";

        linkedItems[] = {"TCP_V_M43A_GungnirS_3_Olive","TCP_H_Helmet_CH43A_Olive","ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch"};
        respawnlinkedItems[] = {"TCP_V_M43A_GungnirS_3_Olive","TCP_H_Helmet_CH43A_Olive","ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch"};

        weapons[] = {"CTGCY_MA5C_GL_CTGCY","TCP_hgun_Pistol_M6G2"};
        respawnWeapons[] = {"CTGCY_MA5C_GL_CTGCY","TCP_hgun_Pistol_M6G2"};

        magazines[] = {"CTGCY_32Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","TCP_8Rnd_127x30_52_Mag","CTGCY_32Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","TCP_8Rnd_127x30_52_Mag"};
        respawnMagazines[] = {"CTGCY_32Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","TCP_8Rnd_127x30_52_Mag","CTGCY_32Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","TCP_8Rnd_127x30_52_Mag"};

        backpack = "TCP_B_NCO_2_M43_Medium_Rucksack_Olive_M43A";

        ALiVE_orbatCreator_loadout[] = {{"CTGCY_MA5C_GL_CTGCY","","","OPTRE_MA5_BUIS",{"CTGCY_32Rnd_762x51_Mag",32},{"1Rnd_HE_Grenade_shell",1},""},{},{"TCP_hgun_Pistol_M6G2","","","",{"TCP_8Rnd_127x30_52_Mag",8},{},"TCP_bipod_handGuard_M6G2"},{"TCP_U_B_CBUU_FieldTop_Full_Gloves_Kneepads_Woodland",{{"ACE_EarPlugs",1},{"ACE_fieldDressing",1},{"ACE_packingBandage",1},{"ACE_morphine",1},{"ACE_tourniquet",1},{"TCP_8Rnd_127x30_52_Mag",3,8},{"CTGCY_32Rnd_762x51_Mag",1,32}}},{"TCP_V_M43A_GungnirS_3_Olive",{{"ACE_fieldDressing",4},{"ACE_CableTie",2},{"ACE_Canteen",1},{"ACE_EarPlugs",1},{"ACE_MRE_BeefStew",1},{"ACE_tourniquet",1},{"TCP_M9R_Frag",2,1},{"TCP_M21_Smoke",1,1},{"Chemlight_green",1,1},{"ACE_Chemlight_Orange",1,1},{"TCP_M21_SmokeRed",1,1},{"CTGCY_32Rnd_762x51_Mag",7,32}}},{"TCP_B_NCO_2_M43_Medium_Rucksack_Olive_M43A",{{"1Rnd_HE_Grenade_shell",5,1},{"OPTRE_1Rnd_Smoke_Grenade_shell",2,1},{"OPTRE_1Rnd_SmokeRed_Grenade_shell",2,1},{"ACE_40mm_Flare_white",2,1}}},"TCP_H_Helmet_CH43A_Olive","TCP_G_TacticalGlasses_Black_DP",{},{"ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch",""}};


        class EventHandlers {
	class CBA_Extended_EventHandlers {};

	class ALiVE_orbatCreator {
		init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0; sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout; reload _this}; [_this] call ATLAS_fnc_randomizeMarineUniform; [_this] call ATLAS_fnc_randomizeKit;}; _this spawn _onSpawn; (_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
	};
};

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_UNSCMC_Ammo_Bearer : TCP_B_UNSC_MC_Soldier_A {
        author = "Atlas";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ammo Bearer";
        side = 1;
        faction = "B_ATLAS_UNSCMC";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_UNSC_Default_Gray"};

        uniformClass = "TCP_U_B_CBUU_FieldTop_Full_Gloves_Kneepads_Woodland";

        linkedItems[] = {"TCP_V_M43A_GungnirS_3_Olive","TCP_H_Helmet_CH43A_Olive","ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch"};
        respawnlinkedItems[] = {"TCP_V_M43A_GungnirS_3_Olive","TCP_H_Helmet_CH43A_Olive","ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch"};

        weapons[] = {"CTGCY_MA5C_FL_CTGCY","TCP_hgun_Pistol_M6G2"};
        respawnWeapons[] = {"CTGCY_MA5C_FL_CTGCY","TCP_hgun_Pistol_M6G2"};

        magazines[] = {"CTGCY_32Rnd_762x51_Mag","TCP_8Rnd_127x30_52_Mag","CTGCY_32Rnd_762x51_Mag","TCP_8Rnd_127x30_52_Mag"};
        respawnMagazines[] = {"CTGCY_32Rnd_762x51_Mag","TCP_8Rnd_127x30_52_Mag","CTGCY_32Rnd_762x51_Mag","TCP_8Rnd_127x30_52_Mag"};

        backpack = "TCP_B_Ammo_Bearer_1_M43_Medium_Rucksack_Olive_M43A";

        ALiVE_orbatCreator_loadout[] = {{"CTGCY_MA5C_FL_CTGCY","","","OPTRE_MA5_BUIS",{"CTGCY_32Rnd_762x51_Mag",32},{},""},{},{"TCP_hgun_Pistol_M6G2","","","",{"TCP_8Rnd_127x30_52_Mag",8},{},"TCP_bipod_handGuard_M6G2"},{"TCP_U_B_CBUU_FieldTop_Full_Gloves_Kneepads_Woodland",{{"ACE_EarPlugs",1},{"ACE_fieldDressing",1},{"ACE_packingBandage",1},{"ACE_morphine",1},{"ACE_tourniquet",1},{"TCP_8Rnd_127x30_52_Mag",3,8}}},{"TCP_V_M43A_GungnirS_3_Olive",{{"ACE_fieldDressing",4},{"ACE_CableTie",2},{"ACE_Canteen",1},{"ACE_EarPlugs",1},{"ACE_MRE_BeefStew",1},{"ACE_tourniquet",1},{"TCP_M9R_Frag",1,1},{"TCP_M21_Smoke",1,1},{"Chemlight_green",1,1},{"CTGCY_32Rnd_762x51_Mag",8,32},{"Chemlight_red",1,1}}},{"TCP_B_Ammo_Bearer_1_M43_Medium_Rucksack_Olive_M43A",{{"CTGCY_32Rnd_762x51_Mag",15,32},{"HandGrenade",3,1},{"TCP_M21_Smoke",3,1}}},"TCP_H_Helmet_CH43A_Olive","TCP_G_TacticalGlasses_Black_DP",{},{"ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch",""}};


       class EventHandlers {
	class CBA_Extended_EventHandlers {};

	class ALiVE_orbatCreator {
		init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0; sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout; reload _this}; [_this] call ATLAS_fnc_randomizeMarineUniform; [_this] call ATLAS_fnc_randomizeKit;}; _this spawn _onSpawn; (_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
	};
};

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_UNSCMC_Autorifleman_01 : TCP_B_UNSC_MC_Soldier_AR {
        author = "Atlas";
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman";
        side = 1;
        faction = "B_ATLAS_UNSCMC";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_UNSC_Default_Gray"};

        uniformClass = "TCP_U_B_CBUU_FieldTop_Full_Gloves_Kneepads_Woodland";

        linkedItems[] = {"TCP_V_M43A_GungnirL_3_Olive","TCP_H_Helmet_CH43A_Olive","ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch"};
        respawnlinkedItems[] = {"TCP_V_M43A_GungnirL_3_Olive","TCP_H_Helmet_CH43A_Olive","ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch"};

        weapons[] = {"CTGCY_M73_CTGCY","TCP_hgun_Pistol_M6G2"};
        respawnWeapons[] = {"CTGCY_M73_CTGCY","TCP_hgun_Pistol_M6G2"};

        magazines[] = {"CTGCY_100Rnd_95x40_Mag","TCP_8Rnd_127x30_52_Mag","CTGCY_100Rnd_95x40_Mag","TCP_8Rnd_127x30_52_Mag"};
        respawnMagazines[] = {"CTGCY_100Rnd_95x40_Mag","TCP_8Rnd_127x30_52_Mag","CTGCY_100Rnd_95x40_Mag","TCP_8Rnd_127x30_52_Mag"};

        backpack = "TCP_B_Autorifleman_1_M43_Medium_Rucksack_Olive_M43A";

        ALiVE_orbatCreator_loadout[] = {{"CTGCY_M73_CTGCY","","","CTGCY_M73_Sight",{"CTGCY_100Rnd_95x40_Mag",100},{},""},{},{"TCP_hgun_Pistol_M6G2","","","",{"TCP_8Rnd_127x30_52_Mag",8},{},"TCP_bipod_handGuard_M6G2"},{"TCP_U_B_CBUU_FieldTop_Full_Gloves_Kneepads_Woodland",{{"ACE_EarPlugs",1},{"ACE_fieldDressing",1},{"ACE_packingBandage",1},{"ACE_morphine",1},{"ACE_tourniquet",1},{"TCP_8Rnd_127x30_52_Mag",3,8}}},{"TCP_V_M43A_GungnirL_3_Olive",{{"ACE_fieldDressing",4},{"ACE_CableTie",2},{"ACE_Canteen",1},{"ACE_EarPlugs",1},{"ACE_MRE_BeefStew",1},{"ACE_tourniquet",1},{"TCP_M9R_Frag",1,1},{"TCP_M21_Smoke",1,1},{"Chemlight_green",1,1},{"Chemlight_red",1,1},{"CTGCY_100Rnd_95x40_Mag",2,100}}},{"TCP_B_Autorifleman_1_M43_Medium_Rucksack_Olive_M43A",{{"CTGCY_100Rnd_95x40_Mag",6,100}}},"TCP_H_Helmet_CH43A_Olive","TCP_G_TacticalGlasses_Black_DP",{},{"ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch",""}};


       class EventHandlers {
	class CBA_Extended_EventHandlers {};

	class ALiVE_orbatCreator {
		init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0; sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout; reload _this}; [_this] call ATLAS_fnc_randomizeMarineUniform; [_this] call ATLAS_fnc_randomizeKit;}; _this spawn _onSpawn; (_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
	};
};

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_UNSCMC_Corpsman : TCP_B_UNSC_MC_Soldier_Medic {
        author = "Atlas";
        scope = 2;
        scopeCurator = 2;
        displayName = "Corpsman";
        side = 1;
        faction = "B_ATLAS_UNSCMC";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_UNSC_Default_Gray"};

        uniformClass = "TCP_U_B_CBUU_FieldTop_Full_Gloves_Kneepads_Woodland";

        linkedItems[] = {"TCP_V_M43A_BaseSec_2_Olive","TCP_H_Helmet_CH43A_White","ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch"};
        respawnlinkedItems[] = {"TCP_V_M43A_BaseSec_2_Olive","TCP_H_Helmet_CH43A_White","ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch"};

        weapons[] = {"CTGCY_MA5C_FL_CTGCY","TCP_hgun_Pistol_M6G2"};
        respawnWeapons[] = {"CTGCY_MA5C_FL_CTGCY","TCP_hgun_Pistol_M6G2"};

        magazines[] = {"CTGCY_32Rnd_762x51_Mag","TCP_8Rnd_127x30_52_Mag","CTGCY_32Rnd_762x51_Mag","TCP_8Rnd_127x30_52_Mag"};
        respawnMagazines[] = {"CTGCY_32Rnd_762x51_Mag","TCP_8Rnd_127x30_52_Mag","CTGCY_32Rnd_762x51_Mag","TCP_8Rnd_127x30_52_Mag"};

        backpack = "TCP_B_Medic_1_M43_Medium_Rucksack_Olive_M43A";

        ALiVE_orbatCreator_loadout[] = {{"CTGCY_MA5C_FL_CTGCY","","","OPTRE_MA5_BUIS",{"CTGCY_32Rnd_762x51_Mag",32},{},""},{},{"TCP_hgun_Pistol_M6G2","","","",{"TCP_8Rnd_127x30_52_Mag",8},{},"TCP_bipod_handGuard_M6G2"},{"TCP_U_B_CBUU_FieldTop_Full_Gloves_Kneepads_Woodland",{{"ACE_EarPlugs",1},{"ACE_fieldDressing",1},{"ACE_packingBandage",1},{"ACE_morphine",1},{"ACE_tourniquet",1},{"TCP_8Rnd_127x30_52_Mag",3,8}}},{"TCP_V_M43A_BaseSec_2_Olive",{{"ACE_fieldDressing",4},{"ACE_CableTie",2},{"ACE_Canteen",1},{"ACE_EarPlugs",1},{"ACE_MRE_BeefStew",1},{"ACE_tourniquet",1},{"TCP_M9R_Frag",1,1},{"TCP_M21_Smoke",1,1},{"Chemlight_green",1,1},{"CTGCY_32Rnd_762x51_Mag",8,32},{"Chemlight_red",1,1}}},{"TCP_B_Medic_1_M43_Medium_Rucksack_Olive_M43A",{{"ACE_fieldDressing",10},{"ACE_elasticBandage",10},{"ACE_packingBandage",10},{"ACE_quikclot",10},{"OPTRE_Biofoam",5},{"ACE_bodyBag",4},{"TCP_BoneknittingPolymer",2},{"ACE_adenosine",6},{"ACE_epinephrine",6},{"TCP_HealthPack",1},{"ACE_morphine",6},{"OPTRE_Medigel",4},{"ACE_salineIV_500",2},{"ACE_splint",6},{"ACE_surgicalKit",1},{"ACE_suture",6},{"ACE_tourniquet",6}}},"TCP_H_Helmet_CH43A_White","TCP_G_TacticalGlasses_Black_DP",{},{"ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch",""}};


        class EventHandlers {
	class CBA_Extended_EventHandlers {};

	class ALiVE_orbatCreator {
		init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0; sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout; reload _this}; [_this] call ATLAS_fnc_randomizeMarineUniform; [_this] call ATLAS_fnc_randomizeKit;}; _this spawn _onSpawn; (_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
	};
};

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_UNSCMC_Crewman : TCP_B_UNSC_MC_Crew {
        author = "Atlas";
        scope = 2;
        scopeCurator = 2;
        displayName = "Crewman";
        side = 1;
        faction = "B_ATLAS_UNSCMC";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_UNSC_Default_Gray"};

        uniformClass = "TCP_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Unzipped_Woodland";

        linkedItems[] = {"TCP_V_M43A_Light_Olive","H_HelmetCrew_B","ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch"};
        respawnlinkedItems[] = {"TCP_V_M43A_Light_Olive","H_HelmetCrew_B","ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch"};

        weapons[] = {"CTGCY_M7_CTGCY","TCP_hgun_Pistol_M6G2"};
        respawnWeapons[] = {"CTGCY_M7_CTGCY","TCP_hgun_Pistol_M6G2"};

        magazines[] = {"CTGCY_60Rnd_5x23_Mag","TCP_8Rnd_127x30_52_Mag","CTGCY_60Rnd_5x23_Mag","TCP_8Rnd_127x30_52_Mag"};
        respawnMagazines[] = {"CTGCY_60Rnd_5x23_Mag","TCP_8Rnd_127x30_52_Mag","CTGCY_60Rnd_5x23_Mag","TCP_8Rnd_127x30_52_Mag"};

        ALiVE_orbatCreator_loadout[] = {{"CTGCY_M7_CTGCY","","","CTGCY_SLSV_Sight_2",{"CTGCY_60Rnd_5x23_Mag",60},{},""},{},{"TCP_hgun_Pistol_M6G2","","","",{"TCP_8Rnd_127x30_52_Mag",8},{},"TCP_bipod_handGuard_M6G2"},{"TCP_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Unzipped_Woodland",{{"ACE_fieldDressing",1},{"ACE_packingBandage",1},{"ACE_morphine",1},{"ACE_tourniquet",1},{"TCP_M21_Smoke",1,1},{"CTGCY_60Rnd_5x23_Mag",2,60}}},{"TCP_V_M43A_Light_Olive",{{"ACE_fieldDressing",4},{"ACE_CableTie",1},{"ACE_Canteen",1},{"ACE_EarPlugs",1},{"ACE_tourniquet",1},{"TCP_8Rnd_127x30_52_Mag",1,8},{"TCP_M9R_Frag",1,1},{"TCP_M21_SmokeGreen",2,1},{"TCP_M21_SmokeOrange",1,1},{"Chemlight_green",2,1},{"CTGCY_60Rnd_5x23_Mag",2,60}}},{},"H_HelmetCrew_B","TCP_G_BalaclavaTacticalGlasses_Gray_Gold",{},{"ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch",""}};


        class EventHandlers {
	class CBA_Extended_EventHandlers {};

	class ALiVE_orbatCreator {
		init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0; sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout; reload _this}; [_this] call ATLAS_fnc_randomizeMarineUniform; [_this] call ATLAS_fnc_randomizeKit;}; _this spawn _onSpawn; (_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
	};
};

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_UNSCMC_Engineer : TCP_B_UNSC_MC_Soldier_Engineer {
        author = "Atlas";
        scope = 2;
        scopeCurator = 2;
        displayName = "Engineer";
        side = 1;
        faction = "B_ATLAS_UNSCMC";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_UNSC_Default_Gray"};

        uniformClass = "TCP_U_B_CBUU_FieldTop_Full_Gloves_Kneepads_Woodland";

        linkedItems[] = {"TCP_V_M43A_GungnirS_3_Olive","TCP_H_Helmet_CH43A_Olive","ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch"};
        respawnlinkedItems[] = {"TCP_V_M43A_GungnirS_3_Olive","TCP_H_Helmet_CH43A_Olive","ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch"};

        weapons[] = {"CTGCY_MA5C_FL_CTGCY","TCP_hgun_Pistol_M6G2"};
        respawnWeapons[] = {"CTGCY_MA5C_FL_CTGCY","TCP_hgun_Pistol_M6G2"};

        magazines[] = {"CTGCY_32Rnd_762x51_Mag","TCP_8Rnd_127x30_52_Mag","CTGCY_32Rnd_762x51_Mag","TCP_8Rnd_127x30_52_Mag"};
        respawnMagazines[] = {"CTGCY_32Rnd_762x51_Mag","TCP_8Rnd_127x30_52_Mag","CTGCY_32Rnd_762x51_Mag","TCP_8Rnd_127x30_52_Mag"};

        ALiVE_orbatCreator_loadout[] = {{"CTGCY_MA5C_FL_CTGCY","","","OPTRE_MA5_BUIS",{"CTGCY_32Rnd_762x51_Mag",32},{},""},{},{"TCP_hgun_Pistol_M6G2","","","",{"TCP_8Rnd_127x30_52_Mag",8},{},"TCP_bipod_handGuard_M6G2"},{"TCP_U_B_CBUU_FieldTop_Full_Gloves_Kneepads_Woodland",{{"ACE_EarPlugs",1},{"ACE_fieldDressing",1},{"ACE_packingBandage",1},{"ACE_morphine",1},{"ACE_tourniquet",1},{"TCP_8Rnd_127x30_52_Mag",3,8}}},{"TCP_V_M43A_GungnirS_3_Olive",{{"ACE_fieldDressing",4},{"ACE_CableTie",2},{"ACE_Canteen",1},{"ACE_EarPlugs",1},{"ACE_MRE_BeefStew",1},{"ACE_tourniquet",1},{"TCP_M9R_Frag",1,1},{"TCP_M21_Smoke",1,1},{"Chemlight_green",1,1},{"CTGCY_32Rnd_762x51_Mag",8,32},{"Chemlight_red",1,1}}},{},"TCP_H_Helmet_CH43A_Olive","TCP_G_TacticalGlasses_Black_DP",{},{"ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch",""}};


       class EventHandlers {
	class CBA_Extended_EventHandlers {};

	class ALiVE_orbatCreator {
		init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0; sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout; reload _this}; [_this] call ATLAS_fnc_randomizeMarineUniform; [_this] call ATLAS_fnc_randomizeKit;}; _this spawn _onSpawn; (_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
	};
};

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_UNSCMC_Explosive_Specialist : TCP_B_UNSC_MC_Soldier_Exp {
        author = "Atlas";
        scope = 2;
        scopeCurator = 2;
        displayName = "Explosive Specialist";
        side = 1;
        faction = "B_ATLAS_UNSCMC";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_UNSC_Default_Gray"};

        uniformClass = "TCP_U_B_CBUU_FieldTop_Full_Gloves_Kneepads_Woodland";

        linkedItems[] = {"TCP_V_M43A_GungnirL_3_2_Olive","TCP_H_Helmet_CH43A_Olive","ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch"};
        respawnlinkedItems[] = {"TCP_V_M43A_GungnirL_3_2_Olive","TCP_H_Helmet_CH43A_Olive","ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch"};

        weapons[] = {"CTGCY_MA5C_FL_CTGCY","TCP_hgun_Pistol_M6G2"};
        respawnWeapons[] = {"CTGCY_MA5C_FL_CTGCY","TCP_hgun_Pistol_M6G2"};

        magazines[] = {"CTGCY_32Rnd_762x51_Mag","TCP_8Rnd_127x30_52_Mag","CTGCY_32Rnd_762x51_Mag","TCP_8Rnd_127x30_52_Mag"};
        respawnMagazines[] = {"CTGCY_32Rnd_762x51_Mag","TCP_8Rnd_127x30_52_Mag","CTGCY_32Rnd_762x51_Mag","TCP_8Rnd_127x30_52_Mag"};

        backpack = "TCP_B_Engineer_1_M43_Medium_Rucksack_Olive_M43A";

        ALiVE_orbatCreator_loadout[] = {{"CTGCY_MA5C_FL_CTGCY","","","OPTRE_MA5_BUIS",{"CTGCY_32Rnd_762x51_Mag",32},{},""},{},{"TCP_hgun_Pistol_M6G2","","","",{"TCP_8Rnd_127x30_52_Mag",8},{},"TCP_bipod_handGuard_M6G2"},{"TCP_U_B_CBUU_FieldTop_Full_Gloves_Kneepads_Woodland",{{"ACE_EarPlugs",1},{"ACE_fieldDressing",1},{"ACE_packingBandage",1},{"ACE_morphine",1},{"ACE_tourniquet",1},{"TCP_8Rnd_127x30_52_Mag",3,8}}},{"TCP_V_M43A_GungnirL_3_2_Olive",{{"ACE_fieldDressing",4},{"ACE_CableTie",2},{"ACE_Canteen",1},{"ACE_EarPlugs",1},{"ACE_MRE_BeefStew",1},{"ACE_tourniquet",1},{"TCP_M9R_Frag",1,1},{"TCP_M21_Smoke",1,1},{"Chemlight_green",1,1},{"CTGCY_32Rnd_762x51_Mag",8,32},{"Chemlight_red",1,1}}},{"TCP_B_Engineer_1_M43_Medium_Rucksack_Olive_M43A",{{"ACE_Clacker",1},{"MineDetector",1},{"ACE_DefusalKit",1},{"M168_Remote_Mag",1,1},{"C12_Remote_Mag",2,1}}},"TCP_H_Helmet_CH43A_Olive","TCP_G_TacticalGlasses_Black_DP",{},{"ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch",""}};


       class EventHandlers {
	class CBA_Extended_EventHandlers {};

	class ALiVE_orbatCreator {
		init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0; sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout; reload _this}; [_this] call ATLAS_fnc_randomizeMarineUniform; [_this] call ATLAS_fnc_randomizeKit;}; _this spawn _onSpawn; (_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
	};
};

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_UNSCMC_Grenadier : TCP_B_UNSC_MC_Soldier_GL {
        author = "Atlas";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 1;
        faction = "B_ATLAS_UNSCMC";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_UNSC_Default_Gray"};

        uniformClass = "TCP_U_B_CBUU_FieldTop_Full_Gloves_Kneepads_Woodland";

        linkedItems[] = {"TCP_V_M43A_GungnirS_3_Olive","TCP_H_Helmet_CH43A_Olive","ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch"};
        respawnlinkedItems[] = {"TCP_V_M43A_GungnirS_3_Olive","TCP_H_Helmet_CH43A_Olive","ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch"};

        weapons[] = {"CTGCY_MA5C_GL_CTGCY","TCP_hgun_Pistol_M6G2"};
        respawnWeapons[] = {"CTGCY_MA5C_GL_CTGCY","TCP_hgun_Pistol_M6G2"};

        magazines[] = {"CTGCY_32Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","TCP_8Rnd_127x30_52_Mag","CTGCY_32Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","TCP_8Rnd_127x30_52_Mag"};
        respawnMagazines[] = {"CTGCY_32Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","TCP_8Rnd_127x30_52_Mag","CTGCY_32Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","TCP_8Rnd_127x30_52_Mag"};

        backpack = "TCP_B_Grenadier_2_M43_Medium_Rucksack_Olive_M43A";

        ALiVE_orbatCreator_loadout[] = {{"CTGCY_MA5C_GL_CTGCY","","","OPTRE_MA5_BUIS",{"CTGCY_32Rnd_762x51_Mag",32},{"1Rnd_HE_Grenade_shell",1},""},{},{"TCP_hgun_Pistol_M6G2","","","",{"TCP_8Rnd_127x30_52_Mag",8},{},"TCP_bipod_handGuard_M6G2"},{"TCP_U_B_CBUU_FieldTop_Full_Gloves_Kneepads_Woodland",{{"ACE_EarPlugs",1},{"ACE_fieldDressing",1},{"ACE_packingBandage",1},{"ACE_morphine",1},{"ACE_tourniquet",1},{"TCP_8Rnd_127x30_52_Mag",3,8},{"CTGCY_32Rnd_762x51_Mag",1,32},{"1Rnd_HE_Grenade_shell",1,1}}},{"TCP_V_M43A_GungnirS_3_Olive",{{"ACE_fieldDressing",4},{"ACE_CableTie",2},{"ACE_Canteen",1},{"ACE_EarPlugs",1},{"ACE_MRE_BeefStew",1},{"ACE_tourniquet",1},{"TCP_M9R_Frag",1,1},{"TCP_M21_Smoke",1,1},{"Chemlight_green",1,1},{"Chemlight_red",1,1},{"CTGCY_32Rnd_762x51_Mag",2,32}}},{"TCP_B_Grenadier_2_M43_Medium_Rucksack_Olive_M43A",{{"1Rnd_HE_Grenade_shell",8,1},{"OPTRE_1Rnd_Smoke_Grenade_shell",4,1},{"ACE_40mm_Flare_white",4,1},{"TCP_M9R_Frag",2,1},{"TCP_M21_Smoke",2,1}}},"TCP_H_Helmet_CH43A_Olive","TCP_G_TacticalGlasses_Black_DP",{},{"ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch",""}};


      class EventHandlers {
	class CBA_Extended_EventHandlers {};

	class ALiVE_orbatCreator {
		init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0; sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout; reload _this}; [_this] call ATLAS_fnc_randomizeMarineUniform; [_this] call ATLAS_fnc_randomizeKit;}; _this spawn _onSpawn; (_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
	};
};

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_UNSCMC_Marksman : TCP_B_UNSC_MC_Soldier_M {
        author = "Atlas";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
        side = 1;
        faction = "B_ATLAS_UNSCMC";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_UNSC_Default_Gray"};

        uniformClass = "TCP_U_B_CBUU_FieldTop_Full_Gloves_Kneepads_Woodland";

        linkedItems[] = {"TCP_V_M43A_Pads_3_Olive","TCP_H_Helmet_CH43A_Olive","ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch"};
        respawnlinkedItems[] = {"TCP_V_M43A_Pads_3_Olive","TCP_H_Helmet_CH43A_Olive","ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch"};

        weapons[] = {"CTGCY_M395_CTGCY","TCP_hgun_Pistol_M6G2"};
        respawnWeapons[] = {"CTGCY_M395_CTGCY","TCP_hgun_Pistol_M6G2"};

        magazines[] = {"CTGCY_15Rnd_M762x51_Mag","TCP_8Rnd_127x30_52_Mag","CTGCY_15Rnd_M762x51_Mag","TCP_8Rnd_127x30_52_Mag"};
        respawnMagazines[] = {"CTGCY_15Rnd_M762x51_Mag","TCP_8Rnd_127x30_52_Mag","CTGCY_15Rnd_M762x51_Mag","TCP_8Rnd_127x30_52_Mag"};

        ALiVE_orbatCreator_loadout[] = {{"CTGCY_M395_CTGCY","","","CTGCY_EVOSD_Scope_ACE",{"CTGCY_15Rnd_M762x51_Mag",15},{},""},{},{"TCP_hgun_Pistol_M6G2","","","",{"TCP_8Rnd_127x30_52_Mag",8},{},"TCP_bipod_handGuard_M6G2"},{"TCP_U_B_CBUU_FieldTop_Full_Gloves_Kneepads_Woodland",{{"ACE_EarPlugs",1},{"ACE_fieldDressing",1},{"ACE_packingBandage",1},{"ACE_morphine",1},{"ACE_tourniquet",1},{"TCP_8Rnd_127x30_52_Mag",3,8}}},{"TCP_V_M43A_Pads_3_Olive",{{"ACE_fieldDressing",4},{"ACE_CableTie",2},{"ACE_Canteen",1},{"ACE_EarPlugs",1},{"ACE_MRE_BeefStew",1},{"ACE_tourniquet",1},{"TCP_M21_Smoke",1,1},{"Chemlight_green",1,1},{"Chemlight_red",1,1},{"CTGCY_15Rnd_M762x51_Mag",9,15},{"TCP_M9R_Frag",1,1}}},{},"TCP_H_Helmet_CH43A_Olive","TCP_G_TacticalGlasses_Black_DP",{},{"ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch",""}};


       class EventHandlers {
	class CBA_Extended_EventHandlers {};

	class ALiVE_orbatCreator {
		init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0; sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout; reload _this}; [_this] call ATLAS_fnc_randomizeMarineUniform; [_this] call ATLAS_fnc_randomizeKit;}; _this spawn _onSpawn; (_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
	};
};

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_UNSCMC_Missile_Speacialist_AA : TCP_B_UNSC_MC_Soldier_AA {
        author = "Atlas";
        scope = 2;
        scopeCurator = 2;
        displayName = "Missile Speacialist (AA)";
        side = 1;
        faction = "B_ATLAS_UNSCMC";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_UNSC_Default_Gray"};

        uniformClass = "TCP_U_B_CBUU_FieldTop_Full_Gloves_Kneepads_Woodland";

        linkedItems[] = {"TCP_V_M43A_GungnirS_3_Olive","TCP_H_Helmet_CH43A_Olive","ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch"};
        respawnlinkedItems[] = {"TCP_V_M43A_GungnirS_3_Olive","TCP_H_Helmet_CH43A_Olive","ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch"};

        weapons[] = {"CTGCY_MA5C_FL_CTGCY","CTGCY_M41_CTGCY","TCP_hgun_Pistol_M6G2"};
        respawnWeapons[] = {"CTGCY_MA5C_FL_CTGCY","CTGCY_M41_CTGCY","TCP_hgun_Pistol_M6G2"};

        magazines[] = {"CTGCY_32Rnd_762x51_Mag","CTGCY_M19_2Rnd_HEAT","TCP_8Rnd_127x30_52_Mag","CTGCY_32Rnd_762x51_Mag","TCP_8Rnd_127x30_52_Mag"};
        respawnMagazines[] = {"CTGCY_32Rnd_762x51_Mag","CTGCY_M19_2Rnd_HEAT","TCP_8Rnd_127x30_52_Mag","CTGCY_32Rnd_762x51_Mag","TCP_8Rnd_127x30_52_Mag"};

        backpack = "TCP_B_Rifleman_5_M43_Medium_Rucksack_Olive_M43A";

        ALiVE_orbatCreator_loadout[] = {{"CTGCY_MA5C_FL_CTGCY","","","OPTRE_MA5_BUIS",{"CTGCY_32Rnd_762x51_Mag",32},{},""},{"CTGCY_M41_CTGCY","","","",{"CTGCY_M19_2Rnd_HEAT",2},{},""},{"TCP_hgun_Pistol_M6G2","","","",{"TCP_8Rnd_127x30_52_Mag",8},{},"TCP_bipod_handGuard_M6G2"},{"TCP_U_B_CBUU_FieldTop_Full_Gloves_Kneepads_Woodland",{{"ACE_EarPlugs",1},{"ACE_fieldDressing",1},{"ACE_packingBandage",1},{"ACE_morphine",1},{"ACE_tourniquet",1},{"TCP_8Rnd_127x30_52_Mag",3,8}}},{"TCP_V_M43A_GungnirS_3_Olive",{{"ACE_fieldDressing",4},{"ACE_CableTie",2},{"ACE_Canteen",1},{"ACE_EarPlugs",1},{"ACE_MRE_BeefStew",1},{"ACE_tourniquet",1},{"TCP_M9R_Frag",1,1},{"TCP_M21_Smoke",1,1},{"Chemlight_green",1,1},{"CTGCY_32Rnd_762x51_Mag",8,32},{"Chemlight_red",1,1}}},{"TCP_B_Rifleman_5_M43_Medium_Rucksack_Olive_M43A",{{"CTGCY_M19_2Rnd_GHEATAA",3,2}}},"TCP_H_Helmet_CH43A_Olive","TCP_G_TacticalGlasses_Black_DP",{},{"ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch",""}};


       class EventHandlers {
	class CBA_Extended_EventHandlers {};

	class ALiVE_orbatCreator {
		init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0; sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout; reload _this}; [_this] call ATLAS_fnc_randomizeMarineUniform; [_this] call ATLAS_fnc_randomizeKit;}; _this spawn _onSpawn; (_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
	};
};

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_UNSCMC_Missile_Specialist_AT : TCP_B_UNSC_MC_Soldier_AT {
        author = "Atlas";
        scope = 2;
        scopeCurator = 2;
        displayName = "Missile Specialist (AT)";
        side = 1;
        faction = "B_ATLAS_UNSCMC";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_UNSC_Default_Gray"};

        uniformClass = "TCP_U_B_CBUU_FieldTop_Full_Gloves_Kneepads_Woodland";

        linkedItems[] = {"TCP_V_M43A_GungnirS_3_Olive","TCP_H_Helmet_CH43A_Olive","ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch"};
        respawnlinkedItems[] = {"TCP_V_M43A_GungnirS_3_Olive","TCP_H_Helmet_CH43A_Olive","ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch"};

        weapons[] = {"CTGCY_MA5C_FL_CTGCY","CTGCY_M41_CTGCY","TCP_hgun_Pistol_M6G2"};
        respawnWeapons[] = {"CTGCY_MA5C_FL_CTGCY","CTGCY_M41_CTGCY","TCP_hgun_Pistol_M6G2"};

        magazines[] = {"CTGCY_32Rnd_762x51_Mag","CTGCY_M19_2Rnd_HEAT","TCP_8Rnd_127x30_52_Mag","CTGCY_32Rnd_762x51_Mag","TCP_8Rnd_127x30_52_Mag"};
        respawnMagazines[] = {"CTGCY_32Rnd_762x51_Mag","CTGCY_M19_2Rnd_HEAT","TCP_8Rnd_127x30_52_Mag","CTGCY_32Rnd_762x51_Mag","TCP_8Rnd_127x30_52_Mag"};

        backpack = "TCP_B_Rifleman_5_M43_Medium_Rucksack_Olive_M43A";

        ALiVE_orbatCreator_loadout[] = {{"CTGCY_MA5C_FL_CTGCY","","","OPTRE_MA5_BUIS",{"CTGCY_32Rnd_762x51_Mag",32},{},""},{"CTGCY_M41_CTGCY","","","",{"CTGCY_M19_2Rnd_HEAT",2},{},""},{"TCP_hgun_Pistol_M6G2","","","",{"TCP_8Rnd_127x30_52_Mag",8},{},"TCP_bipod_handGuard_M6G2"},{"TCP_U_B_CBUU_FieldTop_Full_Gloves_Kneepads_Woodland",{{"ACE_EarPlugs",1},{"ACE_fieldDressing",1},{"ACE_packingBandage",1},{"ACE_morphine",1},{"ACE_tourniquet",1},{"TCP_8Rnd_127x30_52_Mag",3,8}}},{"TCP_V_M43A_GungnirS_3_Olive",{{"ACE_fieldDressing",4},{"ACE_CableTie",2},{"ACE_Canteen",1},{"ACE_EarPlugs",1},{"ACE_MRE_BeefStew",1},{"ACE_tourniquet",1},{"TCP_M9R_Frag",1,1},{"TCP_M21_Smoke",1,1},{"Chemlight_green",1,1},{"CTGCY_32Rnd_762x51_Mag",8,32},{"Chemlight_red",1,1}}},{"TCP_B_Rifleman_5_M43_Medium_Rucksack_Olive_M43A",{{"CTGCY_M19_2Rnd_HEAT",3,2}}},"TCP_H_Helmet_CH43A_Olive","TCP_G_TacticalGlasses_Black_DP",{},{"ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch",""}};


        class EventHandlers {
	class CBA_Extended_EventHandlers {};

	class ALiVE_orbatCreator {
		init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0; sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout; reload _this}; [_this] call ATLAS_fnc_randomizeMarineUniform; [_this] call ATLAS_fnc_randomizeKit;}; _this spawn _onSpawn; (_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
	};
};

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_UNSCMC_Repair_Specialist : TCP_B_UNSC_MC_Soldier_Repair {
        author = "Atlas";
        scope = 2;
        scopeCurator = 2;
        displayName = "Repair Specialist";
        side = 1;
        faction = "B_ATLAS_UNSCMC";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_UNSC_Default_Gray"};

        uniformClass = "TCP_U_B_CBUU_FieldTop_Full_Gloves_Kneepads_Woodland";

        linkedItems[] = {"V_Safety_yellow_F","H_Construction_headset_yellow_F","ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch"};
        respawnlinkedItems[] = {"V_Safety_yellow_F","H_Construction_headset_yellow_F","ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch"};

        weapons[] = {"CTGCY_M6J_BLANK"};
        respawnWeapons[] = {"CTGCY_M6J_BLANK"};

        magazines[] = {"CTGCY_8Rnd_127x40_Mag","CTGCY_8Rnd_127x40_Mag"};
        respawnMagazines[] = {"CTGCY_8Rnd_127x40_Mag","CTGCY_8Rnd_127x40_Mag"};

        backpack = "TCP_B_M43_Medium_Rucksack_Field_Olive";

        ALiVE_orbatCreator_loadout[] = {{"CTGCY_M6J_BLANK","","","CTGCY_VNSLS_Sight",{"CTGCY_8Rnd_127x40_Mag",8},{},""},{},{},{"TCP_U_B_CBUU_FieldTop_Full_Gloves_Kneepads_Woodland",{{"ACE_EarPlugs",1},{"ACE_fieldDressing",1},{"ACE_packingBandage",1},{"ACE_morphine",1},{"ACE_tourniquet",1},{"CTGCY_12Rnd_127x40_Mag",4,12}}},{"V_Safety_yellow_F",{}},{"TCP_B_M43_Medium_Rucksack_Field_Olive",{{"ToolKit",2},{"ACE_tourniquet",1},{"ACE_fieldDressing",4}}},"H_Construction_headset_yellow_F","TCP_G_TacticalGlasses_Black_DP",{},{"ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch",""}};


        class EventHandlers {
	class CBA_Extended_EventHandlers {};

	class ALiVE_orbatCreator {
		init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0; sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout; reload _this}; [_this] call ATLAS_fnc_randomizeMarineUniform; [_this] call ATLAS_fnc_randomizeKit;}; _this spawn _onSpawn; (_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
	};
};

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_UNSCMC_Rifleman_AT : TCP_B_UNSC_MC_Soldier_LAT {
        author = "Atlas";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (AT)";
        side = 1;
        faction = "B_ATLAS_UNSCMC";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_UNSC_Default_Gray"};

        uniformClass = "TCP_U_B_CBUU_FieldTop_Full_Gloves_Kneepads_Woodland";

        linkedItems[] = {"TCP_V_M43A_GungnirS_3_Olive","TCP_H_Helmet_CH43A_Olive","ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch"};
        respawnlinkedItems[] = {"TCP_V_M43A_GungnirS_3_Olive","TCP_H_Helmet_CH43A_Olive","ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch"};

        weapons[] = {"CTGCY_MA5C_FL_CTGCY","OPTRE_M44_Lykoi_Semi_Disposable_AT","TCP_hgun_Pistol_M6G2"};
        respawnWeapons[] = {"CTGCY_MA5C_FL_CTGCY","OPTRE_M44_Lykoi_Semi_Disposable_AT","TCP_hgun_Pistol_M6G2"};

        magazines[] = {"CTGCY_32Rnd_762x51_Mag","OPTRE_M44_Lykoi_HEAT_mag","TCP_8Rnd_127x30_52_Mag","CTGCY_32Rnd_762x51_Mag","TCP_8Rnd_127x30_52_Mag"};
        respawnMagazines[] = {"CTGCY_32Rnd_762x51_Mag","OPTRE_M44_Lykoi_HEAT_mag","TCP_8Rnd_127x30_52_Mag","CTGCY_32Rnd_762x51_Mag","TCP_8Rnd_127x30_52_Mag"};

        backpack = "TCP_B_Rifleman_5_M43_Medium_Rucksack_Olive_M43A";

        ALiVE_orbatCreator_loadout[] = {{"CTGCY_MA5C_FL_CTGCY","","","OPTRE_MA5_BUIS",{"CTGCY_32Rnd_762x51_Mag",32},{},""},{"OPTRE_M44_Lykoi_Semi_Disposable_AT","","","",{"OPTRE_M44_Lykoi_HEAT_mag",1},{},""},{"TCP_hgun_Pistol_M6G2","","","",{"TCP_8Rnd_127x30_52_Mag",8},{},"TCP_bipod_handGuard_M6G2"},{"TCP_U_B_CBUU_FieldTop_Full_Gloves_Kneepads_Woodland",{{"ACE_EarPlugs",1},{"ACE_fieldDressing",1},{"ACE_packingBandage",1},{"ACE_morphine",1},{"ACE_tourniquet",1},{"TCP_8Rnd_127x30_52_Mag",3,8}}},{"TCP_V_M43A_GungnirS_3_Olive",{{"ACE_fieldDressing",4},{"ACE_CableTie",2},{"ACE_Canteen",1},{"ACE_EarPlugs",1},{"ACE_MRE_BeefStew",1},{"ACE_tourniquet",1},{"TCP_M9R_Frag",1,1},{"TCP_M21_Smoke",1,1},{"Chemlight_green",1,1},{"CTGCY_32Rnd_762x51_Mag",8,32},{"Chemlight_red",1,1}}},{"TCP_B_Rifleman_5_M43_Medium_Rucksack_Olive_M43A",{{"OPTRE_M44_Lykoi_HEAT_mag",1,1}}},"TCP_H_Helmet_CH43A_Olive","TCP_G_TacticalGlasses_Black_DP",{},{"ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch",""}};


        class EventHandlers {
	class CBA_Extended_EventHandlers {};

	class ALiVE_orbatCreator {
		init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0; sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout; reload _this}; [_this] call ATLAS_fnc_randomizeMarineUniform; [_this] call ATLAS_fnc_randomizeKit;}; _this spawn _onSpawn; (_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
	};
};

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_UNSCMC_Rifleman_Unarmed : TCP_B_UNSC_MC_Soldier_Unarmed {
        author = "Atlas";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Unarmed)";
        side = 1;
        faction = "B_ATLAS_UNSCMC";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_UNSC_Casual_Gray"};

        uniformClass = "TCP_U_B_CBUU_FieldTop_Full_Gloves_Kneepads_Woodland";

        linkedItems[] = {"TCP_V_M43A_GungnirS_3_Olive","TCP_H_Helmet_CH43A_Olive","ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch"};
        respawnlinkedItems[] = {"TCP_V_M43A_GungnirS_3_Olive","TCP_H_Helmet_CH43A_Olive","ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch"};

        weapons[] = {};
        respawnWeapons[] = {};

        magazines[] = {};
        respawnMagazines[] = {};

        ALiVE_orbatCreator_loadout[] = {{"TCP_U_B_CBUU_FieldTop_Full_Gloves_Kneepads_Woodland",{{"ACE_EarPlugs",1},{"ACE_fieldDressing",1},{"ACE_packingBandage",1},{"ACE_morphine",1},{"ACE_tourniquet",1},{"TCP_8Rnd_127x30_52_Mag",3,8}}},{"TCP_V_M43A_GungnirS_3_Olive",{{"ACE_fieldDressing",4},{"ACE_CableTie",2},{"ACE_Canteen",1},{"ACE_EarPlugs",1},{"ACE_MRE_BeefStew",1},{"ACE_tourniquet",1},{"TCP_M9R_Frag",1,1},{"TCP_M21_Smoke",1,1},{"Chemlight_green",1,1},{"CTGCY_32Rnd_762x51_Mag",8,32},{"Chemlight_red",1,1}}},{},"TCP_H_Helmet_CH43A_Olive","TCP_G_TacticalGlasses_Black_DP",{},{"ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch",""}};


       class EventHandlers {
	class CBA_Extended_EventHandlers {};

	class ALiVE_orbatCreator {
		init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0; sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout; reload _this}; [_this] call ATLAS_fnc_randomizeMarineUniform; [_this] call ATLAS_fnc_randomizeKit;}; _this spawn _onSpawn; (_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
	};
};

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_UNSCMC_Rifleman_Light : TCP_B_UNSC_MC_Soldier_Lite {
        author = "Atlas";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (Light)";
        side = 1;
        faction = "B_ATLAS_UNSCMC";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_UNSC_Casual_Gray"};

        uniformClass = "TCP_U_B_CBUU_FieldTop_Full_Gloves_Kneepads_Woodland";

        linkedItems[] = {"TCP_V_M43A_Light_Olive","TCP_H_UtilityCover_Olive","ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch"};
        respawnlinkedItems[] = {"TCP_V_M43A_Light_Olive","TCP_H_UtilityCover_Olive","ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch"};

        weapons[] = {"CTGCY_MA5C_FL_CTGCY"};
        respawnWeapons[] = {"CTGCY_MA5C_FL_CTGCY"};

        magazines[] = {"CTGCY_32Rnd_762x51_Mag","CTGCY_32Rnd_762x51_Mag"};
        respawnMagazines[] = {"CTGCY_32Rnd_762x51_Mag","CTGCY_32Rnd_762x51_Mag"};

        ALiVE_orbatCreator_loadout[] = {{"CTGCY_MA5C_FL_CTGCY","","","OPTRE_MA5_BUIS",{"CTGCY_32Rnd_762x51_Mag",32},{},""},{},{},{"TCP_U_B_CBUU_FieldTop_Full_Gloves_Kneepads_Woodland",{{"ACE_EarPlugs",1},{"ACE_fieldDressing",1},{"ACE_packingBandage",1},{"ACE_morphine",1},{"ACE_tourniquet",1}}},{"TCP_V_M43A_Light_Olive",{{"ACE_fieldDressing",4},{"ACE_CableTie",2},{"ACE_Canteen",1},{"ACE_EarPlugs",1},{"ACE_MRE_BeefStew",1},{"ACE_tourniquet",1},{"TCP_M9R_Frag",1,1},{"TCP_M21_Smoke",1,1},{"Chemlight_green",1,1},{"CTGCY_32Rnd_762x51_Mag",8,32},{"Chemlight_red",1,1}}},{},"TCP_H_UtilityCover_Olive","TCP_G_TacticalGlasses_Black_DP",{},{"ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch",""}};


        class EventHandlers {
	class CBA_Extended_EventHandlers {};

	class ALiVE_orbatCreator {
		init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0; sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout; reload _this}; [_this] call ATLAS_fnc_randomizeMarineUniform; [_this] call ATLAS_fnc_randomizeKit;}; _this spawn _onSpawn; (_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
	};
};

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "TCP_UNSC_Shield";

    };

    class B_UNSCMC_UAV_Operator_OQ_38_Wren : TCP_B_UNSC_MC_Soldier_UAV {
        author = "Atlas";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator (OQ-38 Wren)";
        side = 1;
        faction = "B_ATLAS_UNSCMC";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_UNSC_Default_Gray"};

        uniformClass = "TCP_U_B_CBUU_FieldTop_Full_Gloves_Kneepads_Woodland";

        linkedItems[] = {"TCP_V_M43A_GungnirS_3_Olive","TCP_H_Helmet_CH43A_Olive","ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch"};
        respawnlinkedItems[] = {"TCP_V_M43A_GungnirS_3_Olive","TCP_H_Helmet_CH43A_Olive","ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch"};

        weapons[] = {"CTGCY_MA5C_FL_CTGCY","TCP_hgun_Pistol_M6G2"};
        respawnWeapons[] = {"CTGCY_MA5C_FL_CTGCY","TCP_hgun_Pistol_M6G2"};

        magazines[] = {"CTGCY_32Rnd_762x51_Mag","TCP_8Rnd_127x30_52_Mag","CTGCY_32Rnd_762x51_Mag","TCP_8Rnd_127x30_52_Mag"};
        respawnMagazines[] = {"CTGCY_32Rnd_762x51_Mag","TCP_8Rnd_127x30_52_Mag","CTGCY_32Rnd_762x51_Mag","TCP_8Rnd_127x30_52_Mag"};

        backpack = "OPTRE_OQ38_Wren_Backpack_UNSC";

        ALiVE_orbatCreator_loadout[] = {{"CTGCY_MA5C_FL_CTGCY","","","OPTRE_MA5_BUIS",{"CTGCY_32Rnd_762x51_Mag",32},{},""},{},{"TCP_hgun_Pistol_M6G2","","","",{"TCP_8Rnd_127x30_52_Mag",8},{},"TCP_bipod_handGuard_M6G2"},{"TCP_U_B_CBUU_FieldTop_Full_Gloves_Kneepads_Woodland",{{"ACE_EarPlugs",1},{"ACE_fieldDressing",1},{"ACE_packingBandage",1},{"ACE_morphine",1},{"ACE_tourniquet",1},{"TCP_8Rnd_127x30_52_Mag",3,8}}},{"TCP_V_M43A_GungnirS_3_Olive",{{"ACE_fieldDressing",4},{"ACE_CableTie",2},{"ACE_Canteen",1},{"ACE_EarPlugs",1},{"ACE_MRE_BeefStew",1},{"ACE_tourniquet",1},{"ACE_UAVBattery",1},{"TCP_M9R_Frag",1,1},{"TCP_M21_Smoke",1,1},{"Chemlight_green",1,1},{"CTGCY_32Rnd_762x51_Mag",7,32},{"Chemlight_red",1,1}}},{"OPTRE_OQ38_Wren_Backpack_UNSC",{}},"TCP_H_Helmet_CH43A_Olive","TCP_G_TacticalGlasses_Black_DP",{},{"ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch",""}};


        class EventHandlers {
	class CBA_Extended_EventHandlers {};

	class ALiVE_orbatCreator {
		init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0; sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout; reload _this}; [_this] call ATLAS_fnc_randomizeMarineUniform; [_this] call ATLAS_fnc_randomizeKit;}; _this spawn _onSpawn; (_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
	};
};

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_UNSCMC_UAV_Operator_OQ_40_Minibee : TCP_B_UNSC_MC_Soldier_UAV {
        author = "Atlas";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAV Operator (OQ-40 Minibee)";
        side = 1;
        faction = "B_ATLAS_UNSCMC";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_UNSC_Default_Gray"};

        uniformClass = "TCP_U_B_CBUU_FieldTop_Full_Gloves_Kneepads_Woodland";

        linkedItems[] = {"TCP_V_M43A_GungnirS_3_Olive","TCP_H_Helmet_CH43A_Olive","ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch"};
        respawnlinkedItems[] = {"TCP_V_M43A_GungnirS_3_Olive","TCP_H_Helmet_CH43A_Olive","ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch"};

        weapons[] = {"CTGCY_MA5C_FL_CTGCY","TCP_hgun_Pistol_M6G2"};
        respawnWeapons[] = {"CTGCY_MA5C_FL_CTGCY","TCP_hgun_Pistol_M6G2"};

        magazines[] = {"CTGCY_32Rnd_762x51_Mag","TCP_8Rnd_127x30_52_Mag","CTGCY_32Rnd_762x51_Mag","TCP_8Rnd_127x30_52_Mag"};
        respawnMagazines[] = {"CTGCY_32Rnd_762x51_Mag","TCP_8Rnd_127x30_52_Mag","CTGCY_32Rnd_762x51_Mag","TCP_8Rnd_127x30_52_Mag"};

        backpack = "OPTRE_OQ40_Minibee_Backpack_UNSC";

        ALiVE_orbatCreator_loadout[] = {{"CTGCY_MA5C_FL_CTGCY","","","OPTRE_MA5_BUIS",{"CTGCY_32Rnd_762x51_Mag",32},{},""},{},{"TCP_hgun_Pistol_M6G2","","","",{"TCP_8Rnd_127x30_52_Mag",8},{},"TCP_bipod_handGuard_M6G2"},{"TCP_U_B_CBUU_FieldTop_Full_Gloves_Kneepads_Woodland",{{"ACE_EarPlugs",1},{"ACE_fieldDressing",1},{"ACE_packingBandage",1},{"ACE_morphine",1},{"ACE_tourniquet",1},{"TCP_8Rnd_127x30_52_Mag",3,8}}},{"TCP_V_M43A_GungnirS_3_Olive",{{"ACE_fieldDressing",4},{"ACE_CableTie",2},{"ACE_Canteen",1},{"ACE_EarPlugs",1},{"ACE_MRE_BeefStew",1},{"ACE_tourniquet",1},{"ACE_UAVBattery",1},{"TCP_M9R_Frag",1,1},{"TCP_M21_Smoke",1,1},{"Chemlight_green",1,1},{"CTGCY_32Rnd_762x51_Mag",7,32},{"Chemlight_red",1,1}}},{"OPTRE_OQ40_Minibee_Backpack_UNSC",{}},"TCP_H_Helmet_CH43A_Olive","TCP_G_TacticalGlasses_Black_DP",{},{"ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch",""}};


        class EventHandlers {
	class CBA_Extended_EventHandlers {};

	class ALiVE_orbatCreator {
		init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0; sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout; reload _this}; [_this] call ATLAS_fnc_randomizeMarineUniform; [_this] call ATLAS_fnc_randomizeKit;}; _this spawn _onSpawn; (_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
	};
};

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_UNSCMC_Sniper : TCP_B_UNSC_MC_Soldier_Sniper {
        author = "Atlas";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sniper";
        side = 1;
        faction = "B_ATLAS_UNSCMC";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_UNSC_Casual_Gray"};

        uniformClass = "TCP_U_B_CBUU_TShirt_Tucked_Gloves_Woodland";

        linkedItems[] = {"TCP_V_M43A_Light_1_Olive","TCP_H_boonieHat_Woodland","ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch"};
        respawnlinkedItems[] = {"TCP_V_M43A_Light_1_Olive","TCP_H_boonieHat_Woodland","ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch"};

        weapons[] = {"TCP_srifle_SRS99","TCP_hgun_Pistol_M6G2","TCP_binoculars_M98"};
        respawnWeapons[] = {"TCP_srifle_SRS99","TCP_hgun_Pistol_M6G2","TCP_binoculars_M98"};

        magazines[] = {"TCP_4Rnd_127x99_Mag","TCP_8Rnd_127x30_52_Mag","TCP_4Rnd_127x99_Mag","TCP_8Rnd_127x30_52_Mag"};
        respawnMagazines[] = {"TCP_4Rnd_127x99_Mag","TCP_8Rnd_127x30_52_Mag","TCP_4Rnd_127x99_Mag","TCP_8Rnd_127x30_52_Mag"};

        ALiVE_orbatCreator_loadout[] = {{"TCP_srifle_SRS99","TCP_muzzle_brake_127_01","","TCP_optic_Oracle_N",{"TCP_4Rnd_127x99_Mag",4},{},""},{},{"TCP_hgun_Pistol_M6G2","","","",{"TCP_8Rnd_127x30_52_Mag",8},{},"TCP_bipod_handGuard_M6G2"},{"TCP_U_B_CBUU_TShirt_Tucked_Gloves_Woodland",{{"ACE_EarPlugs",1},{"ACE_fieldDressing",1},{"ACE_packingBandage",1},{"ACE_morphine",1},{"ACE_tourniquet",1},{"TCP_4Rnd_127x99_Mag",2,4},{"Chemlight_green",1,1}}},{"TCP_V_M43A_Light_1_Olive",{{"ACE_fieldDressing",4},{"ACE_tourniquet",1},{"TCP_4Rnd_127x99_Mag",7,4},{"TCP_8Rnd_127x30_52_Mag",2,8},{"TCP_M9R_Frag",1,1}}},{},"TCP_H_boonieHat_Woodland","TCP_G_TacticalGlasses_Black_DP",{"TCP_binoculars_M98","","","",{},{},""},{"ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch",""}};


        class EventHandlers {
	class CBA_Extended_EventHandlers {};

	class ALiVE_orbatCreator {
		init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0; sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout; reload _this}; [_this] call ATLAS_fnc_randomizeMarineUniform; [_this] call ATLAS_fnc_randomizeKit;}; _this spawn _onSpawn; (_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
	};
};

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_UNSCMC_Forward_Observer : TCP_B_UNSC_MC_Soldier_Spotter {
        author = "Atlas";
        scope = 2;
        scopeCurator = 2;
        displayName = "Forward Observer";
        side = 1;
        faction = "B_ATLAS_UNSCMC";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_UNSC_Casual_Gray"};

        uniformClass = "TCP_U_B_CBUU_FieldTop_Full_Gloves_Kneepads_Woodland";

        linkedItems[] = {"TCP_V_M43A_Light_3_Olive","TCP_H_PatrolCap_Olive","ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch"};
        respawnlinkedItems[] = {"TCP_V_M43A_Light_3_Olive","TCP_H_PatrolCap_Olive","ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch"};

        weapons[] = {"CTGCY_VK78_CTGCY","TCP_hgun_Pistol_M6G2","CTGCY_H155_LD"};
        respawnWeapons[] = {"CTGCY_VK78_CTGCY","TCP_hgun_Pistol_M6G2","CTGCY_H155_LD"};

        magazines[] = {"CTGCY_20Rnd_65x48_Mag","TCP_8Rnd_127x30_52_Mag","Laserbatteries","CTGCY_20Rnd_65x48_Mag","TCP_8Rnd_127x30_52_Mag","Laserbatteries"};
        respawnMagazines[] = {"CTGCY_20Rnd_65x48_Mag","TCP_8Rnd_127x30_52_Mag","Laserbatteries","CTGCY_20Rnd_65x48_Mag","TCP_8Rnd_127x30_52_Mag","Laserbatteries"};

        backpack = "TCP_B_M2_Buttpack_Olive";

        ALiVE_orbatCreator_loadout[] = {{"CTGCY_VK78_CTGCY","","","CTGCY_VK78_Sight",{"CTGCY_20Rnd_65x48_Mag",20},{},""},{},{"TCP_hgun_Pistol_M6G2","","","",{"TCP_8Rnd_127x30_52_Mag",8},{},"TCP_bipod_handGuard_M6G2"},{"TCP_U_B_CBUU_FieldTop_Full_Gloves_Kneepads_Woodland",{{"ACE_EarPlugs",1},{"ACE_fieldDressing",1},{"ACE_packingBandage",1},{"ACE_morphine",1},{"ACE_tourniquet",1},{"TCP_8Rnd_127x30_52_Mag",3,8},{"CTGCY_20Rnd_65x48_Mag",1,20}}},{"TCP_V_M43A_Light_3_Olive",{{"ACE_fieldDressing",4},{"ACE_CableTie",2},{"ACE_Canteen",1},{"ACE_EarPlugs",1},{"ACE_MRE_BeefStew",1},{"ACE_tourniquet",1},{"TCP_M9R_Frag",1,1},{"TCP_M21_Smoke",1,1},{"Chemlight_green",1,1},{"Chemlight_red",1,1},{"CTGCY_20Rnd_65x48_Mag",2,20}}},{"TCP_B_M2_Buttpack_Olive",{{"ACE_SpottingScope",1},{"ACE_RangeCard",1}}},"TCP_H_PatrolCap_Olive","TCP_G_TacticalGlasses_Black_DP",{"CTGCY_H155_LD","","","",{"Laserbatteries",1},{},""},{"ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch",""}};


       class EventHandlers {
	class CBA_Extended_EventHandlers {};

	class ALiVE_orbatCreator {
		init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0; sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout; reload _this}; [_this] call ATLAS_fnc_randomizeMarineUniform; [_this] call ATLAS_fnc_randomizeKit;}; _this spawn _onSpawn; (_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
	};
};

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_UNSCMC_Marine_Pilot : TCP_B_UNSC_MC_Pilot {
        author = "Atlas";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marine Pilot";
        side = 1;
        faction = "B_ATLAS_UNSCMC";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_UNSC_Default_Gray"};

        uniformClass = "TCP_U_B_CBUU_FieldTop_Full_Gloves_Kneepads_Olive";

        linkedItems[] = {"TCP_V_M43A_Light_Olive","OPTRE_FC_VX19_Helmet","ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch"};
        respawnlinkedItems[] = {"TCP_V_M43A_Light_Olive","OPTRE_FC_VX19_Helmet","ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch"};

        weapons[] = {"CTGCY_M6J_CTGCY","TCP_hgun_Pistol_M6G2"};
        respawnWeapons[] = {"CTGCY_M6J_CTGCY","TCP_hgun_Pistol_M6G2"};

        magazines[] = {"CTGCY_8Rnd_127x40_Mag","TCP_8Rnd_127x30_52_Mag","CTGCY_8Rnd_127x40_Mag","TCP_8Rnd_127x30_52_Mag"};
        respawnMagazines[] = {"CTGCY_8Rnd_127x40_Mag","TCP_8Rnd_127x30_52_Mag","CTGCY_8Rnd_127x40_Mag","TCP_8Rnd_127x30_52_Mag"};

        backpack = "B_Parachute";

        ALiVE_orbatCreator_loadout[] = {{"CTGCY_M6J_CTGCY","","","CTGCY_VNSLS_Sight",{"CTGCY_8Rnd_127x40_Mag",8},{},""},{},{"TCP_hgun_Pistol_M6G2","","","",{"TCP_8Rnd_127x30_52_Mag",8},{},"TCP_bipod_handGuard_M6G2"},{"TCP_U_B_CBUU_FieldTop_Full_Gloves_Kneepads_Olive",{{"ACE_EarPlugs",1},{"ACE_fieldDressing",1},{"ACE_packingBandage",1},{"ACE_morphine",1},{"ACE_tourniquet",1},{"CTGCY_8Rnd_127x40_Mag",3,8}}},{"TCP_V_M43A_Light_Olive",{{"ACE_fieldDressing",4},{"ACE_tourniquet",1},{"TCP_8Rnd_127x30_52_Mag",7,8},{"TCP_M9R_Frag",1,1},{"TCP_M21_Smoke",1,1},{"Chemlight_green",1,1}}},{"B_Parachute",{}},"OPTRE_FC_VX19_Helmet","TCP_G_BalaclavaTacticalGlasses_Gray_Black",{},{"ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch",""}};


        class EventHandlers {
	class CBA_Extended_EventHandlers {};

	class ALiVE_orbatCreator {
		init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this}; [_this] call ATLAS_fnc_randomizeMarineUniform; [_this] call ATLAS_fnc_randomizeKit;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
	};
};

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "TCP_UNSC_Shield";

    };

    class B_UNSCMC_Marine_Aircrewman : TCP_B_UNSC_MC_Helicrew {
        author = "Atlas";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marine Aircrewman";
        side = 1;
        faction = "B_ATLAS_UNSCMC";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_UNSC_Default_Gray"};

        uniformClass = "TCP_U_B_CBUU_FieldTop_Full_Gloves_Kneepads_Olive";

        linkedItems[] = {"TCP_V_M43A_Light_1_Olive","TCP_H_Helmet_ECH43A_Olive_Silver","ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch"};
        respawnlinkedItems[] = {"TCP_V_M43A_Light_1_Olive","TCP_H_Helmet_ECH43A_Olive_Silver","ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch"};

        weapons[] = {"CTGCY_MA5K_CTGCY","TCP_hgun_Pistol_M6G2"};
        respawnWeapons[] = {"CTGCY_MA5K_CTGCY","TCP_hgun_Pistol_M6G2"};

        magazines[] = {"CTGCY_30Rnd_M762x51_Mag","TCP_8Rnd_127x30_52_Mag","CTGCY_30Rnd_M762x51_Mag","TCP_8Rnd_127x30_52_Mag"};
        respawnMagazines[] = {"CTGCY_30Rnd_M762x51_Mag","TCP_8Rnd_127x30_52_Mag","CTGCY_30Rnd_M762x51_Mag","TCP_8Rnd_127x30_52_Mag"};

        backpack = "B_Parachute";

        ALiVE_orbatCreator_loadout[] = {{"CTGCY_MA5K_CTGCY","","","OPTRE_MA5_BUIS",{"CTGCY_30Rnd_M762x51_Mag",30},{},""},{},{"TCP_hgun_Pistol_M6G2","","","",{"TCP_8Rnd_127x30_52_Mag",8},{},"TCP_bipod_handGuard_M6G2"},{"TCP_U_B_CBUU_FieldTop_Full_Gloves_Kneepads_Olive",{{"ACE_EarPlugs",1},{"ACE_fieldDressing",1},{"ACE_packingBandage",1},{"ACE_morphine",1},{"ACE_tourniquet",1},{"CTGCY_30Rnd_M762x51_Mag",2,30}}},{"TCP_V_M43A_Light_1_Olive",{{"ACE_fieldDressing",4},{"ACE_tourniquet",1},{"TCP_M9R_Frag",1,1},{"TCP_M21_Smoke",1,1},{"Chemlight_green",1,1},{"CTGCY_30Rnd_M762x51_Mag",7,30},{"TCP_8Rnd_127x30_52_Mag",3,8}}},{"B_Parachute",{}},"TCP_H_Helmet_ECH43A_Olive_Silver","TCP_G_BalaclavaTacticalGlasses_Gray_Black",{},{"ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch",""}};


        class EventHandlers {
	class CBA_Extended_EventHandlers {};

	class ALiVE_orbatCreator {
		init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this}; [_this] call ATLAS_fnc_randomizeMarineUniform; [_this] call ATLAS_fnc_randomizeKit;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
	};
};

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "TCP_UNSC_Shield";

    };

    class B_UNSCMC_Heavy_Gunner : TCP_B_UNSC_MC_Soldier_MG {
        author = "Atlas";
        scope = 2;
        scopeCurator = 2;
        displayName = "Heavy Gunner";
        side = 1;
        faction = "B_ATLAS_UNSCMC";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_UNSC_Default_Gray"};

        uniformClass = "TCP_U_B_CBUU_TacShirt_HalfRoll_Unzipped_Woodland";

        linkedItems[] = {"TCP_V_M43A_Light_Olive","TCP_H_Helmet_CH43A_Olive","ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch"};
        respawnlinkedItems[] = {"TCP_V_M43A_Light_Olive","TCP_H_Helmet_CH43A_Olive","ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch"};

        weapons[] = {"CTGCY_MA5C_FL_CTGCY","TCP_hgun_Pistol_M6G2"};
        respawnWeapons[] = {"CTGCY_MA5C_FL_CTGCY","TCP_hgun_Pistol_M6G2"};

        magazines[] = {"CTGCY_32Rnd_762x51_Mag","TCP_8Rnd_127x30_52_Mag","CTGCY_32Rnd_762x51_Mag","TCP_8Rnd_127x30_52_Mag"};
        respawnMagazines[] = {"CTGCY_32Rnd_762x51_Mag","TCP_8Rnd_127x30_52_Mag","CTGCY_32Rnd_762x51_Mag","TCP_8Rnd_127x30_52_Mag"};

        backpack = "OPTRE_M247T_Weapon_bag";

        ALiVE_orbatCreator_loadout[] = {{"CTGCY_MA5C_FL_CTGCY","","","OPTRE_MA5_BUIS",{"CTGCY_32Rnd_762x51_Mag",32},{},""},{},{"TCP_hgun_Pistol_M6G2","","","",{"TCP_8Rnd_127x30_52_Mag",8},{},"TCP_bipod_handGuard_M6G2"},{"TCP_U_B_CBUU_TacShirt_HalfRoll_Unzipped_Woodland",{{"ACE_EarPlugs",1},{"ACE_fieldDressing",1},{"ACE_packingBandage",1},{"ACE_morphine",1},{"ACE_tourniquet",1},{"CTGCY_32Rnd_762x51_Mag",3,32}}},{"TCP_V_M43A_Light_Olive",{{"TCP_8Rnd_127x30_52_Mag",1,8},{"TCP_M9R_Frag",1,1},{"TCP_M21_Smoke",1,1},{"Chemlight_green",2,1}}},{"OPTRE_M247T_Weapon_bag",{}},"TCP_H_Helmet_CH43A_Olive","TCP_G_TacticalGlasses_Gold",{},{"ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch",""}};


        class EventHandlers {
	class CBA_Extended_EventHandlers {};

	class ALiVE_orbatCreator {
		init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0; sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout; reload _this}; [_this] call ATLAS_fnc_randomizeMarineUniform; [_this] call ATLAS_fnc_randomizeKit;}; _this spawn _onSpawn; (_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
	};
};

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class B_UNSCMC_Asst_Heavy_Gunner : TCP_B_UNSC_MC_Soldier_AMort {
        author = "Atlas";
        scope = 2;
        scopeCurator = 2;
        displayName = "Asst. Heavy Gunner";
        side = 1;
        faction = "B_ATLAS_UNSCMC";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_UNSC_Default_Gray"};

        uniformClass = "TCP_U_B_CBUU_TacShirt_HalfRoll_Unzipped_Woodland";

        linkedItems[] = {"TCP_V_M43A_Light_Olive","TCP_H_Helmet_CH43A_Olive","ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch"};
        respawnlinkedItems[] = {"TCP_V_M43A_Light_Olive","TCP_H_Helmet_CH43A_Olive","ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch"};

        weapons[] = {"CTGCY_MA5C_FL_CTGCY","TCP_hgun_Pistol_M6G2"};
        respawnWeapons[] = {"CTGCY_MA5C_FL_CTGCY","TCP_hgun_Pistol_M6G2"};

        magazines[] = {"CTGCY_32Rnd_762x51_Mag","TCP_8Rnd_127x30_52_Mag","CTGCY_32Rnd_762x51_Mag","TCP_8Rnd_127x30_52_Mag"};
        respawnMagazines[] = {"CTGCY_32Rnd_762x51_Mag","TCP_8Rnd_127x30_52_Mag","CTGCY_32Rnd_762x51_Mag","TCP_8Rnd_127x30_52_Mag"};

        backpack = "OPTRE_M247T_Tripod_bag";

        ALiVE_orbatCreator_loadout[] = {{"CTGCY_MA5C_FL_CTGCY","","","OPTRE_MA5_BUIS",{"CTGCY_32Rnd_762x51_Mag",32},{},""},{},{"TCP_hgun_Pistol_M6G2","","","",{"TCP_8Rnd_127x30_52_Mag",8},{},"TCP_bipod_handGuard_M6G2"},{"TCP_U_B_CBUU_TacShirt_HalfRoll_Unzipped_Woodland",{{"ACE_EarPlugs",1},{"ACE_fieldDressing",1},{"ACE_packingBandage",1},{"ACE_morphine",1},{"ACE_tourniquet",1},{"CTGCY_32Rnd_762x51_Mag",3,32}}},{"TCP_V_M43A_Light_Olive",{{"TCP_8Rnd_127x30_52_Mag",1,8},{"TCP_M9R_Frag",1,1},{"TCP_M21_Smoke",1,1},{"Chemlight_green",2,1}}},{"OPTRE_M247T_Tripod_bag",{}},"TCP_H_Helmet_CH43A_Olive","TCP_G_TacticalGlasses_Gold",{},{"ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch",""}};


        class EventHandlers {
	class CBA_Extended_EventHandlers {};

	class ALiVE_orbatCreator {
		init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0; sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout; reload _this}; [_this] call ATLAS_fnc_randomizeMarineUniform; [_this] call ATLAS_fnc_randomizeKit;}; _this spawn _onSpawn; (_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
	};
};

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    // ODST LIST

class B_UNSCMC_ODST_Rifleman : TCP_B_UNSC_MC_ODST_Soldier {
	author = "Atlas";
	scope = 2;
	scopeCurator = 2;
	displayName = "ODST Rifleman";
	side = 1;
	faction = "B_ATLAS_UNSCMC";

	vehicleClass = "B_ATLAS_UNSCMC_INF_ODST";
	editorSubcategory = "UNSCMC_Infantry_ODST";

	identityTypes[] = {"Head_NATO","LanguageENG_F","G_UNSC_Default_Gray"};

	uniformClass = "TCP_U_B_CBUU_TacShirt_Full_Gloves_Urban";

	linkedItems[] = {"TCP_V_M43D_ODST_3_1_Black","TCP_H_Helmet_ECH55D_Black_Silver","ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch"};
	respawnlinkedItems[] = {"TCP_V_M43D_ODST_3_1_Black","TCP_H_Helmet_ECH55D_Black_Silver","ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch"};

	weapons[] = {"CTGCY_MA5C_FL_CTGCY","CTGCY_M6C_CTGCY"};
	respawnWeapons[] = {"CTGCY_MA5C_FL_CTGCY","CTGCY_M6C_CTGCY"};

	magazines[] = {"CTGCY_32Rnd_762x51_Mag","CTGCY_8Rnd_127x40_Mag","CTGCY_32Rnd_762x51_Mag","CTGCY_8Rnd_127x40_Mag"};
	respawnMagazines[] = {"CTGCY_32Rnd_762x51_Mag","CTGCY_8Rnd_127x40_Mag","CTGCY_32Rnd_762x51_Mag","CTGCY_8Rnd_127x40_Mag"};

	ALiVE_orbatCreator_loadout[] = {
		{"CTGCY_MA5C_FL_CTGCY","OPTRE_BMR_Laser","","CTGCY_MA5_Sight_2",{"CTGCY_32Rnd_762x51_Mag",32},{},""},
		{},
		{"CTGCY_M6C_CTGCY","OPTRE_M6C_compensator","OPTRE_M6C_Laser","CTGCY_VNSLS_Sight",{"CTGCY_8Rnd_127x40_Mag",8},{},""},
		{"TCP_U_B_CBUU_TacShirt_Full_Gloves_Urban",{{"ACE_EarPlugs",1},{"ACE_fieldDressing",1},{"ACE_packingBandage",1},{"ACE_morphine",1},{"ACE_tourniquet",1},{"CTGCY_8Rnd_127x40_Mag",3,8}}},
		{"TCP_V_M43D_ODST_3_1_Black",{{"ACE_fieldDressing",4},{"ACE_CableTie",2},{"ACE_Canteen",1},{"ACE_EarPlugs",1},{"ACE_MRE_BeefStew",1},{"ACE_tourniquet",1},{"TCP_M9R_Frag",1,1},{"TCP_M21_Smoke",1,1},{"Chemlight_green",1,1},{"CTGCY_32Rnd_762x51_Mag",8,32},{"Chemlight_red",1,1}}},
		{},
		"TCP_H_Helmet_ECH55D_Black_Silver",
		"TCP_G_TacticalGlasses_Black_DP",
		{},
		{"ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch",""}
	};

	class EventHandlers {
		class CBA_Extended_EventHandlers {};

		class ALiVE_orbatCreator {
			init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0; sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout; reload _this}; [_this] call ATLAS_fnc_randomizeODSTUniform; [_this] call ATLAS_fnc_randomizeKit;}; _this spawn _onSpawn; (_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
		};
	};

	ALiVE_orbatCreator_owned = 1;
};

class B_UNSCMC_ODST_Team_Leader : TCP_B_UNSC_MC_ODST_Soldier {
	author = "Atlas";
	scope = 2;
	scopeCurator = 2;
	displayName = "ODST Team Leader";
	side = 1;
	faction = "B_ATLAS_UNSCMC";
    icon = "iconManLeader";

	vehicleClass = "B_ATLAS_UNSCMC_INF_ODST";
	editorSubcategory = "UNSCMC_Infantry_ODST";

	identityTypes[] = {"Head_NATO","LanguageENG_F","G_UNSC_Default_Gray"};

	uniformClass = "TCP_U_B_CBUU_TacShirt_Full_Gloves_Urban";

	linkedItems[] = {"TCP_V_M43D_ODST_3_1_Black","TCP_H_Helmet_ECH55D_Black_Silver","ItemMap","TCP_TACPAD","TCP_ANPRC55","ItemCompass","TCP_Watch"};
	respawnlinkedItems[] = {"TCP_V_M43D_ODST_3_1_Black","TCP_H_Helmet_ECH55D_Black_Silver","ItemMap","TCP_TACPAD","TCP_ANPRC55","ItemCompass","TCP_Watch"};

	weapons[] = {"CTGCY_BR55_CTGCY","CTGCY_M6C_CTGCY"};
	respawnWeapons[] = {"CTGCY_BR55_CTGCY","CTGCY_M6C_CTGCY"};

	magazines[] = {"CTGCY_36Rnd_95x40_Mag","CTGCY_8Rnd_127x40_Mag","CTGCY_36Rnd_95x40_Mag","CTGCY_8Rnd_127x40_Mag"};
	respawnMagazines[] = {"CTGCY_36Rnd_95x40_Mag","CTGCY_8Rnd_127x40_Mag","CTGCY_36Rnd_95x40_Mag","CTGCY_8Rnd_127x40_Mag"};

	ALiVE_orbatCreator_loadout[] = {
		{"CTGCY_BR55_CTGCY","OPTRE_BMR_Laser","","CTGCY_BR55_Scope",{"CTGCY_36Rnd_95x40_Mag",36},{},""},
		{},
		{"CTGCY_M6C_CTGCY","OPTRE_M6C_compensator","OPTRE_M6C_Laser","CTGCY_VNSLS_Sight",{"CTGCY_8Rnd_127x40_Mag",8},{},""},
		{"TCP_U_B_CBUU_TacShirt_Full_Gloves_Urban",{{"ACE_EarPlugs",1},{"ACE_fieldDressing",1},{"ACE_packingBandage",1},{"ACE_morphine",1},{"ACE_tourniquet",1},{"CTGCY_8Rnd_127x40_Mag",3,8},{"SmokeShellRed",2,1},{"OPTRE_M2_Smoke",1,1}}},
		{"TCP_V_M43D_ODST_3_1_Black",{{"ACE_fieldDressing",4},{"ACE_CableTie",2},{"ACE_Canteen",1},{"ACE_EarPlugs",1},{"ACE_MRE_BeefStew",1},{"ACE_tourniquet",1},{"TCP_M9R_Frag",1,1},{"TCP_M21_Smoke",1,1},{"Chemlight_green",1,1},{"Chemlight_red",1,1},{"CTGCY_36Rnd_95x40_Mag",7,36}}},
		{},
		"TCP_H_Helmet_ECH55D_Black_Silver",
		"TCP_G_TacticalGlasses_Black_DP",
		{},
		{"ItemMap","TCP_TACPAD","TCP_ANPRC55","ItemCompass","TCP_Watch",""}
	};

	class EventHandlers {
		class CBA_Extended_EventHandlers {};

		class ALiVE_orbatCreator {
			init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0; sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout; reload _this}; [_this] call ATLAS_fnc_randomizeODSTUniform; [_this] call ATLAS_fnc_randomizeKit;}; _this spawn _onSpawn; (_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
		};
	};

	ALiVE_orbatCreator_owned = 1;
};

class B_UNSCMC_ODST_Scout : TCP_B_UNSC_MC_ODST_Soldier {
	author = "Atlas";
	scope = 2;
	scopeCurator = 2;
	displayName = "ODST Scout";
	side = 1;
	faction = "B_ATLAS_UNSCMC";
	icon = "iconManRecon";

	vehicleClass = "B_ATLAS_UNSCMC_INF_ODST";
	editorSubcategory = "UNSCMC_Infantry_ODST";

	identityTypes[] = {"Head_NATO","LanguageENG_F","G_UNSC_Default_Gray"};

	uniformClass = "TCP_U_B_CBUU_TacShirt_Full_Gloves_Urban";

	linkedItems[] = {"TCP_V_M43D_ODST_3_1_Black","TCP_H_Helmet_ECH55D_Black_Silver","ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch"};
	respawnlinkedItems[] = {"TCP_V_M43D_ODST_3_1_Black","TCP_H_Helmet_ECH55D_Black_Silver","ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch"};

	weapons[] = {"CTGCY_M7_CTGCY","CTGCY_M6C_CTGCY"};
	respawnWeapons[] = {"CTGCY_M7_CTGCY","CTGCY_M6C_CTGCY"};

	magazines[] = {"CTGCY_60Rnd_5x23_Mag","CTGCY_8Rnd_127x40_Mag","CTGCY_60Rnd_5x23_Mag","CTGCY_8Rnd_127x40_Mag"};
	respawnMagazines[] = {"CTGCY_60Rnd_5x23_Mag","CTGCY_8Rnd_127x40_Mag","CTGCY_60Rnd_5x23_Mag","CTGCY_8Rnd_127x40_Mag"};

	ALiVE_orbatCreator_loadout[] = {
		{"CTGCY_M7_CTGCY","OPTRE_M7_silencer","OPTRE_M7_Laser","CTGCY_SLSV_Sight_2",{"CTGCY_60Rnd_5x23_Mag",60},{},""},
		{},
		{"CTGCY_M6C_CTGCY","OPTRE_M6C_compensator","OPTRE_M6C_Laser","CTGCY_VNSLS_Sight",{"CTGCY_8Rnd_127x40_Mag",8},{},""},
		{"TCP_U_B_CBUU_TacShirt_Full_Gloves_Urban",{{"ACE_EarPlugs",1},{"ACE_fieldDressing",1},{"ACE_packingBandage",1},{"ACE_morphine",1},{"ACE_tourniquet",1},{"CTGCY_8Rnd_127x40_Mag",3,8},{"CTGCY_60Rnd_5x23_Mag",1,60}}},
		{"TCP_V_M43D_ODST_3_1_Black",{{"ACE_fieldDressing",4},{"ACE_CableTie",2},{"ACE_Canteen",1},{"ACE_EarPlugs",1},{"ACE_MRE_BeefStew",1},{"ACE_tourniquet",1},{"TCP_M9R_Frag",1,1},{"TCP_M21_Smoke",1,1},{"Chemlight_green",1,1},{"Chemlight_red",1,1},{"CTGCY_60Rnd_5x23_Mag",7,60}}},
		{},
		"TCP_H_Helmet_ECH55D_Black_Silver",
		"TCP_G_TacticalGlasses_Black_DP",
		{},
		{"ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch",""}
	};

	class EventHandlers {
		class CBA_Extended_EventHandlers {};

		class ALiVE_orbatCreator {
			init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0; sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout; reload _this}; [_this] call ATLAS_fnc_randomizeODSTUniform; [_this] call ATLAS_fnc_randomizeKit;}; _this spawn _onSpawn; (_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
		};
	};

	ALiVE_orbatCreator_owned = 1;
};

class B_UNSCMC_ODST_Corpsman : TCP_B_UNSC_MC_ODST_Soldier {
	author = "Atlas";
	scope = 2;
	scopeCurator = 2;
	displayName = "ODST Corpsman";
	side = 1;
	faction = "B_ATLAS_UNSCMC";
	icon = "iconManMedic";

	vehicleClass = "B_ATLAS_UNSCMC_INF_ODST";
	editorSubcategory = "UNSCMC_Infantry_ODST";

	attendant = 1;
	backpack = "TCP_B_EM39_MLBE_Hardcase_Black";

	identityTypes[] = {"Head_NATO","LanguageENG_F","G_UNSC_Default_Gray"};

	uniformClass = "TCP_U_B_CBUU_TacShirt_Full_Gloves_Urban";

	linkedItems[] = {"TCP_V_M43D_ODST_3_1_Black","TCP_H_Helmet_ECH55D_Black_Silver","ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch"};
	respawnlinkedItems[] = {"TCP_V_M43D_ODST_3_1_Black","TCP_H_Helmet_ECH55D_Black_Silver","ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch"};

	weapons[] = {"CTGCY_M7_CTGCY","CTGCY_M6C_CTGCY"};
	respawnWeapons[] = {"CTGCY_M7_CTGCY","CTGCY_M6C_CTGCY"};

	magazines[] = {"CTGCY_60Rnd_5x23_Mag","CTGCY_8Rnd_127x40_Mag","CTGCY_60Rnd_5x23_Mag","CTGCY_8Rnd_127x40_Mag"};
	respawnMagazines[] = {"CTGCY_60Rnd_5x23_Mag","CTGCY_8Rnd_127x40_Mag","CTGCY_60Rnd_5x23_Mag","CTGCY_8Rnd_127x40_Mag"};

	ALiVE_orbatCreator_loadout[] = {
		{"CTGCY_M7_CTGCY","OPTRE_M7_silencer","OPTRE_M7_Laser","CTGCY_SLSV_Sight_2",{"CTGCY_60Rnd_5x23_Mag",60},{},""},
		{},
		{"CTGCY_M6C_CTGCY","OPTRE_M6C_compensator","OPTRE_M6C_Laser","CTGCY_VNSLS_Sight",{"CTGCY_8Rnd_127x40_Mag",8},{},""},
		{"TCP_U_B_CBUU_TacShirt_Full_Gloves_Urban",{{"ACE_EarPlugs",1},{"ACE_fieldDressing",1},{"ACE_packingBandage",1},{"ACE_morphine",1},{"ACE_tourniquet",1},{"CTGCY_8Rnd_127x40_Mag",3,8},{"CTGCY_60Rnd_5x23_Mag",1,60}}},
		{"TCP_V_M43D_ODST_3_1_Black",{{"ACE_fieldDressing",4},{"ACE_CableTie",2},{"ACE_Canteen",1},{"ACE_EarPlugs",1},{"ACE_MRE_BeefStew",1},{"ACE_tourniquet",1},{"TCP_M9R_Frag",1,1},{"TCP_M21_Smoke",1,1},{"Chemlight_green",1,1},{"Chemlight_red",1,1},{"CTGCY_60Rnd_5x23_Mag",7,60}}},
		{"TCP_B_EM39_MLBE_Hardcase_Black",{{"ACE_fieldDressing",10},{"ACE_elasticBandage",10},{"ACE_packingBandage",10},{"ACE_adenosine",4},{"ACE_quikclot",10},{"OPTRE_Biofoam",4},{"ACE_bodyBag",2},{"ACE_CableTie",2},{"ACE_epinephrine",4},{"OPTRE_MedKit",1},{"ACE_morphine",4},{"OPTRE_Medigel",2},{"ACE_personalAidKit",1},{"ACE_salineIV_500",2},{"ACE_splint",2},{"ACE_surgicalKit",1},{"ACE_suture",6},{"ACE_tourniquet",4}}},
		"TCP_H_Helmet_ECH55D_Black_Silver",
		"TCP_G_TacticalGlasses_Black_DP",
		{},
		{"ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch",""}
	};

	class EventHandlers {
		class CBA_Extended_EventHandlers {};

		class ALiVE_orbatCreator {
			init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0; sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout; reload _this}; [_this] call ATLAS_fnc_randomizeODSTUniform; [_this] call ATLAS_fnc_randomizeKit;}; _this spawn _onSpawn; (_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
		};
	};

	ALiVE_orbatCreator_owned = 1;
};

class B_UNSCMC_ODST_AT_Specialist : TCP_B_UNSC_MC_ODST_Soldier {
	author = "Atlas";
	scope = 2;
	scopeCurator = 2;
	displayName = "ODST AT Specialist";
	side = 1;
	faction = "B_ATLAS_UNSCMC";
	icon = "iconManAT";

	vehicleClass = "B_ATLAS_UNSCMC_INF_ODST";
	editorSubcategory = "UNSCMC_Infantry_ODST";

	backpack = "TCP_B_EM39_MLBE_Hardcase_Black";

	identityTypes[] = {"Head_NATO","LanguageENG_F","G_UNSC_Default_Gray"};

	uniformClass = "TCP_U_B_CBUU_TacShirt_Full_Gloves_Urban";

	linkedItems[] = {"TCP_V_M43D_ODST_3_1_Black","TCP_H_Helmet_ECH55D_Black_Silver","ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch"};
	respawnlinkedItems[] = {"TCP_V_M43D_ODST_3_1_Black","TCP_H_Helmet_ECH55D_Black_Silver","ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch"};

	weapons[] = {"CTGCY_MA5C_FL_CTGCY","CTGCY_M41_CTGCY","CTGCY_M6C_CTGCY"};
	respawnWeapons[] = {"CTGCY_MA5C_FL_CTGCY","CTGCY_M41_CTGCY","CTGCY_M6C_CTGCY"};

	magazines[] = {"CTGCY_32Rnd_762x51_Mag","CTGCY_M19_2Rnd_HEAT","CTGCY_8Rnd_127x40_Mag","CTGCY_32Rnd_762x51_Mag","CTGCY_8Rnd_127x40_Mag"};
	respawnMagazines[] = {"CTGCY_32Rnd_762x51_Mag","CTGCY_M19_2Rnd_HEAT","CTGCY_8Rnd_127x40_Mag","CTGCY_32Rnd_762x51_Mag","CTGCY_8Rnd_127x40_Mag"};

	ALiVE_orbatCreator_loadout[] = {
		{"CTGCY_MA5C_FL_CTGCY","OPTRE_BMR_Laser","","CTGCY_MA5_Sight_2",{"CTGCY_32Rnd_762x51_Mag",32},{},""},
		{"CTGCY_M41_CTGCY","","","",{"CTGCY_M19_2Rnd_HEAT",2},{},""},
		{"CTGCY_M6C_CTGCY","OPTRE_M6C_compensator","OPTRE_M6C_Laser","CTGCY_VNSLS_Sight",{"CTGCY_8Rnd_127x40_Mag",8},{},""},
		{"TCP_U_B_CBUU_TacShirt_Full_Gloves_Urban",{{"ACE_EarPlugs",1},{"ACE_fieldDressing",1},{"ACE_packingBandage",1},{"ACE_morphine",1},{"ACE_tourniquet",1},{"CTGCY_8Rnd_127x40_Mag",3,8}}},
		{"TCP_V_M43D_ODST_3_1_Black",{{"ACE_fieldDressing",4},{"ACE_CableTie",2},{"ACE_Canteen",1},{"ACE_EarPlugs",1},{"ACE_MRE_BeefStew",1},{"ACE_tourniquet",1},{"TCP_M9R_Frag",1,1},{"TCP_M21_Smoke",1,1},{"Chemlight_green",1,1},{"CTGCY_32Rnd_762x51_Mag",8,32},{"Chemlight_red",1,1}}},
		{"TCP_B_EM39_MLBE_Hardcase_Black",{{"CTGCY_M19_2Rnd_GHEAT",3,2}}},
		"TCP_H_Helmet_ECH55D_Black_Silver",
		"TCP_G_TacticalGlasses_Black_DP",
		{},
		{"ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch",""}
	};

	class EventHandlers {
		class CBA_Extended_EventHandlers {};

		class ALiVE_orbatCreator {
			init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0; sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout; reload _this}; [_this] call ATLAS_fnc_randomizeODSTUniform; [_this] call ATLAS_fnc_randomizeKit;}; _this spawn _onSpawn; (_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
		};
	};

	ALiVE_orbatCreator_owned = 1;
};

class B_UNSCMC_ODST_AA_Specialist : TCP_B_UNSC_MC_ODST_Soldier {
	author = "Atlas";
	scope = 2;
	scopeCurator = 2;
	displayName = "ODST AA Specialist";
	side = 1;
	faction = "B_ATLAS_UNSCMC";
	icon = "iconManAT";

	vehicleClass = "B_ATLAS_UNSCMC_INF_ODST";
	editorSubcategory = "UNSCMC_Infantry_ODST";

	backpack = "TCP_B_EM39_MLBE_Hardcase_Black";

	identityTypes[] = {"Head_NATO","LanguageENG_F","G_UNSC_Default_Gray"};

	uniformClass = "TCP_U_B_CBUU_TacShirt_Full_Gloves_Urban";

	linkedItems[] = {"TCP_V_M43D_ODST_3_1_Black","TCP_H_Helmet_ECH55D_Black_Silver","ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch"};
	respawnlinkedItems[] = {"TCP_V_M43D_ODST_3_1_Black","TCP_H_Helmet_ECH55D_Black_Silver","ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch"};

	weapons[] = {"CTGCY_MA5C_FL_CTGCY","CTGCY_M41_CTGCY","CTGCY_M6C_CTGCY"};
	respawnWeapons[] = {"CTGCY_MA5C_FL_CTGCY","CTGCY_M41_CTGCY","CTGCY_M6C_CTGCY"};

	magazines[] = {"CTGCY_32Rnd_762x51_Mag","CTGCY_M19_2Rnd_HEAT","CTGCY_8Rnd_127x40_Mag","CTGCY_32Rnd_762x51_Mag","CTGCY_8Rnd_127x40_Mag"};
	respawnMagazines[] = {"CTGCY_32Rnd_762x51_Mag","CTGCY_M19_2Rnd_HEAT","CTGCY_8Rnd_127x40_Mag","CTGCY_32Rnd_762x51_Mag","CTGCY_8Rnd_127x40_Mag"};

	ALiVE_orbatCreator_loadout[] = {
		{"CTGCY_MA5C_FL_CTGCY","OPTRE_BMR_Laser","","CTGCY_MA5_Sight_2",{"CTGCY_32Rnd_762x51_Mag",32},{},""},
		{"CTGCY_M41_CTGCY","","","",{"CTGCY_M19_2Rnd_HEAT",2},{},""},
		{"CTGCY_M6C_CTGCY","OPTRE_M6C_compensator","OPTRE_M6C_Laser","CTGCY_VNSLS_Sight",{"CTGCY_8Rnd_127x40_Mag",8},{},""},
		{"TCP_U_B_CBUU_TacShirt_Full_Gloves_Urban",{{"ACE_EarPlugs",1},{"ACE_fieldDressing",1},{"ACE_packingBandage",1},{"ACE_morphine",1},{"ACE_tourniquet",1},{"CTGCY_8Rnd_127x40_Mag",3,8}}},
		{"TCP_V_M43D_ODST_3_1_Black",{{"ACE_fieldDressing",4},{"ACE_CableTie",2},{"ACE_Canteen",1},{"ACE_EarPlugs",1},{"ACE_MRE_BeefStew",1},{"ACE_tourniquet",1},{"TCP_M9R_Frag",1,1},{"TCP_M21_Smoke",1,1},{"Chemlight_green",1,1},{"CTGCY_32Rnd_762x51_Mag",8,32},{"Chemlight_red",1,1}}},
		{"TCP_B_EM39_MLBE_Hardcase_Black",{{"CTGCY_M19_2Rnd_GHEATAA",3,2}}},
		"TCP_H_Helmet_ECH55D_Black_Silver",
		"TCP_G_TacticalGlasses_Black_DP",
		{},
		{"ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch",""}
	};

	class EventHandlers {
		class CBA_Extended_EventHandlers {};

		class ALiVE_orbatCreator {
			init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0; sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout; reload _this}; [_this] call ATLAS_fnc_randomizeODSTUniform; [_this] call ATLAS_fnc_randomizeKit;}; _this spawn _onSpawn; (_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
		};
	};

	ALiVE_orbatCreator_owned = 1;
};

class B_UNSCMC_ODST_Marksman : TCP_B_UNSC_MC_ODST_Soldier {
	author = "Atlas";
	scope = 2;
	scopeCurator = 2;
	displayName = "ODST Marksman";
	side = 1;
	faction = "B_ATLAS_UNSCMC";
	icon = "iconMan";

	vehicleClass = "B_ATLAS_UNSCMC_INF_ODST";
	editorSubcategory = "UNSCMC_Infantry_ODST";

	identityTypes[] = {"Head_NATO","LanguageENG_F","G_UNSC_Default_Gray"};

	uniformClass = "TCP_U_B_CBUU_TacShirt_Full_Gloves_Urban";

	linkedItems[] = {"TCP_V_M43D_ODST_3_1_Black","TCP_H_Helmet_ECH55D_Black_Silver","ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch","OPTRE_NVG_MVI"};
	respawnlinkedItems[] = {"TCP_V_M43D_ODST_3_1_Black","TCP_H_Helmet_ECH55D_Black_Silver","ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch","OPTRE_NVG_MVI"};

	weapons[] = {"CTGCY_M395_CTGCY","CTGCY_M6C_CTGCY"};
	respawnWeapons[] = {"CTGCY_M395_CTGCY","CTGCY_M6C_CTGCY"};

	magazines[] = {"CTGCY_15Rnd_M762x51_Mag","CTGCY_8Rnd_127x40_Mag","CTGCY_15Rnd_M762x51_Mag","CTGCY_8Rnd_127x40_Mag"};
	respawnMagazines[] = {"CTGCY_15Rnd_M762x51_Mag","CTGCY_8Rnd_127x40_Mag","CTGCY_15Rnd_M762x51_Mag","CTGCY_8Rnd_127x40_Mag"};

	ALiVE_orbatCreator_loadout[] = {
		{"CTGCY_M395_CTGCY","OPTRE_BMR_Laser","","CTGCY_EVOSD_Scope",{"CTGCY_15Rnd_M762x51_Mag",15},{},""},
		{},
		{"CTGCY_M6C_CTGCY","OPTRE_M6C_compensator","OPTRE_M6C_Laser","CTGCY_VNSLS_Sight",{"CTGCY_8Rnd_127x40_Mag",8},{},""},
		{"TCP_U_B_CBUU_TacShirt_Full_Gloves_Urban",{{"ACE_EarPlugs",1},{"ACE_fieldDressing",1},{"ACE_packingBandage",1},{"ACE_morphine",1},{"ACE_tourniquet",1},{"CTGCY_8Rnd_127x40_Mag",3,8},{"CTGCY_15Rnd_M762x51_Mag",1,15}}},
		{"TCP_V_M43D_ODST_3_1_Black",{{"ACE_fieldDressing",4},{"ACE_CableTie",2},{"ACE_Canteen",1},{"ACE_EarPlugs",1},{"ACE_MRE_BeefStew",1},{"ACE_tourniquet",1},{"TCP_M9R_Frag",1,1},{"TCP_M21_Smoke",1,1},{"Chemlight_green",1,1},{"Chemlight_red",1,1},{"CTGCY_15Rnd_M762x51_Mag",8,15}}},
		{},
		"TCP_H_Helmet_ECH55D_Black_Silver",
		"TCP_G_TacticalGlasses_Black_DP",
		{},
		{"ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch","OPTRE_NVG_MVI"}
	};

	class EventHandlers {
		class CBA_Extended_EventHandlers {};

		class ALiVE_orbatCreator {
			init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0; sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout; reload _this}; [_this] call ATLAS_fnc_randomizeODSTUniform; [_this] call ATLAS_fnc_randomizeKit;}; _this spawn _onSpawn; (_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
		};
	};

	ALiVE_orbatCreator_owned = 1;
};

class B_UNSCMC_ODST_Sniper : TCP_B_UNSC_MC_ODST_Soldier {
	author = "Atlas";
	scope = 2;
	scopeCurator = 2;
	displayName = "ODST Sniper";
	side = 1;
	faction = "B_ATLAS_UNSCMC";
	icon = "iconManRecon";

	vehicleClass = "B_ATLAS_UNSCMC_INF_ODST";
	editorSubcategory = "UNSCMC_Infantry_ODST";

	identityTypes[] = {"Head_NATO","LanguageENG_F","G_UNSC_Default_Gray"};

	uniformClass = "TCP_U_B_CBUU_TacShirt_Full_Gloves_Urban";

	linkedItems[] = {"TCP_V_M43D_ODST_3_1_Black","TCP_H_Helmet_ECH55D_Black_Silver","ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch","OPTRE_NVG_MVI"};
	respawnlinkedItems[] = {"TCP_V_M43D_ODST_3_1_Black","TCP_H_Helmet_ECH55D_Black_Silver","ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch","OPTRE_NVG_MVI"};

	weapons[] = {"CTGCY_SRS99D_CTGCY","CTGCY_M6C_CTGCY"};
	respawnWeapons[] = {"CTGCY_SRS99D_CTGCY","CTGCY_M6C_CTGCY"};

	magazines[] = {"CTGCY_4Rnd_145x114_Mag","CTGCY_8Rnd_127x40_Mag","CTGCY_4Rnd_145x114_Mag","CTGCY_8Rnd_127x40_Mag"};
	respawnMagazines[] = {"CTGCY_4Rnd_145x114_Mag","CTGCY_8Rnd_127x40_Mag","CTGCY_4Rnd_145x114_Mag","CTGCY_8Rnd_127x40_Mag"};

	ALiVE_orbatCreator_loadout[] = {
		{"CTGCY_SRS99D_CTGCY","","","CTGCY_OracleN_Scope_ACE",{"CTGCY_4Rnd_145x114_Mag",4},{},""},
		{},
		{"CTGCY_M6C_CTGCY","OPTRE_M6C_compensator","OPTRE_M6C_Laser","CTGCY_VNSLS_Sight",{"CTGCY_8Rnd_127x40_Mag",8},{},""},
		{"TCP_U_B_CBUU_TacShirt_Full_Gloves_Urban",{{"ACE_EarPlugs",1},{"ACE_fieldDressing",1},{"ACE_packingBandage",1},{"ACE_morphine",1},{"ACE_tourniquet",1},{"CTGCY_8Rnd_127x40_Mag",3,8}}},
		{"TCP_V_M43D_ODST_3_1_Black",{{"ACE_fieldDressing",4},{"ACE_CableTie",2},{"ACE_Canteen",1},{"ACE_EarPlugs",1},{"ACE_MRE_BeefStew",1},{"ACE_tourniquet",1},{"TCP_M9R_Frag",1,1},{"TCP_M21_Smoke",1,1},{"Chemlight_green",1,1},{"Chemlight_red",1,1},{"CTGCY_4Rnd_145x114_Mag",6,4}}},
		{},
		"TCP_H_Helmet_ECH55D_Black_Silver",
		"TCP_G_TacticalGlasses_Black_DP",
		{},
		{"ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch","OPTRE_NVG_MVI"}
	};

	class EventHandlers {
		class CBA_Extended_EventHandlers {};

		class ALiVE_orbatCreator {
			init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0; sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout; reload _this}; [_this] call ATLAS_fnc_randomizeODSTUniform; [_this] call ATLAS_fnc_randomizeKit;}; _this spawn _onSpawn; (_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
		};
	};

	ALiVE_orbatCreator_owned = 1;
};

class B_UNSCMC_ODST_Breacher : TCP_B_UNSC_MC_ODST_Soldier {
	author = "Atlas";
	scope = 2;
	scopeCurator = 2;
	displayName = "ODST Breacher";
	side = 1;
	faction = "B_ATLAS_UNSCMC";
	icon = "iconMan";

	vehicleClass = "B_ATLAS_UNSCMC_INF_ODST";
	editorSubcategory = "UNSCMC_Infantry_ODST";

	engineer = 1;
	canDeactivateMines = 1;
	backpack = "TCP_B_Breacher_1_EM39_MLBE_Hardcase_EM39_Buttpack_Black";

	identityTypes[] = {"Head_NATO","LanguageENG_F","G_UNSC_Default_Gray"};

	uniformClass = "TCP_U_B_CBUU_TacShirt_Full_Gloves_Urban";

	linkedItems[] = {"TCP_V_M43D_ODST_3_1_Black","TCP_H_Helmet_ECH55D_Black_Silver","ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch"};
	respawnlinkedItems[] = {"TCP_V_M43D_ODST_3_1_Black","TCP_H_Helmet_ECH55D_Black_Silver","ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch"};

	weapons[] = {"CTGCY_M45T_CTGCY","CTGCY_M6C_CTGCY"};
	respawnWeapons[] = {"CTGCY_M45T_CTGCY","CTGCY_M6C_CTGCY"};

	magazines[] = {"CTGCY_6Rnd_8G_00B","CTGCY_8Rnd_127x40_Mag","CTGCY_6Rnd_8G_00B","CTGCY_8Rnd_127x40_Mag"};
	respawnMagazines[] = {"CTGCY_6Rnd_8G_00B","CTGCY_8Rnd_127x40_Mag","CTGCY_6Rnd_8G_00B","CTGCY_8Rnd_127x40_Mag"};

	ALiVE_orbatCreator_loadout[] = {
		{"CTGCY_M45T_CTGCY","","","CTGCY_SLSV_Sight",{"CTGCY_6Rnd_8G_00B",6},{},""},
		{},
		{"CTGCY_M6C_CTGCY","OPTRE_M6C_compensator","OPTRE_M6C_Laser","CTGCY_VNSLS_Sight",{"CTGCY_8Rnd_127x40_Mag",8},{},""},
		{"TCP_U_B_CBUU_TacShirt_Full_Gloves_Urban",{{"ACE_EarPlugs",1},{"ACE_fieldDressing",1},{"ACE_packingBandage",1},{"ACE_morphine",1},{"ACE_tourniquet",1},{"CTGCY_8Rnd_127x40_Mag",3,8},{"CTGCY_6Rnd_8G_00B",2,6}}},
		{"TCP_V_M43D_ODST_3_1_Black",{{"ACE_fieldDressing",4},{"ACE_CableTie",2},{"ACE_Canteen",1},{"ACE_EarPlugs",1},{"ACE_MRE_BeefStew",1},{"ACE_tourniquet",1},{"TCP_M9R_Frag",1,1},{"TCP_M21_Smoke",1,1},{"Chemlight_green",1,1},{"Chemlight_red",1,1},{"CTGCY_6Rnd_8G_00B",10,6},{"CTGCY_6Rnd_8G_Slug",4,6},{"CTGCY_6Rnd_8G_HE",2,6}}},
		{"TCP_B_Breacher_1_EM39_MLBE_Hardcase_EM39_Buttpack_Black",{{"ACE_Clacker",1},{"ACE_wirecutter",1},{"C12_Remote_Mag",2,1},{"M168_Remote_Mag",1,1}}},
		"TCP_H_Helmet_ECH55D_Black_Silver",
		"TCP_G_TacticalGlasses_Black_DP",
		{},
		{"ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch",""}
	};

	class EventHandlers {
		class CBA_Extended_EventHandlers {};

		class ALiVE_orbatCreator {
			init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0; sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout; reload _this}; [_this] call ATLAS_fnc_randomizeODSTUniform; [_this] call ATLAS_fnc_randomizeKit;}; _this spawn _onSpawn; (_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
		};
	};

	ALiVE_orbatCreator_owned = 1;
};

class B_UNSCMC_ODST_Autorifleman : TCP_B_UNSC_MC_ODST_Soldier {
	author = "Atlas";
	scope = 2;
	scopeCurator = 2;
	displayName = "ODST Autorifleman";
	side = 1;
	faction = "B_ATLAS_UNSCMC";
	icon = "iconManMG";

	vehicleClass = "B_ATLAS_UNSCMC_INF_ODST";
	editorSubcategory = "UNSCMC_Infantry_ODST";

	backpack = "TCP_B_Autorifleman_1_EM39_MLBE_Hardcase_EM39_Buttpack_Black";

	identityTypes[] = {"Head_NATO","LanguageENG_F","G_UNSC_Default_Gray"};

	uniformClass = "TCP_U_B_CBUU_TacShirt_Full_Gloves_Urban";

	linkedItems[] = {"TCP_V_M43D_ODST_3_1_Black","TCP_H_Helmet_ECH55D_Black_Silver","ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch"};
	respawnlinkedItems[] = {"TCP_V_M43D_ODST_3_1_Black","TCP_H_Helmet_ECH55D_Black_Silver","ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch"};

	weapons[] = {"CTGCY_M73_CTGCY","CTGCY_M6C_CTGCY"};
	respawnWeapons[] = {"CTGCY_M73_CTGCY","CTGCY_M6C_CTGCY"};

	magazines[] = {"CTGCY_100Rnd_95x40_Mag","CTGCY_8Rnd_127x40_Mag","CTGCY_100Rnd_95x40_Mag","CTGCY_8Rnd_127x40_Mag"};
	respawnMagazines[] = {"CTGCY_100Rnd_95x40_Mag","CTGCY_8Rnd_127x40_Mag","CTGCY_100Rnd_95x40_Mag","CTGCY_8Rnd_127x40_Mag"};

	ALiVE_orbatCreator_loadout[] = {
		{"CTGCY_M73_CTGCY","","","CTGCY_M73_Sight",{"CTGCY_100Rnd_95x40_Mag",100},{},""},
		{},
		{"CTGCY_M6C_CTGCY","OPTRE_M6C_compensator","OPTRE_M6C_Laser","CTGCY_VNSLS_Sight",{"CTGCY_8Rnd_127x40_Mag",8},{},""},
		{"TCP_U_B_CBUU_TacShirt_Full_Gloves_Urban",{{"ACE_EarPlugs",1},{"ACE_fieldDressing",1},{"ACE_packingBandage",1},{"ACE_morphine",1},{"ACE_tourniquet",1},{"CTGCY_8Rnd_127x40_Mag",3,8}}},
		{"TCP_V_M43D_ODST_3_1_Black",{{"ACE_fieldDressing",4},{"ACE_CableTie",2},{"ACE_Canteen",1},{"ACE_EarPlugs",1},{"ACE_MRE_BeefStew",1},{"ACE_tourniquet",1},{"TCP_M9R_Frag",1,1},{"TCP_M21_Smoke",1,1},{"Chemlight_green",1,1},{"Chemlight_red",1,1},{"CTGCY_100Rnd_95x40_Mag",2,100}}},
		{"TCP_B_Autorifleman_1_EM39_MLBE_Hardcase_EM39_Buttpack_Black",{{"CTGCY_100Rnd_95x40_Mag",9,100}}},
		"TCP_H_Helmet_ECH55D_Black_Silver",
		"TCP_G_TacticalGlasses_Black_DP",
		{},
		{"ItemMap","ItemGPS","TCP_ANPRC55","ItemCompass","TCP_Watch",""}
	};

	class EventHandlers {
		class CBA_Extended_EventHandlers {};

		class ALiVE_orbatCreator {
			init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0; sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout; reload _this}; [_this] call ATLAS_fnc_randomizeODSTUniform; [_this] call ATLAS_fnc_randomizeKit;}; _this spawn _onSpawn; (_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
		};
	};

	ALiVE_orbatCreator_owned = 1;
};