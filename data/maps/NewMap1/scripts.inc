NewMap1_MapScripts::
	.byte 0


negro_sombra1::
# 5 "data/maps/NewMap1/scripts.pory"
	lock
# 6 "data/maps/NewMap1/scripts.pory"
	msgbox negro_sombra1_Text_0
# 7 "data/maps/NewMap1/scripts.pory"
	special ChangePName
# 8 "data/maps/NewMap1/scripts.pory"
	msgbox negro_sombra1_Text_1
# 9 "data/maps/NewMap1/scripts.pory"
	message negro_sombra1_Text_2
# 10 "data/maps/NewMap1/scripts.pory"
	multichoice 0, 25, MULTI_ELEMENT, 1
# 11 "data/maps/NewMap1/scripts.pory"
	closemessage
# 12 "data/maps/NewMap1/scripts.pory"
	setvar VAR_ELEMENT, VAR_RESULT
# 13 "data/maps/NewMap1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq negro_sombra1_2
# 17 "data/maps/NewMap1/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq negro_sombra1_3
# 21 "data/maps/NewMap1/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq negro_sombra1_4
# 27 "data/maps/NewMap1/scripts.pory"
	giveitem ITEM_ZAP_PLATE, 1
negro_sombra1_1:
# 29 "data/maps/NewMap1/scripts.pory"
	msgbox negro_sombra1_Text_3
# 30 "data/maps/NewMap1/scripts.pory"
	msgbox negro_sombra1_Text_4
# 31 "data/maps/NewMap1/scripts.pory"
	trainerbattle_single TRAINER_TIMMY, negro_sombra1_Text_5, negro_sombra1_Text_6
# 32 "data/maps/NewMap1/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 33 "data/maps/NewMap1/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq negro_sombra1_10
negro_sombra1_9:
# 37 "data/maps/NewMap1/scripts.pory"
	release
	return

negro_sombra1_2:
# 15 "data/maps/NewMap1/scripts.pory"
	giveitem ITEM_FLAME_PLATE, 1
	goto negro_sombra1_1

negro_sombra1_3:
# 19 "data/maps/NewMap1/scripts.pory"
	giveitem ITEM_SPLASH_PLATE, 1
	goto negro_sombra1_1

negro_sombra1_4:
# 23 "data/maps/NewMap1/scripts.pory"
	giveitem ITEM_EARTH_PLATE, 1
	goto negro_sombra1_1

negro_sombra1_10:
# 35 "data/maps/NewMap1/scripts.pory"
	warp MAP_INSIDE_OF_TRUCK
	goto negro_sombra1_9


negro_sombra1_Text_0:
# 6 "data/maps/NewMap1/scripts.pory"
	.string "¿Que haces aca?\n"
	.string "No deberias estar aqui...\p"
	.string "Bueno, no importa.\p"
	.string "Me presento, soy ???\p"
	.string "Cuentame sobre ti.\p"
	.string "¿Cual es tu nombre?$"

negro_sombra1_Text_1:
# 8 "data/maps/NewMap1/scripts.pory"
	.string "Quiero proponerte un intercambio\p"
	.string "A cambio debes darme algo que yo quiero\p"
	.string "Dime$"

negro_sombra1_Text_2:
# 9 "data/maps/NewMap1/scripts.pory"
	.string "¿Cual es tu elemento favorito?$"

negro_sombra1_Text_3:
# 29 "data/maps/NewMap1/scripts.pory"
	.string "Perfecto\n"
	.string "Ahora dame lo que me pertenece.\p"
	.string "Quiero mi Flauta Azur.$"

negro_sombra1_Text_4:
# 30 "data/maps/NewMap1/scripts.pory"
	.string "¿Como?\l"
	.string "¿Que no la tienes?$"

negro_sombra1_Text_5:
# 31 "data/maps/NewMap1/scripts.pory"
	.string "Entonces tendre que quitarte la vida$"

negro_sombra1_Text_6:
# 31 "data/maps/NewMap1/scripts.pory"
	.string "XD._.$"
