all:
	g++ sudoku.cpp -lncurses

install:
	g++ sudoku.cpp -lncurses

run: install
	./a.out
