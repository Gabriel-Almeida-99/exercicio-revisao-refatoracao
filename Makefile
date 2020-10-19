CC = g++
CFLAGS = -Wall -Wextra -std=c++17 -ggdb

BIN := bin
SRC := src
INCLUDE := include
LIB := lib
LIBRARIES := 
EXECUTABLE := main

all: $(BIN)/$(EXECUTABLE)

run: clean all	
	 clear
	 @echo "Executing..."
	 ./$(BIN)/$(EXECUTABLE)

$(BIN)/$(EXECUTABLE): $(SRC)/*.cpp
	 @echo "Building..."
	 $(CC) $(CFLAGS) -I$(INCLUDE) -L$(LIB) $^ -o $@ $(LIBRARIES)

clean:
	 @echo "Cleaning..."
	 -rm $(BIN)/*
