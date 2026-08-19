class CfgGroups {
	class West {
		class B_ATLAS_UNSCAF {
			name = "UNSC Air Force";

			class Infantry {
				name = "Infantry";

				class b_batlasunscaf_infantry_rifle_squad {
					name = "Rifle Squad";
					side = 1;
					faction = "B_ATLAS_UNSCAF";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 { position[] = {0,0,0}; rank = "SERGEANT"; side = 1; vehicle = "B_UNSCAF_Squad_Leader"; };
					class Unit1 { position[] = {5,-5,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Rifleman"; };
					class Unit2 { position[] = {10,-10,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Rifleman_AT"; };
					class Unit3 { position[] = {-5,-15,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Marksman"; };
					class Unit4 { position[] = {5,-15,0}; rank = "CORPORAL"; side = 1; vehicle = "B_UNSCAF_Team_Leader"; };
					class Unit5 { position[] = {0,-20,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Autorifleman_01"; };
					class Unit6 { position[] = {0,-20,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Ammo_Bearer"; };
					class Unit7 { position[] = {5,-25,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Corpsman"; };
				};

				class b_batlasunscaf_infantry_weapons_squad {
					name = "Weapons Squad";
					side = 1;
					faction = "B_ATLAS_UNSCAF";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 { position[] = {0,0,0}; rank = "SERGEANT"; side = 1; vehicle = "B_UNSCAF_Squad_Leader"; };
					class Unit1 { position[] = {5,-5,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Autorifleman_01"; };
					class Unit2 { position[] = {-5,-5,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Grenadier"; };
					class Unit3 { position[] = {10,-10,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Marksman"; };
					class Unit4 { position[] = {-10,-10,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Missile_Specialist_AT"; };
					class Unit5 { position[] = {15,-15,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Missile_Specialist_AT"; };
					class Unit6 { position[] = {-15,-15,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Ammo_Bearer"; };
					class Unit7 { position[] = {20,-20,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Corpsman"; };
				};

				class b_batlasunscaf_infantry_fireteam {
					name = "Fireteam";
					side = 1;
					faction = "B_ATLAS_UNSCAF";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 { position[] = {0,0,0}; rank = "SERGEANT"; side = 1; vehicle = "B_UNSCAF_Team_Leader"; };
					class Unit1 { position[] = {5,-5,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Autorifleman_01"; };
					class Unit2 { position[] = {-5,-5,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Grenadier"; };
					class Unit3 { position[] = {10,-10,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Rifleman_AT"; };
				};

				class b_batlasunscaf_infantry_anti_armor_team {
					name = "Anti-Armor Team";
					side = 1;
					faction = "B_ATLAS_UNSCAF";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 { position[] = {0,0,0}; rank = "SERGEANT"; side = 1; vehicle = "B_UNSCAF_Team_Leader"; };
					class Unit1 { position[] = {5,-5,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Missile_Specialist_AT"; };
					class Unit2 { position[] = {-5,-5,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Missile_Specialist_AT"; };
					class Unit3 { position[] = {10,-10,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Rifleman"; };
				};

				class b_batlasunscaf_infantry_air_defense_team {
					name = "Air-Defense Team";
					side = 1;
					faction = "B_ATLAS_UNSCAF";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 { position[] = {0,0,0}; rank = "SERGEANT"; side = 1; vehicle = "B_UNSCAF_Team_Leader"; };
					class Unit1 { position[] = {5,-5,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Missile_Speacialist_AA"; };
					class Unit2 { position[] = {-5,-5,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Missile_Speacialist_AA"; };
					class Unit3 { position[] = {10,-10,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Rifleman"; };
				};

				class b_batlasunscaf_infantry_sentry {
					name = "Sentry";
					side = 1;
					faction = "B_ATLAS_UNSCAF";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 { position[] = {0,0,0}; rank = "SERGEANT"; side = 1; vehicle = "B_UNSCAF_Grenadier"; };
					class Unit1 { position[] = {5,-5,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Rifleman"; };
				};

				class b_batlasunscaf_infantry_recon_team {
					name = "Recon Team";
					side = 1;
					faction = "B_ATLAS_UNSCAF";
					icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
					rarityGroup = 0.5;

					class Unit0 { position[] = {0,0,0}; rank = "SERGEANT"; side = 1; vehicle = "B_UNSCAF_Team_Leader"; };
					class Unit1 { position[] = {5,-5,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Marksman"; };
					class Unit2 { position[] = {-5,-5,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Corpsman"; };
					class Unit3 { position[] = {10,-10,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Rifleman_AT"; };
					class Unit4 { position[] = {-10,-10,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Explosive_Specialist"; };
					class Unit5 { position[] = {15,-15,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Forward_Observer"; };
				};

				class b_batlasunscaf_infantry_recon_patrol {
					name = "Recon Patrol";
					side = 1;
					faction = "B_ATLAS_UNSCAF";
					icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
					rarityGroup = 0.5;

					class Unit0 { position[] = {0,0,0}; rank = "SERGEANT"; side = 1; vehicle = "B_UNSCAF_Team_Leader"; };
					class Unit1 { position[] = {5,-5,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Marksman"; };
					class Unit2 { position[] = {-5,-5,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Corpsman"; };
				};

				class b_batlasunscaf_infantry_recon_sentry {
					name = "Recon Sentry";
					side = 1;
					faction = "B_ATLAS_UNSCAF";
					icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
					rarityGroup = 0.5;

					class Unit0 { position[] = {0,0,0}; rank = "SERGEANT"; side = 1; vehicle = "B_UNSCAF_Marksman"; };
				};

				class b_batlasunscaf_infantry_sniper_team {
					name = "Sniper Team";
					side = 1;
					faction = "B_ATLAS_UNSCAF";
					icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
					rarityGroup = 0.5;

					class Unit0 { position[] = {0,0,0}; rank = "SERGEANT"; side = 1; vehicle = "B_UNSCAF_Forward_Observer"; };
					class Unit1 { position[] = {5,-5,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Sniper"; };
				};
			};

			class SpecOps {
				name = "Special Forces";

				class b_batlasunscaf_specops_small_uav_team {
					name = "Small UAV Team";
					side = 1;
					faction = "B_ATLAS_UNSCAF";
					icon = "\A3\ui_f\data\map\markers\nato\b_uav.paa";
					rarityGroup = 0.5;

					class Unit0 { position[] = {0,0,0}; rank = "SERGEANT"; side = 1; vehicle = "B_UNSCAF_Team_Leader"; };
					class Unit1 { position[] = {5,-5,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_UAV_Operator_OQ_40_Minibee"; };
					class Unit2 { position[] = {-5,-5,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_OQ_40_Minibee"; };
				};

				class b_batlasunscaf_specops_recon_uav_team {
					name = "Recon UAV Team";
					side = 1;
					faction = "B_ATLAS_UNSCAF";
					icon = "\A3\ui_f\data\map\markers\nato\b_uav.paa";
					rarityGroup = 0.5;

					class Unit0 { position[] = {0,0,0}; rank = "SERGEANT"; side = 1; vehicle = "B_UNSCAF_Team_Leader"; };
					class Unit1 { position[] = {5,-5,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_UAV_Operator_OQ_38_Wren"; };
					class Unit2 { position[] = {-5,-5,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_OQ_38_Wren"; };
				};

				class b_batlasunscaf_infantry_odst_fireteam {
					name = "ODST Fireteam";
					side = 1;
					faction = "B_ATLAS_UNSCAF";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 { position[] = {0,0,0}; rank = "SERGEANT"; side = 1; vehicle = "B_UNSCAF_ODST_Team_Leader"; };
					class Unit1 { position[] = {5,-5,0}; rank = "CORPORAL"; side = 1; vehicle = "B_UNSCAF_ODST_Autorifleman"; };
					class Unit2 { position[] = {-5,-5,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_ODST_AT_Specialist"; };
					class Unit3 { position[] = {10,-10,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_ODST_Corpsman"; };
				};

				class b_batlasunscaf_infantry_odst_recon_team {
					name = "ODST Recon Team";
					side = 1;
					faction = "B_ATLAS_UNSCAF";
					icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
					rarityGroup = 0.5;

					class Unit0 { position[] = {0,0,0}; rank = "SERGEANT"; side = 1; vehicle = "B_UNSCAF_ODST_Team_Leader"; };
					class Unit1 { position[] = {5,-5,0}; rank = "CORPORAL"; side = 1; vehicle = "B_UNSCAF_ODST_Scout"; };
					class Unit2 { position[] = {-5,-5,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_ODST_Marksman"; };
					class Unit3 { position[] = {10,-10,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_ODST_Corpsman"; };
				};

				class b_batlasunscaf_infantry_odst_sniper_team {
					name = "ODST Sniper Team";
					side = 1;
					faction = "B_ATLAS_UNSCAF";
					icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
					rarityGroup = 0.5;

					class Unit0 { position[] = {0,0,0}; rank = "SERGEANT"; side = 1; vehicle = "B_UNSCAF_ODST_Sniper"; };
					class Unit1 { position[] = {5,-5,0}; rank = "CORPORAL"; side = 1; vehicle = "B_UNSCAF_ODST_Scout"; };
				};

				class b_batlasunscaf_infantry_odst_weapons_team {
					name = "ODST Weapons Team";
					side = 1;
					faction = "B_ATLAS_UNSCAF";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 { position[] = {0,0,0}; rank = "SERGEANT"; side = 1; vehicle = "B_UNSCAF_ODST_Team_Leader"; };
					class Unit1 { position[] = {5,-5,0}; rank = "CORPORAL"; side = 1; vehicle = "B_UNSCAF_ODST_AT_Specialist"; };
					class Unit2 { position[] = {-5,-5,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_ODST_AA_Specialist"; };
					class Unit3 { position[] = {10,-10,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_ODST_Breacher"; };
				};

				class b_batlasunscaf_infantry_odst_assault_team {
					name = "ODST Assault Team";
					side = 1;
					faction = "B_ATLAS_UNSCAF";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 { position[] = {0,0,0}; rank = "SERGEANT"; side = 1; vehicle = "B_UNSCAF_ODST_Team_Leader"; };
					class Unit1 { position[] = {5,-5,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_ODST_Breacher"; };
					class Unit2 { position[] = {-5,-5,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_ODST_Autorifleman"; };
					class Unit3 { position[] = {10,-10,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_ODST_Corpsman"; };
				};
			};

			class Motorized {
				name = "Motorized Infantry";

				class b_batlasunscaf_motorized_motorized_team {
					name = "Motorized Team";
					side = 1;
					faction = "B_ATLAS_UNSCAF";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					rarityGroup = 0.5;

					class Unit0 { position[] = {0,0,0}; rank = "SERGEANT"; side = 1; vehicle = "B_UNSCAF_M12A_FAV"; };
					class Unit1 { position[] = {5,-5,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Autorifleman_01"; };
					class Unit2 { position[] = {-5,-5,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Rifleman_AT"; };
				};

				class b_batlasunscaf_motorized_motorized_anti_armor_team {
					name = "Motorized Anti-Armor Team";
					side = 1;
					faction = "B_ATLAS_UNSCAF";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					rarityGroup = 0.5;

					class Unit0 { position[] = {0,0,0}; rank = "SERGEANT"; side = 1; vehicle = "B_UNSCAF_M12A_FAV"; };
					class Unit1 { position[] = {5,-5,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Missile_Specialist_AT"; };
					class Unit2 { position[] = {-5,-5,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Missile_Specialist_AT"; };
					class Unit3 { position[] = {10,-10,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Rifleman"; };
				};

				class b_batlasunscaf_motorized_motorized_air_defense_team {
					name = "Motorized Air-Defense Team";
					side = 1;
					faction = "B_ATLAS_UNSCAF";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					rarityGroup = 0.5;

					class Unit0 { position[] = {0,0,0}; rank = "SERGEANT"; side = 1; vehicle = "B_UNSCAF_M12A_FAV"; };
					class Unit1 { position[] = {5,-5,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Missile_Specialist_AT"; };
					class Unit2 { position[] = {-5,-5,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Missile_Specialist_AT"; };
					class Unit3 { position[] = {10,-10,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Rifleman"; };
				};

				class b_batlasunscaf_motorized_motorized_hmg_team {
					name = "Motorized HMG Team";
					side = 1;
					faction = "B_ATLAS_UNSCAF";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					rarityGroup = 0.5;

					class Unit0 { position[] = {0,0,0}; rank = "SERGEANT"; side = 1; vehicle = "B_UNSCAF_M12A_FAV"; };
					class Unit1 { position[] = {5,-5,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Team_Leader"; };
					class Unit2 { position[] = {-5,-5,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Heavy_Gunner"; };
					class Unit3 { position[] = {10,-10,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Asst_Heavy_Gunner"; };
				};

				class b_batlasunscaf_motorized_motorized_reinforcements {
					name = "Motorized Reinforcements";
					side = 1;
					faction = "B_ATLAS_UNSCAF";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					rarityGroup = 0.5;

					class Unit0 { position[] = {0,0,0}; rank = "SERGEANT"; side = 1; vehicle = "B_UNSCAF_M1087"; };
					class Unit1 { position[] = {5,-5,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Squad_Leader"; };
					class Unit2 { position[] = {-5,-5,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Rifleman"; };
					class Unit3 { position[] = {10,-10,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Rifleman_AT"; };
					class Unit4 { position[] = {-10,-10,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Marksman"; };
					class Unit5 { position[] = {15,-15,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Team_Leader"; };
					class Unit6 { position[] = {-15,-15,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Autorifleman_01"; };
					class Unit7 { position[] = {20,-20,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Ammo_Bearer"; };
					class Unit8 { position[] = {-20,-20,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Corpsman"; };
					class Unit9 { position[] = {25,-25,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Squad_Leader"; };
					class Unit10 { position[] = {-25,-25,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Rifleman"; };
					class Unit11 { position[] = {30,-30,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Rifleman_AT"; };
					class Unit12 { position[] = {-30,-30,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Marksman"; };
					class Unit13 { position[] = {35,-35,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Team_Leader"; };
					class Unit14 { position[] = {-35,-35,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Autorifleman_01"; };
					class Unit15 { position[] = {40,-40,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Ammo_Bearer"; };
					class Unit16 { position[] = {-40,-40,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Corpsman"; };
				};
			};

			class Support {
				name = "Support Infantry";

				class b_batlasunscaf_support_medical_support_team {
					name = "Medical Support Team";
					side = 1;
					faction = "B_ATLAS_UNSCAF";
					icon = "\A3\ui_f\data\map\markers\nato\b_med.paa";
					rarityGroup = 0.5;

					class Unit0 { position[] = {0,0,0}; rank = "SERGEANT"; side = 1; vehicle = "B_UNSCAF_Team_Leader"; };
					class Unit1 { position[] = {5,-5,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Autorifleman_01"; };
					class Unit2 { position[] = {-5,-5,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Corpsman"; };
					class Unit3 { position[] = {10,-10,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Corpsman"; };
				};

				class b_batlasunscaf_support_eod_team {
					name = "EOD Team";
					side = 1;
					faction = "B_ATLAS_UNSCAF";
					icon = "\A3\ui_f\data\map\markers\nato\b_support.paa";
					rarityGroup = 0.5;

					class Unit0 { position[] = {0,0,0}; rank = "SERGEANT"; side = 1; vehicle = "B_UNSCAF_Team_Leader"; };
					class Unit1 { position[] = {5,-5,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Engineer"; };
					class Unit2 { position[] = {-5,-5,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Explosive_Specialist"; };
					class Unit3 { position[] = {10,-10,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Explosive_Specialist"; };
				};

				class b_batlasunscaf_support_repair_team {
					name = "Repair Team";
					side = 1;
					faction = "B_ATLAS_UNSCAF";
					icon = "\A3\ui_f\data\map\markers\nato\b_maint.paa";
					rarityGroup = 0.5;

					class Unit0 { position[] = {0,0,0}; rank = "SERGEANT"; side = 1; vehicle = "B_UNSCAF_Team_Leader"; };
					class Unit1 { position[] = {5,-5,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Engineer"; };
					class Unit2 { position[] = {-5,-5,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Engineer"; };
					class Unit3 { position[] = {10,-10,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Engineer"; };
				};

				class b_batlasunscaf_support_hmg_team {
					name = "HMG Team";
					side = 1;
					faction = "B_ATLAS_UNSCAF";
					icon = "\A3\ui_f\data\map\markers\nato\b_support.paa";
					rarityGroup = 0.5;

					class Unit0 { position[] = {0,0,0}; rank = "SERGEANT"; side = 1; vehicle = "B_UNSCAF_Team_Leader"; };
					class Unit1 { position[] = {5,-5,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Heavy_Gunner"; };
					class Unit2 { position[] = {-5,-5,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Asst_Heavy_Gunner"; };
				};
			};

			class Mechanized {
				name = "Mechanized Infantry";

				class b_batlasunscaf_mechanized_mechanized_rifle_squad {
					name = "Mechanized Rifle Squad";
					side = 1;
					faction = "B_ATLAS_UNSCAF";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					rarityGroup = 0.5;

					class Unit0 { position[] = {0,0,0}; rank = "SERGEANT"; side = 1; vehicle = "B_UNSCAF_M494_IFV"; };
					class Unit1 { position[] = {5,-5,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Squad_Leader"; };
					class Unit2 { position[] = {-5,-5,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Rifleman"; };
					class Unit3 { position[] = {10,-10,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Rifleman_AT"; };
					class Unit4 { position[] = {-10,-10,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Marksman"; };
					class Unit5 { position[] = {15,-15,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Team_Leader"; };
					class Unit6 { position[] = {-15,-15,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Ammo_Bearer"; };
					class Unit7 { position[] = {20,-20,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Corpsman"; };
				};

				class b_batlasunscaf_mechanized_mechanized_anit_armor_squad {
					name = "Mechanized Anit-Armor Squad";
					side = 1;
					faction = "B_ATLAS_UNSCAF";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					rarityGroup = 0.5;

					class Unit0 { position[] = {0,0,0}; rank = "SERGEANT"; side = 1; vehicle = "B_UNSCAF_M494_IFV"; };
					class Unit1 { position[] = {5,-5,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Squad_Leader"; };
					class Unit2 { position[] = {-5,-5,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Autorifleman_01"; };
					class Unit3 { position[] = {10,-10,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Missile_Specialist_AT"; };
					class Unit4 { position[] = {-10,-10,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Missile_Specialist_AT"; };
					class Unit5 { position[] = {15,-15,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Missile_Specialist_AT"; };
					class Unit6 { position[] = {-15,-15,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Rifleman"; };
					class Unit7 { position[] = {20,-20,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Ammo_Bearer"; };
					class Unit8 { position[] = {-20,-20,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Corpsman"; };
				};

				class b_batlasunscaf_mechanized_mechanized_air_defense_squad {
					name = "Mechanized Air-Defense Squad";
					side = 1;
					faction = "B_ATLAS_UNSCAF";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					rarityGroup = 0.5;

					class Unit0 { position[] = {0,0,0}; rank = "SERGEANT"; side = 1; vehicle = "B_UNSCAF_M494_IFV"; };
					class Unit1 { position[] = {5,-5,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Squad_Leader"; };
					class Unit2 { position[] = {-5,-5,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Autorifleman_01"; };
					class Unit3 { position[] = {10,-10,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Missile_Speacialist_AA"; };
					class Unit4 { position[] = {-10,-10,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Missile_Speacialist_AA"; };
					class Unit5 { position[] = {15,-15,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Missile_Speacialist_AA"; };
					class Unit6 { position[] = {-15,-15,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Rifleman"; };
					class Unit7 { position[] = {20,-20,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Ammo_Bearer"; };
					class Unit8 { position[] = {-20,-20,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Corpsman"; };
				};

				class b_batlasunscaf_mechanized_mechanized_support_squad {
					name = "Mechanized Support Squad";
					side = 1;
					faction = "B_ATLAS_UNSCAF";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					rarityGroup = 0.5;

					class Unit0 { position[] = {0,0,0}; rank = "SERGEANT"; side = 1; vehicle = "B_UNSCAF_M494_IFV"; };
					class Unit1 { position[] = {5,-5,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Team_Leader"; };
					class Unit2 { position[] = {-5,-5,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Autorifleman_01"; };
					class Unit3 { position[] = {10,-10,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Engineer"; };
					class Unit4 { position[] = {-10,-10,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Engineer"; };
					class Unit5 { position[] = {15,-15,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Explosive_Specialist"; };
					class Unit6 { position[] = {-15,-15,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Ammo_Bearer"; };
					class Unit7 { position[] = {20,-20,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_Corpsman"; };
				};
			};

			class Armored {
				name = "Armor";

				class b_batlasunscaf_armored_tank_platoon {
					name = "Tank Platoon";
					side = 1;
					faction = "B_ATLAS_UNSCAF";
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					rarityGroup = 0.5;
					class Unit0 { position[] = {0,0,0}; rank = "SERGEANT"; side = 1; vehicle = "B_UNSCAF_M808B_MBT"; };
					class Unit1 { position[] = {14,-16,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_M808BM_MBT"; };
					class Unit2 { position[] = {-14,-16,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_M808B_MBT"; };
					class Unit3 { position[] = {28,-30,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_M808BM_MBT"; };
				};

				class b_batlasunscaf_armored_tank_section {
					name = "Tank Section";
					side = 1;
					faction = "B_ATLAS_UNSCAF";
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					rarityGroup = 0.5;
					class Unit0 { position[] = {0,0,0}; rank = "SERGEANT"; side = 1; vehicle = "B_UNSCAF_M808B_MBT"; };
					class Unit1 { position[] = {14,-16,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_M808BM_MBT"; };
				};

				class b_batlasunscaf_armored_grizzly_tank_section {
					name = "Grizzly Tank Section";
					side = 1;
					faction = "B_ATLAS_UNSCAF";
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					rarityGroup = 0.5;
					class Unit0 { position[] = {0,0,0}; rank = "SERGEANT"; side = 1; vehicle = "B_UNSCAF_M850_HBT"; };
					class Unit1 { position[] = {14,-22,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_M850_HBT"; };
				};
			};

			class Artillery {
				name = "Artillery";

				class b_batlasunscaf_artillery_artillery_platoon {
					name = "Artillery Platoon";
					side = 1;
					faction = "B_ATLAS_UNSCAF";
					icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
					rarityGroup = 0.5;
					class Unit0 { position[] = {0,0,0}; rank = "SERGEANT"; side = 1; vehicle = "B_UNSCAF_M875_SPH"; };
					class Unit1 { position[] = {14,-16,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_M875_SPH"; };
					class Unit2 { position[] = {-14,-16,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_M875_SPH"; };
					class Unit3 { position[] = {28,-30,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_M875_SPH"; };
				};

				class b_batlasunscaf_artillery_artillery_section {
					name = "Artillery Section";
					side = 1;
					faction = "B_ATLAS_UNSCAF";
					icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
					rarityGroup = 0.5;
					class Unit0 { position[] = {0,0,0}; rank = "SERGEANT"; side = 1; vehicle = "B_UNSCAF_M875_SPH"; };
					class Unit1 { position[] = {14,-16,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_M875_SPH"; };
				};

				class b_batlasunscaf_mlrs_artillery_section {
					name = "MLRS Section";
					side = 1;
					faction = "B_ATLAS_UNSCAF";
					icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
					rarityGroup = 0.5;
					class Unit0 { position[] = {0,0,0}; rank = "SERGEANT"; side = 1; vehicle = "B_UNSCAF_M705_MLRS"; };
					class Unit1 { position[] = {14,-16,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_M705_MLRS"; };
				};
			};

			class Naval {
				name = "Naval";

				class b_batlasunscaf_naval_maritime_patrol {
					name = "Maritime Patrol";
					side = 1;
					faction = "B_ATLAS_UNSCAF";
					icon = "\A3\ui_f\data\map\markers\nato\b_naval.paa";
					rarityGroup = 0.5;
					class Unit0 { position[] = {0,0,0}; rank = "SERGEANT"; side = 1; vehicle = "B_UNSCAF_M112_WPC"; };
					class Unit1 { position[] = {7,-12,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_M112_WPC_M41"; };
				};
			};

			class Air {
				name = "Air";

				class b_batlasunscaf_air_air_patrol {
					name = "Air Patrol ";
					side = 1;
					faction = "B_ATLAS_UNSCAF";
					icon = "\A3\ui_f\data\map\markers\nato\b_air.paa";
					rarityGroup = 0.5;
					class Unit0 { position[] = {0,0,0}; rank = "SERGEANT"; side = 1; vehicle = "B_UNSCAF_AV_14_CAP"; };
					class Unit1 { position[] = {11,-14,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_AV_14_CAP"; };
				};
			};
		};
	};
};