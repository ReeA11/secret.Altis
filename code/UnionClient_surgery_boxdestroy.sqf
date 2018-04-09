/*

	Filename: 	fn_surgeryBoxDestroy.sqf
	Project: 	Verum Altis Life RPG
	Author:		Merrick & Affect
	Steam:		76561198006439083 & 76561198053094990
	Web:		http://oursite.ru/

*/
ShopBoxCamera cameraEffect ["terminate", "back"];
deleteVehicle ShopBoxVehicle;
deleteVehicle ShopBoxBackgroundObject;
camDestroy ShopBoxCamera;