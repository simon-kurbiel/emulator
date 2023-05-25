INCLUDES= -I ./include
FLAGS= -g
all:
	gcc ${FLAGS} ${INCLUDES} ./src/main.c `sdl2-config --cflags --libs` -o ./bin/main
