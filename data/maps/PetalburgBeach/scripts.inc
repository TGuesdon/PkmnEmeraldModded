PetalburgBeach_MapScripts::
	.byte 0

PetalburgBeach_Entrance_MapScripts::
    map_script MAP_SCRIPT_ON_TRANSITION, PetalburgBeach_Entrance_OnTransition
    .byte 0

PetalburgBeach_Entrance_OnTransition:
	setflag FLAG_LANDMARK_PETALBURG_BEACH
	getplayerxy VAR_TEMP_D, VAR_RESULT
	end
