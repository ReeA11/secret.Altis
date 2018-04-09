_editPriceFuel_Data = ["SELECT position FROM gasStations",2,true] call DB_fnc_asyncCall; editPriceFuel_Data = [];    
{ 
	editPriceFuel_Data = editPriceFuel_Data + [(_x select 0) call DB_fnc_mresToArray]; 
} forEach _editPriceFuel_Data; 
 
publicVariable "editPriceFuel_Data";

while {true} do {
	
	uiSleep 5*60;
};

editFuel_Data

["[]","[]","[]","[]"]

