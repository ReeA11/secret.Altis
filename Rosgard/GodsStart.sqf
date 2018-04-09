params["_Zone","_Statua"];
private["_GodsGangs"];
if(isNil{(group player)getVariable "gang_name"})exitWith{};

_Statua addAction["Помолиться",RosFncGodMol,"",0,false,false,"","playerSide == civilian && !isNil {(group player) getVariable 'gang_owner'}"];

"RosgardGods" cutRsc["RosgardGods","PLAIN"];
[]spawn
{
	while{GodsTime>0}do
	{
		((uiNamespace getVariable["RosgardGods",displayNull])displayCtrl 24903)CtrlSetText format["%1",[GodsTime,"MM:SS"] call BIS_fnc_secondsToString];
		_GodsGangs = call RosFncGodsGangPoints;
		if !(_GodsGangs isEqualTo [])then{((uiNamespace getVariable["RosgardGods",displayNull])displayCtrl 24901)CtrlSetText format["%1",_GodsGangs select 0];};
		((uiNamespace getVariable["RosgardGods",displayNull])displayCtrl 24902)CtrlSetText format["%1",GodsZone select 1];
		sleep 0.1;
	};
};