_time = 60 * 60;

_vehicle = _this;

_mass = (getMass _vehicle);

_maxSpeed = getNumber (configFile >> "CfgVehicles" >> typeOf _vehicle >> "maxSpeed");

_weights = [_vehicle] call UnionClient_system_vehicleWeight;
_maxStorage = _weights select 0;
_storage = _weights select 1;

if (isNil "_maxStorage") then {
	_maxStorage = 1;
	_storage = 0;
};

while {(vehicle player) isEqualTo _vehicle} do {
	if (!aLive _vehicle) exitWith {};
	if (isEngineOn _vehicle) then {
		private "_fuelConsumption";
		if (speed _vehicle >= 1) then {
			_storage = ([_vehicle] call UnionClient_system_vehicleWeight) select 1;
			_d_storage = _storage/_maxStorage;
			_d_speed = (speed _vehicle)/_maxSpeed;
			_fuelConsumption = (_d_storage+_d_speed)/(_time*20)+(_mass/250000000);
			if (_vehicle isKindOf "Air") then {
				_fuelConsumption = _fuelConsumption/4;
			};
			
		} else {
			_fuelConsumption = (1/36000)+(_mass/2500000000);
		};
		[_vehicle,(fuel _vehicle)-_fuelConsumption] remoteExecCall ["UnionClient_system_setFuel",_vehicle];
	};
	uiSleep 0.1;
};
