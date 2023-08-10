CXX = g++
CXXFLAGS = -Wall -Werror -Wextra -pedantic -std=c++17 -g -fsanitize=address
LDFLAGS =  -fsanitize=address

SRC = *.c
OBJ = $(SRC:.cc=.o)
EXEC = test

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX)  -o $@ $(OBJ) $(LBLIBS)

clean:
	rm -rf  $(EXEC)