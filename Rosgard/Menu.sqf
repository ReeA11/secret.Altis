private["_control"];
RosProductionZones =
[
	["lead_1","Медный рудник",[[4454.88,12624.3,3.8147e-006],31]],
	["iron_1","Железный рудник",[[19884.6,17863.4,-0.000831604],182]],
	["diamond_1","Алмазный рудник",[[16601,9055.5,0],185]],
	["salt_1","Соляная шахта",[[23822.6,18563,0],185]],
	["Oil_1","Залеж нефти 1",[[9201.72,19321.1,0.000640869],309]],
	["oil_2","Залеж нефти 2",[[9202,13943.9,-1.90735e-006],186]]
];
RosProductionZone = [];
RosProductionTimer = 10;
RosProductionProcent = 10;
createDialog "RosgardDialogMain";
lbClear 7401;
_control = ((findDisplay 7400)displayCtrl 7401);
{
	_control lbAdd format["%1",_x select 1];
	_control lbSetData[(lbSize _control)-1,str(_forEachIndex)];
}foreach RosProductionZones;
lbSetCurSel[7401,0];
sliderSetRange[7403,10,60];
CtrlSetText[7402,"10"];
sliderSetRange[7404,10,50];
CtrlSetText[7404,"10"];