// ============================================================================
// CfgGroups.hpp  –  UNSC Air Force
// ============================================================================
// Add every ALiVE / editor group preset below.
// Use the template comments as a starting point for new groups.
// ============================================================================

class CfgGroups
{
	class West
	{
		class B_ATLAS_UNSCAF
		{
			name = "UNSC Air Force";

			// ----------------------------------------------------------------
			// Infantry / ground crews
			// ----------------------------------------------------------------
			class Infantry
			{
				name = "Infantry";

				// TEMPLATE – copy and fill in for each group
				/*
				class b_batlasunscaf_group_NAME
				{
					name = "Group Display Name";
					side = 1;
					faction = "B_ATLAS_UNSCAF";
					icon = "\A3\ui_f\data\map\markers\nato\b_air.paa";
					rarityGroup = 0.5;

					class Unit0 { position[] = {0,0,0};   rank = "CAPTAIN"; side = 1; vehicle = "B_UNSCAF_UNIT"; };
					class Unit1 { position[] = {5,-5,0};  rank = "PRIVATE"; side = 1; vehicle = "B_UNSCAF_UNIT"; };
					// Add more units...
				};
				*/

				// Add infantry groups below this line

			}; // end Infantry

			// ----------------------------------------------------------------
			// Air
			// ----------------------------------------------------------------
			class Air
			{
				name = "Air";

				// TEMPLATE – copy and fill in for each air group
				/*
				class b_batlasunscaf_air_NAME
				{
					name = "Air Group Display Name";
					side = 1;
					faction = "B_ATLAS_UNSCAF";
					icon = "\A3\ui_f\data\map\markers\nato\b_air.paa";
					rarityGroup = 0.5;

					class Unit0 { position[] = {0,0,0}; rank = "CAPTAIN"; side = 1; vehicle = "B_UNSCAF_AIRCRAFT"; };
					// Add more units...
				};
				*/

				// Add air groups below this line

			}; // end Air

		}; // end B_ATLAS_UNSCAF
	}; // end West
}; // end CfgGroups
