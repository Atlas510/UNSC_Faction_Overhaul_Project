params ["_unit", ["_isMedic", false]];
if (isNull _unit) exitWith {};

removeHeadgear _unit;

if (_isMedic) then {
	_unit addHeadgear "TCP_H_Helmet_CH43A_White";
} else {
	_unit addHeadgear "TCP_H_Helmet_CH43A_Olive";
};