#include "CfgPatches.hpp"
#include "CfgFaction.hpp"
#include "CfgEditor.hpp"
#include "CfgFunctions.hpp"

// ---------------------------------------------------------------------------
// Macro: ALiVE uniform randomiser event handler for AF personnel
// Fill in the function name once fn_randomizeAFUniform is implemented.
// ---------------------------------------------------------------------------
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
