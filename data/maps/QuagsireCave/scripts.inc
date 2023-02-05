QuagsireCave_MapScripts::
	.byte 0

QuagsireCave_EventScript_Trainer1::
	trainerBattle_single TRAINER_QUAGSIRE_CAVE, Trainer1_Intro, Trainer1_Outro
	msgbox Trainer1_Postbattle, MSGBOX_AUTOCLOSE
	waitmessage
	end


QuagsireCave_ItemScript_DubiousDisc::
	finditem ITEM_DUBIOUS_DISC
	end


Trainer1_Intro::
	.string "I just caught a pokemon holding \na strange CD$"

Trainer1_Outro::
	.string "Maybe the strange CD could \nmake him evolve ?$"

Trainer1_Postbattle::
	.string "Was it WOOPER ?$"
