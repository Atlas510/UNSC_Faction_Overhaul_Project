// ============================================================
//  CfgGroups.hpp — UNSCAF Units
//
//  Define premade groups shown in Zeus / ALiVE orbat builder.
//  Follow the template below for each group.
//
//  FILL-IN GUIDE:
//    - Update group name, class identifier, and unit list.
//    - Add / remove Unit# entries as needed.
//    - All vehicle classnames must reference B_UNSCAF_* units.
// ============================================================

class CfgGroups
{
	class West
	{
		class B_ATLAS_UNSCAF
		{
			name = "UNSC Air Force"; // FILL: faction display name

			class Infantry
			{
				name = "Infantry";

				class b_batlasunscaf_infantry_rifle_squad
				{
					name = "Rifle Squad";
					side = 1;
					faction = "B_ATLAS_UNSCAF";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 { position[] = {0,0,0};    rank = "SERGEANT"; side = 1; vehicle = "B_UNSCAF_Squad_Leader"; };
					class Unit1 { position[] = {5,-5,0};   rank = "CORPORAL"; side = 1; vehicle = "B_UNSCAF_Team_Leader"; };
					class Unit2 { position[] = {10,-10,0}; rank = "PRIVATE";  side = 1; vehicle = "B_UNSCAF_Rifleman"; };
					class Unit3 { position[] = {-5,-10,0}; rank = "PRIVATE";  side = 1; vehicle = "B_UNSCAF_Rifleman"; };
					class Unit4 { position[] = {0,-15,0};  rank = "PRIVATE";  side = 1; vehicle = "B_UNSCAF_Grenadier"; };
					class Unit5 { position[] = {5,-15,0};  rank = "PRIVATE";  side = 1; vehicle = "B_UNSCAF_Autorifleman"; };
					class Unit6 { position[] = {-5,-15,0}; rank = "PRIVATE";  side = 1; vehicle = "B_UNSCAF_Marksman"; };
					class Unit7 { position[] = {0,-20,0};  rank = "PRIVATE";  side = 1; vehicle = "B_UNSCAF_Corpsman"; };
					// FILL: add/remove Unit# blocks to match your desired squad composition
				};

				class b_batlasunscaf_infantry_fireteam
				{
					name = "Fireteam";
					side = 1;
					faction = "B_ATLAS_UNSCAF";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 { position[] = {0,0,0};    rank = "CORPORAL"; side = 1; vehicle = "B_UNSCAF_Team_Leader"; };
					class Unit1 { position[] = {5,-5,0};   rank = "PRIVATE";  side = 1; vehicle = "B_UNSCAF_Autorifleman"; };
					class Unit2 { position[] = {-5,-5,0};  rank = "PRIVATE";  side = 1; vehicle = "B_UNSCAF_Grenadier"; };
					class Unit3 { position[] = {0,-10,0};  rank = "PRIVATE";  side = 1; vehicle = "B_UNSCAF_Rifleman"; };
				};

				// TODO — Add more group presets here following the same pattern.
			};

			// TODO — Add more group categories (e.g. Motorized, Air) as needed.
			// Example structure:
			/*
			class Motorized
			{
				name = "Motorized";
				class b_batlasunscaf_motorized_patrol
				{
					name = "Motorized Patrol";
					side = 1;
					faction = "B_ATLAS_UNSCAF";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					rarityGroup = 0.5;
					class Unit0 { position[] = {0,0,0}; rank = "SERGEANT"; side = 1; vehicle = "B_UNSCAF_TODO_VehicleName"; };
				};
			};
			*/
		};
	};
};
