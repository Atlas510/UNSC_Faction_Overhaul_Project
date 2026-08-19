class CfgFunctions
{
	class ATLAS
	{
		tag = "ATLAS";

		class Uniforms
		{
			file = "unscaf_units\functions";
			// Randomises AF personnel uniform appearance on spawn.
			class randomizeAFUniform {};
		};

		class Kit
		{
			file = "unscaf_units\functions";
			// Role-aware equipment randomiser (headgear, vest, NVGs, attachments, extras).
			class randomizeKit {};
		};
	};
};
