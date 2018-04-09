/*--------------------------------------------------------------------------
    Author:		Maverick Applications
    Website:	https://maverick-applications.com

    You're not allowed to use this file without permission from the author!
---------------------------------------------------------------------------*/

// Configuration file for the navigation script

class maverick_navigation_cfg {

	class bindings {
		keyCode		= 49; // Keycodes can be found at https://community.bistudio.com/wiki/DIK_KeyCodes
		reqShift	= 0;
		reqAlt		= 0;
		reqCtrl		= 1;
	};

	option_list[] = {
		{"Текущий маршрут", "maverick\navigation\data\currentroute.paa", "!isNil 'mav_gps_v_markers'", "(ctrlParent (_this select 0)) createDisplay 'MAV_guiNavigationCurrent';"},
		{"Новый маршрут", "maverick\navigation\data\newroute.paa", "isNil 'mav_gps_v_markers'", "(ctrlParent (_this select 0)) createDisplay 'MAV_guiNavigationNew';"},
		{"Сохранит маршрут", "maverick\navigation\data\savedroutes.paa", "true", "(ctrlParent (_this select 0)) createDisplay 'MAV_guiNavigationSaved';"},
		{"GPS Настрйоки", "maverick\navigation\data\mapsettings.paa", "true", "(ctrlParent (_this select 0)) createDisplay 'MAV_guiNavigationSettings';"},
		{"GPS Информация", "maverick\navigation\data\help.paa", "false", "(ctrlParent (_this select 0)) createDisplay 'MAV_guiNavigationHelp';"}
	};

	class presets {
		class Altis {
			presetLocations[] = {

			};
		};
		class Malden {
			presetLocations[] = {

			};
		};
		class Stratis {
			presetLocations[] = {

			};
		};
		class Tanoa {
			presetLocations[] = {

			};
		};
	};

	class localization {

		// Display messages from around the navigation system
		msgStartPosInvalid = 		"Точка старта неверна";
		msgEndPosInvalid = 			"Точка назначения неверна";
		msgCheckpointInvalid = 		"Промежуточная точка неверна";
		msgNoRoadsegmentFound = 	"Невозможно найти дорогу в радиусе %1 метра(ов) в точке %2, отмена...";
		msgAbortCurrentRoute = 		"Вам необходимо закончить текущий маршрут что-бы использовать эту функцию!";
		msgSettingsSaved = 			"Настройки успешно сохранены!";
		msgPositionReset = 			"GPS GUI позиция была сброшена!";
		msgCalcRoadDirs = 			"Вычесляем направления дорог";
		msgCalcRoadDirsProgress = 	"Вычесляем направления дорог (%1/%2)";
		msgOneMinute = 				"&lt; 1 минута";
		msgSmallerThanMinute = 		"< 1 минуты";
		msgMinutesLeft = 			"%1 минут(а)";
		msgReachDestination = 		"Вы доберететесь до точки назначения через %1";
		msgFollowThenTurnLeft = 	"Следуйте дороге еще %1, потом поверните налево";
		msgFollowThenTurnRight = 	"Следуйте дороге еще %1, потом поверните направо";
		msgArrivedFormatted = 		"<t align='center'>Прибытие!</t>";
		msgReachedDestination = 	"Вы прибыли в точку назначения";
		msgNoRoadsFound = 			"Не найдено дорог";
		msgInvalidRoadSegment = 	"Нет доступного пути для этой дороги";
		msgCurrentLocation = 		"Текущая позиция";
		msgStart = 					"Старт";
		msgCheckpoint = 			"Промежуточная точка";
		msgDestination = 			"Место назначения";
		msgPressSpace = 			"Нажмите [SPACE] что-бы сохранить GUI позицию";
		msgGpsPosSaved = 			"GPS GUI позиция была сохранена!";
		msgNoRouteFound = 			"Путь не найден";
		msgTimedOut = 				"Время вышло... Попробуйте еще!";
		msgRouteFound = 			"Путь найден";
		msgRouteInfo = 				"Информация о пути";
		msgFrom = 					"Из";
		msgTo = 					"До";
		msgTotalDistance = 			"Полное расстояние";
		msgTotalravelTime = 		"Полное время поездки";
		msgRoadPreference = 		"Предпочтение дорог";
		msgRouteCalculate = 		"Вычисление пути...";
		msgCancelConfirm = 			"Вы уверенны что хотите отменить свой текущий маршрут?";
		msgCancelRoute = 			"Отменить маршрут";
		msgCancel = 				"Отмена";
		msgProceed = 				"Продолжить";
		msgNoRouteNameGiven = 		"Не заданно имя пути.";
		msgRouteNameLimit = 		"Имя пути превышает 30 символов!";
		msgIllegalChars = 			"Имя пути имеет запрещенные символы!";
		msgRouteLimit = 			"Вы достигли лимита сохраненных путей! Удалите один из ненужных.";
		msgRouteSaved = 			"Путь успешно сохранен!";
		msgRouteDeleted = 			"Путь успешно удален!";
		msgFinishRouteFirst = 		"Вам нужно либо закончить свой текщий маршрут, либо отменить его!";
		msgNoSavedRoutes = 			"Нет сохраненных путей...";
		msgTurnNow =				"Поаорачивайте сейчас";

		// Localization for the dialogs
		#define dialogMainMenu 		"Навигатор - Меню"
		#define dialogClose 		"Закрыть"
		#define dialogCurrentRoute 	"Навигатор - Текущий маршрут"
		#define dialogResetRoute 	"Отменить маршрут"
		#define dialogRecalculate	"Пересчитать маршрут"
		#define dialogNewRoute 		"Навигатор - Новый маршрут"
		#define dialogCalcRoute		"Вычислить маршрут"
		#define dialogBack 			"Назад"
		#define dialogStart 		"Старт"
		#define dialogLoad 			"Загрузить"
		#define dialogCheckpoint 	"Промежуточная точка"
		#define dialogDestination 	"Точка назначения"
		#define dialogCommonDest	"Частоиспользуемые точки назначения"
		#define dialogSavedRouts	"Сохраненные пути"
		#define dialogMenuSettings	"Навигатор - Настройки"
		#define dialogSave			"Сохранить"
		#define dialogUnitSpeed		"Еденица измерения"
		#define dialogPreference	"Предпочтительный путь"
		#define dialogGpsPos		"GPS GUI Позиция"
		#define dialogCustomize		"Настроить"
		#define dialogReset			"Сбросить"
		#define dialogGpsColor		"GPS Цвет"
		#define dialogDragHere		"ПЕРЕТЯНУТЬ СЮДА"
		#define dialogSavedTitle	"Навигатор - Сохраненные пути"
		#define dialogDelete		"Удалить"
		#define dialogCalcProgress	"<t size='1.2' align='center'>Вычисление пути...</t>"
		#define dialogNavigation	"навигация"
		#define dialogSaveRoute		"Навигатор - Сохранить путь"
		#define dialogRouteName		"Введите название пути"
		#define dialogCalculating	"Вычисление..."
		#define dialogRouteInfo		"Информация о пути"
		#define dialogRouteMapPrev	"Предпросмотр пути"
		#define dialogVoiceSetting	"Голосовые оповещения"
		#define dialogCalculationH	"Навигатор - Вычисления пути"
	};

	/*
		You should only add / remove / edit any of these parameters if you were advised to do so by Maverick Applications
		Unauthorized Changes can lead to a complete failure of the navigation system!
	*/
	class AlgorithmParameters {

		class Chernarus_Summer {
			greedy = 3.2;
		};

		class australia {
			greedy = 3.2;
		};

		class Malden {
			radius = 45;
		};

		class Sara {
			radius = 66;
		};
	};

	// Do not touch below
	#include "sounds\voicepacks\config.cpp"
};

//Do not touch below
#include "gui\gps_gui_master.cpp"