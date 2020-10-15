all : main

main : src/main.cpp
	g++ -omain src/main.cpp src/controller.cpp src/player.cpp src/view.cpp -lSDL2 -lSDL2_image -I./include