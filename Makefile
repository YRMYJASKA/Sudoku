CC=g++
SRC=src/main.cpp src/sudoku.cpp
FLAGS=-std=c++11
OUTPUT=sudoku
all:
	$(CC) $(SRC) -o $(OUTPUT) $(FLAGS)
