params ["_unit"];
if (isNull _unit) exitWith {};
if (!local _unit) exitWith {};

private _uniformPool = [
	"TCP_U_B_CBUU_FieldTop_Full_Bloused_Kneepads_Urban",
	"TCP_U_B_CBUU_FieldTop_Full_Bloused_Unzipped_Kneepads_Urban",
	"TCP_U_B_CBUU_FieldTop_Full_Bloused_Unzipped_Urban",
	"TCP_U_B_CBUU_FieldTop_Full_Bloused_Urban",

	"TCP_U_B_CBUU_FieldTop_QuarterRoll_Bloused_Kneepads_Urban",
	"TCP_U_B_CBUU_FieldTop_QuarterRoll_Bloused_Unzipped_Kneepads_Urban",
	"TCP_U_B_CBUU_FieldTop_QuarterRoll_Bloused_Unzipped_Urban",
	"TCP_U_B_CBUU_FieldTop_QuarterRoll_Bloused_Urban",

	"TCP_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Bloused_Kneepads_Urban",
	"TCP_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Bloused_Unzipped_Kneepads_Urban",
	"TCP_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Bloused_Unzipped_Urban",
	"TCP_U_B_CBUU_FieldTop_QuarterRoll_Gloves_Bloused_Urban",

	"TCP_U_B_CBUU_TacShirt_Full_Bloused_Kneepads_Urban",
	"TCP_U_B_CBUU_TacShirt_Full_Bloused_Unzipped_Kneepads_Urban",
	"TCP_U_B_CBUU_TacShirt_Full_Bloused_Unzipped_Urban",
	"TCP_U_B_CBUU_TacShirt_Full_Bloused_Urban",
	"TCP_U_B_CBUU_TacShirt_Full_Gloves_Bloused_Kneepads_Urban",
	"TCP_U_B_CBUU_TacShirt_Full_Gloves_Bloused_Unzipped_Kneepads_Urban",
	"TCP_U_B_CBUU_TacShirt_Full_Gloves_Bloused_Unzipped_Urban",
	"TCP_U_B_CBUU_TacShirt_Full_Gloves_Bloused_Urban",

	"TCP_U_B_CBUU_TacShirt_HalfRoll_Bloused_Kneepads_Urban",
	"TCP_U_B_CBUU_TacShirt_HalfRoll_Bloused_Unzipped_Kneepads_Urban",
	"TCP_U_B_CBUU_TacShirt_HalfRoll_Bloused_Unzipped_Urban",
	"TCP_U_B_CBUU_TacShirt_HalfRoll_Bloused_Urban",
	"TCP_U_B_CBUU_TacShirt_HalfRoll_Gloves_Bloused_Kneepads_Urban",
	"TCP_U_B_CBUU_TacShirt_HalfRoll_Gloves_Bloused_Unzipped_Kneepads_Urban",
	"TCP_U_B_CBUU_TacShirt_HalfRoll_Gloves_Bloused_Unzipped_Urban",
	"TCP_U_B_CBUU_TacShirt_HalfRoll_Gloves_Bloused_Urban",

	"TCP_U_B_CBUU_TacShirt_QuarterRoll_Bloused_Kneepads_Urban",
	"TCP_U_B_CBUU_TacShirt_QuarterRoll_Bloused_Unzipped_Kneepads_Urban",
	"TCP_U_B_CBUU_TacShirt_QuarterRoll_Bloused_Unzipped_Urban",
	"TCP_U_B_CBUU_TacShirt_QuarterRoll_Bloused_Urban",
	"TCP_U_B_CBUU_TacShirt_QuarterRoll_Gloves_Bloused_Kneepads_Urban",
	"TCP_U_B_CBUU_TacShirt_QuarterRoll_Gloves_Bloused_Unzipped_Kneepads_Urban",
	"TCP_U_B_CBUU_TacShirt_QuarterRoll_Gloves_Bloused_Unzipped_Urban",
	"TCP_U_B_CBUU_TacShirt_QuarterRoll_Gloves_Bloused_Urban"
];

private _newUniform = selectRandom _uniformPool;
private _uniformItems = uniformItems _unit;

removeUniform _unit;
_unit forceAddUniform _newUniform;
{ _unit addItemToUniform _x; } forEach _uniformItems;