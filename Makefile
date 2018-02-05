all:
	g++ sudoku.cpp

install:
	g++ sudoku.cpp

run: install
	./a.out
