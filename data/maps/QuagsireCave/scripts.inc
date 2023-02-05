QuagsireCave_MapScripts::
	.byte 0

QuagsireCave_EventScript_Trainer1::
	trainerBattle_single TRAINER_QUAGSIRE_CAVE, Trainer1_Intro, Trainer1_Outro
	end


Trainer1_Intro::
	.string "I captured a pokemon holding a strange CD$"

Trainer1_Outro::
	.string "Maybe the strange CD could make him evolve ?$"
