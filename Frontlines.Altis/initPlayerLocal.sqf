if !(hasInterface) exitWith {
	[] remoteExecCall ["AW_fnc_initHC",2];
};

waitUntil {!isNil "AW_serverReady" && {AW_serverReady && {!isNull player && {!isNull (findDisplay 46)}}}};

addMissionEventHandler ["HandleChatMessage",{_this call AW_fnc_handleChatMessage}];
addMissionEventHandler ["Map",{_this call AW_fnc_checkMap}];
player addEventHandler ["HandleRating",{0}];
player addEventHandler ["GetInMan",{_this call AW_fnc_getInMan}];
player addEventHandler ["SeatSwitchedMan",{_this call AW_fnc_seatSwitchedMan}];
player addEventHandler ["GetOutMan",{_this call AW_fnc_getOutMan}];
player addEventHandler ["Respawn",{_this call AW_fnc_respawn}];

call AW_fnc_initArsenal;
call AW_fnc_initCBAsettings;
call AW_fnc_initDiary;
call AW_fnc_createAceActions;

private _defaultLoadout = getArray(missionConfigFile >> "Blufor_Setup" >> "AW_defaultLoadout");
["Default",_defaultLoadout] call ace_arsenal_fnc_addDefaultLoadout;
player setUnitLoadout _defaultLoadout;

waitUntil {time > 0};
if (AW_showIntro) then {
	createDialog "RscDisplayWelcome";
	private _display = findDisplay 999999;
	private _text = _display displayCtrl 1100;
	private _message = "
		<img align='center' size='12' shadow='0'/>
		<t align='center' size='6' shadow='0'><br/>TWC Frontlines</t><br/>
		Welcome to TWC Frontlines.<br/><br/>
	";

	_text ctrlSetStructuredText (parseText _message);
	(ctrlPosition _text) params ["_xPos","_yPos","_width"];
	private _height = ctrlTextHeight _text;
	_text ctrlSetPosition [_xPos,_yPos,_width,_height];
	_text ctrlCommit 0;
	waitUntil {isNull _display};
};

658 cutRsc ["AW_HUD","PLAIN",-1];
AW_uiHandle = [AW_fnc_updateUI,AW_uiUpdateInterval,[[0],true,""]] call CBA_fnc_addPerFrameHandler;

if (getPlayerUID player in AW_staffUIDs) then {
	[player] remoteExecCall ["AW_fnc_assignZeus",2];
};

call AW_fnc_initDeployMenu;
