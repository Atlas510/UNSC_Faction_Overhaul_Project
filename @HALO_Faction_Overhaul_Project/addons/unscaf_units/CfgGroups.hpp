class CfgGroups {
	class West {
		class B_ATLAS_UNSCAF {
			name = "UNSC Air Force";

			class Infantry {
				name = "Infantry";

				class b_batlasunscaf_infantry_aircrew_pair {
					name = "Aircrew Pair";
					side = 1;
					faction = "B_ATLAS_UNSCAF";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup = 0.5;

					class Unit0 { position[] = {0,0,0}; rank = "SERGEANT"; side = 1; vehicle = "B_UNSCAF_Marine_Pilot"; };
					class Unit1 { position[] = {5,-5,0}; rank = "CORPORAL"; side = 1; vehicle = "B_UNSCAF_Marine_Aircrewman"; };
				};
			};

			class SpecOps {
				name = "Special Forces";

				class b_batlasunscaf_specops_fireteam {
					name = "SF Fireteam";
					side = 1;
					faction = "B_ATLAS_UNSCAF";
					icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
					rarityGroup = 0.5;

					class Unit0 { position[] = {0,0,0}; rank = "SERGEANT"; side = 1; vehicle = "B_UNSCAF_SF_Team_Leader"; };
					class Unit1 { position[] = {5,-5,0}; rank = "CORPORAL"; side = 1; vehicle = "B_UNSCAF_SF_Airman"; };
					class Unit2 { position[] = {-5,-5,0}; rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_SF_Sentry"; };
				};
			};
		};
	};
};
