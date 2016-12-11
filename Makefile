CC=g++
SRC=main.cpp sudoku.cpp
FLAGS=-std=c++11
OUTPUT=sudoku
all:
	$(CC) $(SRC) -o $(OUTPUT) $(FLAGS)
