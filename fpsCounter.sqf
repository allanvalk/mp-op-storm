if (!isServer) exitWith {};

fps = 0;
serverLoad = [0,0,0,0];

publicVariable 'fps';
publicVariable 'serverLoad';

while {true} do {
	fps = diag_fps;
	serverLoad = diag_activeScripts;
	publicVariable 'fps';
	publicVariable 'serverLoad';
	"serverFps" setMarkerText str fps;
	"serverMemory" setMarkerText str serverLoad;
	sleep 5;
};