PetalburgBeach_MapScripts::
	.byte 0

PetalburgBeach_Entrance_MapScripts::
    map_script MAP_SCRIPT_ON_TRANSITION, PetalburgBeach_Entrance_OnTransition
    .byte 0

PetalburgBeach_Entrance_OnTransition:
	setflag FLAG_LANDMARK_PETALBURG_BEACH
	getplayerxy VAR_TEMP_D, VAR_RESULT
	end

PetalburgBeach_EventScript_Trainer2::
	trainerBattle_single TRAINER_PETALBURG_BEACH, Trainer2_Intro, Trainer2_Outro
	msgbox Trainer2_Postbattle, MSGBOX_AUTOCLOSE
	waitmessage
	end


Trainer2_Intro::
	.string "I am way too strong for you$"

Trainer2_Outro::
	.string "Ok maybe not$"

Trainer2_Postbattle::
	.string "My pokemon seems WAY stronger \nthan before$"
