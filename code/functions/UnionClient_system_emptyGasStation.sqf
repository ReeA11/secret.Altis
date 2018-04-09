/*

	Filename: 	UnionClient_system_emptyGasStation.sqf
	Project: 	Verum Altis Life RPG
	Author:		Merrick & Affect
	Steam:		76561198006439083 & 76561198053094990
	Web:		http://oursite.ru/

*/
#include "..\..\script_macros.hpp"

private ["_pump","_pumps"];

switch (worldName) do {
	case "Altis" : {
		{
			{
				_x setFuelCargo 0;
				_x addAction ["<t color=""#d6ff33"">Заправить технику</t>",VerumClient_refillVehicle,"",0,false,false,"","!life_action_inUse",5];
			} forEach nearestObjects [(_x select 0),["Land_fs_feed_F","Land_FuelStation_Feed_F","Land_FuelStation_01_pump_F","Land_FuelStation_Shed_F","Land_FuelStation_01_pump_malevil_F"],50];
		} forEach editPriceFuel_Data;
	}; 
	case "Tanoa" : {
		_pumps = [["Land_FuelStation_02_pump_F",[7976.94,7426.98,0.227515]],["Land_FuelStation_02_pump_F",[7978.25,7419.11,0.13509]],["Land_FuelStation_01_pump_F",[7369.15,8002.09,0.0264599]],["Land_FuelStation_01_pump_F",[7366.7,7995.42,0.0266895]],["Land_FuelStation_01_pump_F",[7360.96,8005.08,0.0265808]],["Land_FuelStation_01_pump_F",[7358.5,7998.4,0.0264683]],["Land_FuelStation_02_pump_F",[8318.96,9708.93,0.182608]],["Land_FuelStation_02_pump_F",[8320.77,9712.13,0.212898]],["Land_FuelStation_01_pump_F",[6886.99,7490.55,-2.38419e-007]],["Land_FuelStation_02_pump_F",[10826.7,6489.82,0.202434]],["Land_FuelStation_02_pump_F",[8970.44,10332.3,0.186068]],["Land_FuelStation_02_pump_F",[10935.2,9856.06,-0.00308228]],["Land_FuelStation_02_pump_F",[10940.9,9855.39,-0.00172424]],["Land_FuelStation_02_pump_F",[11146.2,5152.01,0.204342]],["Land_FuelStation_02_pump_F",[11154.1,5152.44,0.203659]],["Land_FuelStation_02_pump_F",[5174.06,8806.32,0.203433]],["Land_FuelStation_01_pump_F",[12613.3,7582.83,0.000371933]],["Land_FuelStation_01_pump_F",[12617.5,7590.52,0.00034523]],["Land_FuelStation_01_pump_F",[12618.1,7580.01,0.000326157]],["Land_FuelStation_01_pump_F",[5681.72,10164.6,0.261144]],["Land_FuelStation_01_pump_F",[12622.3,7587.7,0.000349045]],["Land_FuelStation_01_pump_F",[5685.9,10173,0.273206]],["Land_FuelStation_01_pump_F",[5677.78,10173.8,0.276672]],["Land_FuelStation_01_pump_F",[5683.21,10182,0.187238]],["Land_FuelStation_01_pump_F",[5409.42,9905.05,0.238398]],["Land_FuelStation_01_pump_F",[5409.69,9913.75,0.238326]],["Land_FuelStation_01_pump_F",[5403.54,9905.04,0.23874]],["Land_FuelStation_01_pump_F",[5403.81,9913.74,0.238267]],["Land_FuelStation_01_pump_F",[5810.65,10816.9,0.276737]],["Land_FuelStation_01_pump_F",[5810.71,10825.1,0.273184]],["Land_FuelStation_01_pump_F",[5801.93,10816.8,0.27668]],["Land_FuelStation_01_pump_F",[5801.99,10825,0.273181]],["Land_FuelStation_01_pump_F",[5793.12,10817,0.276811]],["Land_FuelStation_01_pump_F",[5793.18,10825.1,0.273188]],["Land_FuelStation_02_pump_F",[8494.33,12432,0.141418]],["Land_FuelStation_02_pump_F",[8492.98,12438,0.174957]],["Land_FuelStation_02_pump_F",[8492.11,12441.7,0.215363]],["Land_FuelStation_01_pump_F",[5771.25,4239.42,-6.19888e-005]],["Land_FuelStation_01_pump_F",[5776.41,4232.31,2.14577e-005]],["Land_FuelStation_01_pump_F",[5767.14,4236.94,-3.62396e-005]],["Land_FuelStation_01_pump_F",[5781.14,4224.93,2.43187e-005]],["Land_FuelStation_01_pump_F",[5771.14,4229.01,2.3365e-005]],["Land_FuelStation_01_pump_F",[5775.74,4221.55,2.43187e-005]],["Land_FuelStation_02_pump_F",[5388.7,4090.67,0.190134]],["Land_FuelStation_02_pump_F",[5379.63,4092.96,0.190678]],["Land_FuelStation_02_pump_F",[5594.25,12508.2,0.190352]],["Land_FuelStation_02_pump_F",[11630.9,2998.93,0.207578]],["Land_FuelStation_02_pump_F",[11641.9,2990.91,0.208196]],["Land_FuelStation_01_pump_F",[6600.12,13076.3,0.002388]],["Land_FuelStation_01_pump_F",[6602.45,13082,0.00239182]],["Land_FuelStation_01_pump_F",[6592,13079.6,0.00238228]],["Land_FuelStation_02_pump_F",[14364.7,8743.13,0.216024]],["Land_FuelStation_01_pump_F",[6594.32,13085.3,0.00239182]],["Land_FuelStation_01_pump_F",[6583.86,13082.9,0.00238419]],["Land_FuelStation_01_pump_F",[6586.18,13088.6,0.00239182]],["Land_FuelStation_01_pump_F",[9953.85,13467,0.000184059]],["Land_FuelStation_01_pump_F",[9960.31,13466.6,0.000184059]],["Land_FuelStation_01_pump_F",[9954.45,13475.7,0.000184059]],["Land_FuelStation_01_pump_F",[9960.92,13475.4,0.000184059]],["Land_FuelStation_01_pump_F",[9954.69,13484.5,0.000184059]],["Land_FuelStation_01_pump_F",[9961.15,13484.2,0.000184059]],["Land_FuelStation_02_pump_F",[8956.32,13677.8,0.222528]],["Land_FuelStation_02_pump_F",[8952.51,13678,0.222528]],["Land_FuelStation_02_pump_F",[8954.49,13678,0.222528]],["Land_FuelStation_01_pump_F",[11618.7,13053,-0.000164986]],["Land_FuelStation_01_pump_F",[11627,13050.4,-0.000196934]],["Land_FuelStation_01_pump_F",[11635.3,13047.4,-0.000175476]],["Land_FuelStation_01_pump_F",[11620.6,13058.4,-0.000120163]],["Land_FuelStation_01_pump_F",[11629,13055.8,-0.000120163]],["Land_FuelStation_01_pump_F",[11637.2,13052.8,-0.000120163]],["Land_FuelStation_01_pump_F",[11694.3,2271.39,0.0244508]],["Land_FuelStation_01_pump_F",[11686.6,2267.25,0.0264068]],["Land_FuelStation_01_pump_F",[11697.6,2265.13,0.024292]],["Land_FuelStation_01_pump_F",[11690,2260.98,0.0262642]],["Land_FuelStation_02_pump_F",[2463.11,7430.66,0.196864]],["Land_FuelStation_02_pump_F",[2451.63,7434.66,0.191422]],["Land_FuelStation_02_pump_F",[14261,11512.9,0.000572205]],["Land_FuelStation_02_pump_F",[14264.9,11508.8,-0.00118828]],["Land_FuelStation_02_pump_F",[3029.57,11316.1,0.0899534]],["Land_FuelStation_02_pump_F",[2137.39,3360.78,0.0604992]],["Land_FuelStation_02_pump_F",[2132.15,3360.41,0.0531025]],["Land_FuelStation_01_pump_F",[1873.69,12121.5,0.000513554]],["Land_FuelStation_01_pump_F",[1874.1,12127.6,0.000473499]],["Land_FuelStation_01_pump_F",[1864.93,12122,0.000376225]],["Land_FuelStation_01_pump_F",[1865.37,12128,0.000465393]]];
		{
			_pump = nearestObject [_x select 1, _x select 0];
			_pump setFuelCargo 0;
			_pump addAction ["<t color=""#d6ff33"">Заправить технику ($3 за литр)</t>",UnionClient_system_refuelVehicle,"",0,false,false,"","!life_action_inUse",5];
			_pump addAction [localize "STR_MF_24hShop",UnionClient_system_weaponShopMenu,"shop24",0,false,false,"","",5];
		} forEach _pumps;
	}; 
	default {};
};


VariableResult