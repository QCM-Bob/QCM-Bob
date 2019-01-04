CC=g++ -g
CCFLAGS= -Wall -Werror -std=c++11
LIBFLAGS= -lSDL2 -lSDL2_image
SRC= $(wildcard *.cpp)
OBJ= $(SRC:.cpp=.o)
EXEC= main

all: $(EXEC)

$(EXEC): $(OBJ)
		$(CC) $^ -o $@	$(LIBFLAGS)

%.o: %.cpp
		$(CC) $(CCFLAGS) -o $@ -c $<

.depends:
		g++ -MM $(SRC) > .depends

-include .depends

clean:
		rm -f $(OBJ) $(EXEC)