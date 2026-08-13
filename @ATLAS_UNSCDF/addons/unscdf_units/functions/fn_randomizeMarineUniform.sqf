/*
	File: fn_randomizeMarineUniform.sqf
	Usage:
		[_unit] call ATLAS_fnc_randomizeMarineUniform;
*/

params ["_unit"];
if (isNull _unit) exitWith {};
if (!local _unit) exitWith {};

private _uniformPool = [
	"WOLFoT_TcP_UNSC_A_CBBU_WDL2_FT_Full_BU_Uni",
	"WOLFoT_TcP_UNSC_A_CBBU_WDL2_FT_Full_B_Uni",
	"WOLFoT_TcP_UNSC_A_CBBU_WDL2_FT_Full_GBU_Uni",
	"WOLFoT_TcP_UNSC_A_CBBU_WDL2_FT_Full_GB_Uni",
	"WOLFoT_TcP_UNSC_A_CBBU_WDL2_FT_Full_GU_Uni",
	"WOLFoT_TcP_UNSC_A_CBBU_WDL2_FT_Full_G_Uni",
	"WOLFoT_TcP_UNSC_A_CBBU_WDL2_FT_Full_U_Uni",
	"WOLFoT_TcP_UNSC_A_CBBU_WDL2_FT_Full_Uni",
	"WOLFoT_TcP_UNSC_A_CBBU_WDL2_TS_TB_Uni",
	"WOLFoT_TcP_UNSC_A_CBBU_WDL2_TS_TBG_Uni",
	"WOLFoT_TcP_UNSC_A_CBBU_WDL2_TS_TG_Uni",
	"WOLFoT_TcP_UNSC_A_CBBU_WDL2_TS_UTB_Uni",
	"WOLFoT_TcP_UNSC_A_CBBU_WDL2_TS_UTBG_Uni",
	"WOLFoT_TcP_UNSC_A_CBBU_WDL2_TS_UTG_Uni",
	"WOLFoT_TcP_UNSC_A_CBBU_WDL2_TS_UT_Uni",
	"WOLFoT_TcP_UNSC_A_CBBU_WDL2_TS_T_Uni",
	"WOLFoT_TcP_UNSC_A_CBBU_WDL2_FT_Quarter_BU_Uni",
	"WOLFoT_TcP_UNSC_A_CBBU_WDL2_FT_Quarter_B_Uni",
	"WOLFoT_TcP_UNSC_A_CBBU_WDL2_FT_Quarter_GBU_Uni",
	"WOLFoT_TcP_UNSC_A_CBBU_WDL2_FT_Quarter_GB_Uni",
	"WOLFoT_TcP_UNSC_A_CBBU_WDL2_FT_Quarter_GU_Uni",
	"WOLFoT_TcP_UNSC_A_CBBU_WDL2_FT_Quarter_G_Uni",
	"WOLFoT_TcP_UNSC_A_CBBU_WDL2_FT_Quarter_U_Uni",
	"WOLFoT_TcP_UNSC_A_CBBU_WDL2_FT_Quarter_Uni"
];

if (_uniformPool isEqualTo []) exitWith {};

private _newUniform = selectRandom _uniformPool;
if ((uniform _unit) isEqualTo _newUniform) exitWith {};

private _uniformItems = uniformItems _unit;

removeUniform _unit;
_unit forceAddUniform _newUniform;

{
	_unit addItemToUniform _x;
} forEach _uniformItems;