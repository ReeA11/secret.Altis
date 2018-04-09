/*
	Author: Maverick Applications
	Desc: Altis Life Shipwreck
*/

//Customize your settings to fit your server setup!
class Maverick_Shipwrecks1 {

    //How often (in seconds) should a shipwreck spawn, if no wreck is on the map?
    ShipwreckInterval = 3600; //1800 = 30min

    //Define the possible locations for your shipwrecks.
    //getPosATL format -> Get the position via: diag_log(getPosATL player) -> replace the [] with {}
	Positions[] = {
        {15804.7,15362,0},
		{14367.9,4066.1,0},
		{2464.64,8077.89,0},
        {17033.6,21411.3,0}
	};

    //Define the radius, in which the wreck randomly spawns around the given center position
    Radius = 250;

    //Define the possible sets of virtual items the user can loot from the wreck.
	ShipLoot[] = {
		//{ { "itemname1", amount }, { "itemname2", amount }, { "itemname3", amount } }
        { { "uraniumc", 60 } },
		{ { "roma", 160 }, { "cigar", 160 } },
		{ { "methp", 85 } }
	};

	//What shall be displayed as text to gather the items from the ship? (The text of the addAction ingame)
	ShipLootText = "Достать груз";

    //The message when the user has got all the loot successfully.
    ShipLootSuccess = "Вы успешно вытянули груз!";

    //The message in case something fails, or the user can not carry all the items.
    ShipLootFail = "Вы не можети унести весь груз!";

	//Define the message, that should appear when a shipwreck spawns (broadcasted to all clients).
	SpawnMSG = "ИНФОРМАЦИЯ\n\nПо информации с материка стало известно, что в водах нашего острова во время последней бури затонул корабль с контрабандой!";

    //Define the message, that should appear when a shipwreck disappears after a user looted it (broadcasted to all clients).
	DeleteMSG = "ИНФОРМАЦИЯ\n\nМесто кораблекрушения было найдено!";
};