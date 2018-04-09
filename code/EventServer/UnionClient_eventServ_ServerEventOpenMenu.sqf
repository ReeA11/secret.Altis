#include "..\..\script_macros.hpp"
	disableSerialization;
	
	if(FETCH_CONST(life_adminlevel) == 0) exitWith {closeDialog 0;};
	
	createDialog "EventDiag";
	
	if(isNull (findDisplay 7777)) then {
	if !(createDialog "EventDiag") exitWith {};
    };
    
	
    _ListBox = CONTROL(7777,1500);
	lbClear _ListBox;
	
		_ListBox lbAdd format["%1","Список ресурсов"];
		
		_mass = [[[2324.73,22338.7,-0.0144882],'Уран'],[[4906.69,20454.5,-0.000137329],'Кокаин'],[[8085.05,22617.5,-0.000114441],'Песок'],[[12265.7,20615.4,-9.91821e-005],'Табак'],[[4412.91,12596.1,-4.57764e-005],'Медь'],[[9185.96,13990.4,0],'Нефть'],[[11545.3,7051.45,7.62939e-006],'Марька'],[[14330.9,21869.8,0.000267029],'Лес'],[[19890.2,14738.3,8.39233e-005],'Героин'],[[17070.1,11356.7,-3.05176e-005],'Камень'],[[16559.8,9088.21,-1.71661e-005],'Алмазы'],[[19128.4,9911.15,0.000152588],'Рожь'],[[18928.6,6698.6,-1.90735e-005],'Дрожжи'],[[22136.7,17082.6,-4.76837e-005],'Хлопок'],[[19856.1,17891.9,-0.000225067],'Железо'],[[23835.4,18603.5,4.76837e-007],'Соль']];
		
		{
		_pos = _x select 0;
        _name = _x select 1;

        _infomass = [];
	    _infomass append [_pos,_name];		

		_ListBox lbAdd format["%1",_name];
        _ListBox lbSetData [(lbSize _ListBox)-1,str(_infomass)];		
		
		} forEach _mass;