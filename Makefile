app: Player.h Team.h
	g++ -g Player.cpp Team.cpp main.cpp -o build/main.out
	build/main.out

player_test: Player.h
	g++ -g Player.cpp player_test.cpp -o build/player.out
	build/player.out