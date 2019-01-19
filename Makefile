CFLAGS = -Wall -g -std=c++11
CC = g++
OBJECTS = main.o Question.o Reponse.o Window.o Affiche.o Personnage.o Deplacement.o Score.o
LIBFLAGS= -lSDL2 -lSDL2_image 
EXEC = main

all: $(EXEC) 


$(EXEC): $(OBJECTS)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBFLAGS)


%.o: %.cc
	$(CC) $^ -c $(CFLAGS)

%.o: %.cpp
	$(CC) $^ -c $(CFLAGS)


clean:
	rm -f $(OBJECTS) $(EXEC)

.PHONY: all clean