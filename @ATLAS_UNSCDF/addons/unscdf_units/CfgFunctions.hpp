class CfgFunctions {
	class ATLAS {
		tag = "ATLAS";

		class Uniforms {
			file = "scripts";
			class randomizeMarineUniform {};
		};

		class Kit {
			file = "unscdf_units\functions";
			// Role-aware equipment randomizer (headgear, vest, NVGs, attachments, extras).
			// Supports separate ODST/Marine pools and exempts specialist roles.
			class randomizeKit {};
		};
	};
};