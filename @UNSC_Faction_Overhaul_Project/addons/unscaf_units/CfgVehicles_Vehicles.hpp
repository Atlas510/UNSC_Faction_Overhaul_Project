// ============================================================
//  CfgVehicles_Vehicles.hpp — UNSCAF Units
//
//  Define one class block per vehicle type.
//  Copy a block, update the FILL fields, repeat.
//
//  NAMING CONVENTION:
//    Classname  : B_UNSCAF_<VehicleName>
//    Faction    : B_ATLAS_UNSCAF
//    VehicleClass (Zeus cat) : B_ATLAS_UNSCAF_<TYPE>
//      Types: MOT, MECH, ARMR, ARTY, AIR, DRN, TUR
// ============================================================

// ---- CAR / LIGHT VEHICLE TEMPLATE --------------------------
class B_UNSCAF_TODO_VehicleName : TODO_ParentVehicleClass /* FILL: parent class */ {
	author = "Atlas510";
	scope = 2;
	scopeCurator = 2;
	displayName = "TODO Vehicle Display Name"; // FILL
	side = 1;
	faction = "B_ATLAS_UNSCAF";
	vehicleClass = "B_ATLAS_UNSCAF_MOT";       // FILL: pick category
	crew = "B_UNSCAF_Crewman";                 // FILL: default crew unit

	class EventHandlers {
		class CBA_Extended_EventHandlers {};
	};
	ALiVE_orbatCreator_owned = 1;
};

// ---- AIRCRAFT TEMPLATE -------------------------------------
class B_UNSCAF_TODO_AircraftName : TODO_ParentAircraftClass /* FILL: parent class */ {
	author = "Atlas510";
	scope = 2;
	scopeCurator = 2;
	displayName = "TODO Aircraft Display Name"; // FILL
	side = 1;
	faction = "B_ATLAS_UNSCAF";
	vehicleClass = "B_ATLAS_UNSCAF_AIR";        // FILL: pick category
	crew = "B_UNSCAF_Pilot";                    // FILL: default crew unit

	class EventHandlers {
		class CBA_Extended_EventHandlers {};
	};
	ALiVE_orbatCreator_owned = 1;
};

// ---- STATIC / TURRET TEMPLATE ------------------------------
class B_UNSCAF_TODO_TurretName : TODO_ParentTurretClass /* FILL: parent class */ {
	author = "Atlas510";
	scope = 2;
	scopeCurator = 2;
	displayName = "TODO Turret Display Name"; // FILL
	side = 1;
	faction = "B_ATLAS_UNSCAF";
	vehicleClass = "B_ATLAS_UNSCAF_TUR";      // FILL: pick category
	crew = "B_UNSCAF_Rifleman";               // FILL: default crew unit

	class EventHandlers {
		class CBA_Extended_EventHandlers {};
	};
	ALiVE_orbatCreator_owned = 1;
};

// TODO — Add more vehicle classes below following the same
//        template block.  Copy, update FILL fields, repeat.
