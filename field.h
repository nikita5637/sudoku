#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <iostream>
#include <vector>
#include <ncurses.h>

using namespace std;

struct pos
{
	unsigned short x, y;
};

struct cell
{
	unsigned short number, true_number;
	bool visible, take;
};

class field
{
private:
	int FIELD_SIZE;
	vector< vector<cell> > _field;
	pos empty;
	unsigned short number, difficulty;
	void field9()
	{
		_field[0][0].true_number = 9;
		_field[1][0].true_number = 8;
		_field[2][0].true_number = 7;
		_field[3][0].true_number = 6;
		_field[4][0].true_number = 5;
		_field[5][0].true_number = 4;
		_field[6][0].true_number = 3;
		_field[7][0].true_number = 2;
		_field[8][0].true_number = 1;
		_field[0][1].true_number = 2;
		_field[1][1].true_number = 4;
		_field[2][1].true_number = 6;
		_field[3][1].true_number = 1;
		_field[4][1].true_number = 7;
		_field[5][1].true_number = 3;
		_field[5][1].number = 3;
		_field[5][1].take = true;
		_field[5][1].visible = true;
		_field[6][1].true_number = 9;
		_field[7][1].true_number = 8;
		_field[7][1].number = 8;
		_field[7][1].take = true;
		_field[7][1].visible = true;
		_field[8][1].true_number = 5;
		_field[8][1].number = 5;
		_field[8][1].take = true;
		_field[8][1].visible = true;
		_field[0][2].true_number = 3;
		_field[1][2].true_number = 5;
		_field[2][2].true_number = 1;
		_field[2][2].number = 1;
		_field[2][2].take = true;
		_field[2][2].visible = true;
		_field[3][2].true_number = 9;
		_field[4][2].true_number = 2;
		_field[4][2].number = 2;
		_field[4][2].take = true;
		_field[4][2].visible = true;
		_field[5][2].true_number = 8;
		_field[6][2].true_number = 7;
		_field[7][2].true_number = 4;
		_field[8][2].true_number = 6;
		_field[0][3].true_number = 1;
		_field[1][3].true_number = 2;
		_field[2][3].true_number = 8;
		_field[3][3].true_number = 5;
		_field[3][3].number = 5;
		_field[3][3].take = true;
		_field[3][3].visible = true;
		_field[4][3].true_number = 3;
		_field[5][3].true_number = 7;
		_field[5][3].number = 7;
		_field[5][3].take = true;
		_field[5][3].visible = true;
		_field[6][3].true_number = 6;
		_field[7][3].true_number = 9;
		_field[8][3].true_number = 4;
		_field[0][4].true_number = 6;
		_field[1][4].true_number = 3;
		_field[2][4].true_number = 4;
		_field[2][4].number = 4;
		_field[2][4].take = true;
		_field[2][4].visible = true;
		_field[3][4].true_number = 8;
		_field[4][4].true_number = 9;
		_field[5][4].true_number = 2;
		_field[6][4].true_number = 1;
		_field[6][4].number = 1;
		_field[6][4].take = true;
		_field[6][4].visible = true;
		_field[7][4].true_number = 5;
		_field[8][4].true_number = 7;
		_field[0][5].true_number = 7;
		_field[1][5].true_number = 9;
		_field[1][5].number = 9;
		_field[1][5].take = true;
		_field[1][5].visible = true;
		_field[2][5].true_number = 5;
		_field[3][5].true_number = 4;
		_field[4][5].true_number = 6;
		_field[5][5].true_number = 1;
		_field[6][5].true_number = 8;
		_field[7][5].true_number = 3;
		_field[8][5].true_number = 2;
		_field[0][6].true_number = 5;
		_field[0][6].number = 5;
		_field[0][6].take = true;
		_field[0][6].visible = true;
		_field[1][6].true_number = 1;
		_field[2][6].true_number = 9;
		_field[3][6].true_number = 2;
		_field[4][6].true_number = 8;
		_field[5][6].true_number = 6;
		_field[6][6].true_number = 4;
		_field[7][6].true_number = 7;
		_field[7][6].number = 7;
		_field[7][6].take = true;
		_field[7][6].visible = true;
		_field[8][6].true_number = 3;
		_field[8][6].number = 3;
		_field[8][6].take = true;
		_field[8][6].visible = true;
		_field[0][7].true_number = 4;
		_field[1][7].true_number = 7;
		_field[2][7].true_number = 2;
		_field[2][7].number = 2;
		_field[2][7].take = true;
		_field[2][7].visible = true;
		_field[3][7].true_number = 3;
		_field[4][7].true_number = 1;
		_field[4][7].number = 1;
		_field[4][7].take = true;
		_field[4][7].visible = true;
		_field[5][7].true_number = 9;
		_field[6][7].true_number = 5;
		_field[7][7].true_number = 6;
		_field[8][7].true_number = 8;
		_field[0][8].true_number = 8;
		_field[1][8].true_number = 6;
		_field[2][8].true_number = 3;
		_field[3][8].true_number = 7;
		_field[4][8].true_number = 4;
		_field[4][8].number = 4;
		_field[4][8].take = true;
		_field[4][8].visible = true;
		_field[5][8].true_number = 5;
		_field[6][8].true_number = 2;
		_field[7][8].true_number = 1;
		_field[8][8].true_number = 9;
		_field[8][8].number = 9;
		_field[8][8].take = true;
		_field[8][8].visible = true;
	}

	void field4()
	{
		_field[0][0].true_number = 2;
		_field[0][0].number = 2;
		_field[0][0].take = true;
		_field[0][0].visible = true;
		_field[1][0].true_number = 3;
		_field[2][0].true_number = 1;
		_field[3][0].true_number = 4;
		_field[0][1].true_number = 4;
		_field[1][1].true_number = 1;
		_field[1][1].number = 1;
		_field[1][1].take = true;
		_field[1][1].visible = true;
		_field[2][1].true_number = 3;
		_field[2][1].number = 3;
		_field[2][1].take = true;
		_field[2][1].visible = true;
		_field[3][1].true_number = 2;
		_field[0][2].true_number = 3;
		_field[0][2].number = 3;
		_field[0][2].take = true;
		_field[0][2].visible = true;
		_field[1][2].true_number = 4;
		_field[2][2].true_number = 2;
		_field[3][2].true_number = 1;
		_field[3][2].number = 1;
		_field[3][2].take = true;
		_field[3][2].visible = true;
		_field[0][3].true_number = 1;
		_field[1][3].true_number = 2;
		_field[2][3].true_number = 4;
		_field[2][3].number = 4;
		_field[2][3].take = true;
		_field[2][3].visible = true;
		_field[3][3].true_number = 3;
	}

	void field16()
	{
		_field[0][0].true_number = 3;
		_field[0][1].true_number = 13;
		_field[0][2].true_number = 5;
		_field[0][3].true_number = 8;
		_field[0][4].true_number = 11;
		_field[0][5].true_number = 12;
		_field[0][6].true_number = 10;
		_field[0][7].true_number = 6;
		_field[0][7].number = 6;
		_field[0][7].take = true;
		_field[0][7].visible = true;
		_field[0][8].true_number = 7;
		_field[0][9].true_number = 2;
		_field[0][9].number = 2;
		_field[0][9].take = true;
		_field[0][9].visible = true;
		_field[0][10].true_number = 15;
		_field[0][11].true_number = 9;
		_field[0][11].number = 9;
		_field[0][11].take = true;
		_field[0][11].visible = true;
		_field[0][12].true_number = 4;
		_field[0][13].true_number = 1;
		_field[0][13].number = 1;
		_field[0][13].take = true;
		_field[0][13].visible = true;
		_field[0][14].true_number = 16;
		_field[0][15].true_number = 14;
		_field[0][15].number = 14;
		_field[0][15].take = true;
		_field[0][15].visible = true;
		_field[1][0].true_number = 1;
		_field[1][1].true_number = 11;
		_field[1][2].true_number = 7;
		_field[1][3].true_number = 14;
		_field[1][4].true_number = 9;
		_field[1][5].true_number = 16;
		_field[1][6].true_number = 8;
		_field[1][6].number = 8;
		_field[1][6].take = true;
		_field[1][6].visible = true;
		_field[1][7].true_number = 5;
		_field[1][8].true_number = 10;
		_field[1][9].true_number = 4;
		_field[1][9].number = 4;
		_field[1][9].take = true;
		_field[1][9].visible = true;
		_field[1][10].true_number = 6;
		_field[1][11].true_number = 13;
		_field[1][12].true_number = 2;
		_field[1][13].true_number = 3;
		_field[1][14].true_number = 15;
		_field[1][15].true_number = 12;
		_field[2][0].true_number = 2;
		_field[2][1].true_number = 9;
		_field[2][2].true_number = 10;
		_field[2][3].true_number = 12;
		_field[2][3].number = 12;
		_field[2][3].take = true;
		_field[2][3].visible = true;
		_field[2][4].true_number = 14;
		_field[2][5].true_number = 1;
		_field[2][6].true_number = 4;
		_field[2][7].true_number = 15;
		_field[2][7].number = 15;
		_field[2][7].take = true;
		_field[2][7].visible = true;
		_field[2][8].true_number = 5;
		_field[2][8].number = 5;
		_field[2][8].take = true;
		_field[2][8].visible = true;
		_field[2][9].true_number = 3;
		_field[2][10].true_number = 8;
		_field[2][10].number = 8;
		_field[2][10].take = true;
		_field[2][10].visible = true;
		_field[2][11].true_number = 16;
		_field[2][11].number = 16;
		_field[2][11].take = true;
		_field[2][11].visible = true;
		_field[2][12].true_number = 11;
		_field[2][13].true_number = 7;
		_field[2][14].true_number = 6;
		_field[2][15].true_number = 13;
		_field[2][15].number = 13;
		_field[2][15].take = true;
		_field[2][15].visible = true;
		_field[3][0].true_number = 4;
		_field[3][1].true_number = 6;
		_field[3][2].true_number = 15;
		_field[3][3].true_number = 16;
		_field[3][3].number = 16;
		_field[3][3].take = true;
		_field[3][3].visible = true;
		_field[3][4].true_number = 7;
		_field[3][5].true_number = 2;
		_field[3][6].true_number = 3;
		_field[3][6].number = 3;
		_field[3][6].take = true;
		_field[3][6].visible = true;
		_field[3][7].true_number = 13;
		_field[3][8].true_number = 1;
		_field[3][8].number = 1;
		_field[3][8].take = true;
		_field[3][8].visible = true;
		_field[3][9].true_number = 12;
		_field[3][10].true_number = 14;
		_field[3][11].true_number = 11;
		_field[3][11].number = 11;
		_field[3][11].take = true;
		_field[3][11].visible = true;
		_field[3][12].true_number = 5;
		_field[3][13].true_number = 8;
		_field[3][14].true_number = 9;
		_field[3][14].number = 9;
		_field[3][14].take = true;
		_field[3][14].visible = true;
		_field[3][15].true_number = 10;
		_field[3][15].number = 10;
		_field[3][15].take = true;
		_field[3][15].visible = true;
		_field[4][0].true_number = 12;
		_field[4][1].true_number = 2;
		_field[4][2].true_number = 4;
		_field[4][3].true_number = 9;
		_field[4][4].true_number = 16;
		_field[4][5].true_number = 11;
		_field[4][5].number = 11;
		_field[4][5].take = true;
		_field[4][5].visible = true;
		_field[4][6].true_number = 5;
		_field[4][6].number = 5;
		_field[4][6].take = true;
		_field[4][6].visible = true;
		_field[4][7].true_number = 1;
		_field[4][8].true_number = 6;
		_field[4][9].true_number = 13;
		_field[4][10].true_number = 3;
		_field[4][10].number = 3;
		_field[4][10].take = true;
		_field[4][10].visible = true;
		_field[4][11].true_number = 15;
		_field[4][12].true_number = 8;
		_field[4][13].true_number = 14;
		_field[4][14].true_number = 10;
		_field[4][15].true_number = 7;
		_field[5][0].true_number = 13;
		_field[5][1].true_number = 16;
		_field[5][2].true_number = 3;
		_field[5][2].number = 3;
		_field[5][2].take = true;
		_field[5][2].visible = true;
		_field[5][3].true_number = 15;
		_field[5][4].true_number = 2;
		_field[5][4].number = 2;
		_field[5][4].take = true;
		_field[5][4].visible = true;
		_field[5][5].true_number = 8;
		_field[5][5].number = 8;
		_field[5][5].take = true;
		_field[5][5].visible = true;
		_field[5][6].true_number = 12;
		_field[5][7].true_number = 10;
		_field[5][8].true_number = 14;
		_field[5][9].true_number = 7;
		_field[5][10].true_number = 4;
		_field[5][11].true_number = 5;
		_field[5][12].true_number = 1;
		_field[5][13].true_number = 9;
		_field[5][13].number = 9;
		_field[5][13].take = true;
		_field[5][13].visible = true;
		_field[5][14].true_number = 11;
		_field[5][14].number = 11;
		_field[5][14].take = true;
		_field[5][14].visible = true;
		_field[5][15].true_number = 6;
		_field[5][15].number = 6;
		_field[5][15].take = true;
		_field[5][15].visible = true;
		_field[6][0].true_number = 7;
		_field[6][1].true_number = 14;
		_field[6][2].true_number = 1;
		_field[6][2].number = 1;
		_field[6][2].take = true;
		_field[6][2].visible = true;
		_field[6][3].true_number = 10;
		_field[6][4].true_number = 15;
		_field[6][5].true_number = 3;
		_field[6][6].true_number = 6;
		_field[6][7].true_number = 9;
		_field[6][8].true_number = 8;
		_field[6][9].true_number = 11;
		_field[6][9].number = 11;
		_field[6][9].take = true;
		_field[6][9].visible = true;
		_field[6][10].true_number = 16;
		_field[6][11].true_number = 2;
		_field[6][12].true_number = 13;
		_field[6][13].true_number = 4;
		_field[6][13].number = 4;
		_field[6][13].take = true;
		_field[6][13].visible = true;
		_field[6][14].true_number = 12;
		_field[6][14].number = 12;
		_field[6][14].take = true;
		_field[6][14].visible = true;
		_field[6][15].true_number = 5;
		_field[7][0].true_number = 11;
		_field[7][1].true_number = 5;
		_field[7][1].number = 5;
		_field[7][1].take = true;
		_field[7][1].visible = true;
		_field[7][2].true_number = 8;
		_field[7][3].true_number = 6;
		_field[7][4].true_number = 4;
		_field[7][5].true_number = 14;
		_field[7][5].number = 14;
		_field[7][5].take = true;
		_field[7][5].visible = true;
		_field[7][6].true_number = 13;
		_field[7][7].true_number = 7;
		_field[7][7].number = 7;
		_field[7][7].take = true;
		_field[7][7].visible = true;
		_field[7][8].true_number = 12;
		_field[7][8].number = 12;
		_field[7][8].take = true;
		_field[7][8].visible = true;
		_field[7][9].true_number = 9;
		_field[7][10].true_number = 10;
		_field[7][11].true_number = 1;
		_field[7][12].true_number = 16;
		_field[7][12].number = 16;
		_field[7][12].take = true;
		_field[7][12].visible = true;
		_field[7][13].true_number = 15;
		_field[7][14].true_number = 3;
		_field[7][14].number = 3;
		_field[7][14].take = true;
		_field[7][14].visible = true;
		_field[7][15].true_number = 2;
		_field[8][0].true_number = 15;
		_field[8][1].true_number = 12;
		_field[8][2].true_number = 2;
		_field[8][2].number = 2;
		_field[8][2].take = true;
		_field[8][2].visible = true;
		_field[8][3].true_number = 7;
		_field[8][4].true_number = 3;
		_field[8][5].true_number = 6;
		_field[8][6].true_number = 9;
		_field[8][6].number = 9;
		_field[8][6].take = true;
		_field[8][6].visible = true;
		_field[8][7].true_number = 16;
		_field[8][7].number = 16;
		_field[8][7].take = true;
		_field[8][7].visible = true;
		_field[8][8].true_number = 4;
		_field[8][9].true_number = 1;
		_field[8][10].true_number = 13;
		_field[8][10].number = 13;
		_field[8][10].take = true;
		_field[8][10].visible = true;
		_field[8][11].true_number = 8;
		_field[8][12].true_number = 14;
		_field[8][13].true_number = 10;
		_field[8][13].number = 10;
		_field[8][13].take = true;
		_field[8][13].visible = true;
		_field[8][14].true_number = 5;
		_field[8][15].true_number = 11;
		_field[9][0].true_number = 16;
		_field[9][1].true_number = 1;
		_field[9][2].true_number = 14;
		_field[9][3].true_number = 11;
		_field[9][4].true_number = 8;
		_field[9][5].true_number = 13;
		_field[9][6].true_number = 2;
		_field[9][7].true_number = 12;
		_field[9][7].number = 12;
		_field[9][7].take = true;
		_field[9][7].visible = true;
		_field[9][8].true_number = 15;
		_field[9][8].number = 15;
		_field[9][8].take = true;
		_field[9][8].visible = true;
		_field[9][9].true_number = 10;
		_field[9][10].true_number = 5;
		_field[9][11].true_number = 3;
		_field[9][11].number = 3;
		_field[9][11].take = true;
		_field[9][11].visible = true;
		_field[9][12].true_number = 9;
		_field[9][13].true_number = 6;
		_field[9][14].true_number = 7;
		_field[9][14].number = 7;
		_field[9][14].take = true;
		_field[9][14].visible = true;
		_field[9][15].true_number = 4;
		_field[10][0].true_number = 9;
		_field[10][1].true_number = 10;
		_field[10][2].true_number = 13;
		_field[10][3].true_number = 4;
		_field[10][4].true_number = 5;
		_field[10][5].true_number = 7;
		_field[10][6].true_number = 15;
		_field[10][7].true_number = 14;
		_field[10][7].number = 14;
		_field[10][7].take = true;
		_field[10][7].visible = true;
		_field[10][8].true_number = 11;
		_field[10][9].true_number = 16;
		_field[10][9].number = 16;
		_field[10][9].take = true;
		_field[10][9].visible = true;
		_field[10][10].true_number = 12;
		_field[10][11].true_number = 6;
		_field[10][12].true_number = 3;
		_field[10][13].true_number = 2;
		_field[10][13].number = 2;
		_field[10][13].take = true;
		_field[10][13].visible = true;
		_field[10][14].true_number = 8;
		_field[10][15].true_number = 1;
		_field[10][15].number = 1;
		_field[10][15].take = true;
		_field[10][15].visible = true;
		_field[11][0].true_number = 8;
		_field[11][1].true_number = 3;
		_field[11][2].true_number = 6;
		_field[11][3].true_number = 5;
		_field[11][3].number = 5;
		_field[11][3].take = true;
		_field[11][3].visible = true;
		_field[11][4].true_number = 1;
		_field[11][5].true_number = 10;
		_field[11][6].true_number = 11;
		_field[11][7].true_number = 4;
		_field[11][8].true_number = 2;
		_field[11][9].true_number = 14;
		_field[11][10].true_number = 9;
		_field[11][11].true_number = 7;
		_field[11][11].number = 7;
		_field[11][11].take = true;
		_field[11][11].visible = true;
		_field[11][12].true_number = 15;
		_field[11][13].true_number = 12;
		_field[11][13].number = 12;
		_field[11][13].take = true;
		_field[11][13].visible = true;
		_field[11][14].true_number = 13;
		_field[11][15].true_number = 16;
		_field[12][0].true_number = 10;
		_field[12][1].true_number = 15;
		_field[12][1].number = 15;
		_field[12][1].take = true;
		_field[12][1].visible = true;
		_field[12][2].true_number = 11;
		_field[12][3].true_number = 13;
		_field[12][3].number = 13;
		_field[12][3].take = true;
		_field[12][3].visible = true;
		_field[12][4].true_number = 12;
		_field[12][5].true_number = 4;
		_field[12][6].true_number = 16;
		_field[12][7].true_number = 8;
		_field[12][8].true_number = 9;
		_field[12][9].true_number = 6;
		_field[12][10].true_number = 2;
		_field[12][10].number = 2;
		_field[12][10].take = true;
		_field[12][10].visible = true;
		_field[12][11].true_number = 14;
		_field[12][12].true_number = 7;
		_field[12][13].true_number = 5;
		_field[12][14].true_number = 1;
		_field[12][14].number = 1;
		_field[12][14].take = true;
		_field[12][14].visible = true;
		_field[12][15].true_number = 3;
		_field[13][0].true_number = 6;
		_field[13][1].true_number = 8;
		_field[13][2].true_number = 12;
		_field[13][3].true_number = 1;
		_field[13][4].true_number = 13;
		_field[13][5].true_number = 15;
		_field[13][6].true_number = 7;
		_field[13][6].number = 7;
		_field[13][6].take = true;
		_field[13][6].visible = true;
		_field[13][7].true_number = 2;
		_field[13][8].true_number = 3;
		_field[13][9].true_number = 5;
		_field[13][10].true_number = 11;
		_field[13][11].true_number = 4;
		_field[13][11].number = 4;
		_field[13][11].take = true;
		_field[13][11].visible = true;
		_field[13][12].true_number = 10;
		_field[13][13].true_number = 16;
		_field[13][14].true_number = 14;
		_field[13][14].number = 14;
		_field[13][14].take = true;
		_field[13][14].visible = true;
		_field[13][15].true_number = 9;
		_field[14][0].true_number = 5;
		_field[14][1].true_number = 7;
		_field[14][2].true_number = 16;
		_field[14][3].true_number = 2;
		_field[14][4].true_number = 6;
		_field[14][5].true_number = 9;
		_field[14][6].true_number = 14;
		_field[14][6].number = 14;
		_field[14][6].take = true;
		_field[14][6].visible = true;
		_field[14][7].true_number = 3;
		_field[14][8].true_number = 13;
		_field[14][8].number = 13;
		_field[14][8].take = true;
		_field[14][8].visible = true;
		_field[14][9].true_number = 8;
		_field[14][9].number = 8;
		_field[14][9].take = true;
		_field[14][9].visible = true;
		_field[14][10].true_number = 1;
		_field[14][11].true_number = 10;
		_field[14][12].true_number = 12;
		_field[14][13].true_number = 11;
		_field[14][13].number = 11;
		_field[14][13].take = true;
		_field[14][13].visible = true;
		_field[14][14].true_number = 4;
		_field[14][14].number = 4;
		_field[14][15].number = 15;
		_field[14][15].take = true;
		_field[14][15].visible = true;
		_field[15][0].true_number = 14;
		_field[15][1].true_number = 4;
		_field[15][2].true_number = 9;
		_field[15][3].true_number = 3;
		_field[15][3].number = 3;
		_field[15][3].take = true;
		_field[15][3].visible = true;
		_field[15][4].true_number = 10;
		_field[15][5].true_number = 5;
		_field[15][6].true_number = 1;
		_field[15][7].true_number = 11;
		_field[15][8].true_number = 16;
		_field[15][9].true_number = 15;
		_field[15][10].true_number = 7;
		_field[15][10].number = 7;
		_field[15][10].take = true;
		_field[15][10].visible = true;
		_field[15][11].true_number = 12;
		_field[15][12].true_number = 6;
		_field[15][13].true_number = 13;
		_field[15][14].true_number = 2;
		_field[15][15].true_number = 8;
		_field[15][15].number = 8;
		_field[15][15].take = true;
		_field[15][15].visible = true;
	}
public:
	field(int size)
	{
		FIELD_SIZE = size;
		_field.resize(size);
		for (unsigned short i = 0 ; i <= size - 1 ; i++)
		{
			_field[i].resize(size);
		}
		for (unsigned short i = 0 ; i <= FIELD_SIZE - 1 ; i++)
		{	
			for (unsigned short j = 0 ; j <= FIELD_SIZE - 1 ; j++)
			{
				_field[j][i].true_number = 0;
				_field[j][i].number = 0;
				_field[j][i].visible = false;
				_field[j][i].take = false;
			}
		}
		empty.x = 0;
		empty.y = 0;
		difficulty = 0;
	}

	void generate_field()
	{
		if (FIELD_SIZE == 4)
		{
			field4();
		}
		else
		{
			if (FIELD_SIZE == 9)
			{
				field9();
			}
			else
			{
				field16();
			}
		}
		unsigned short x, y, q, count_take;
		double mas_difficulty[3] = {0.35 , 0.25, 0.2};
		for (q = 1; q <= 100; q++)
		{
			unsigned short command_generate;
			command_generate = rand() % 4;
			switch (command_generate)
			{
			case 0:
				{
					unsigned short x1, x2;
					x1 = rand() % int(pow(FIELD_SIZE, 0.5));
					x1 *= int(pow(FIELD_SIZE, 0.5));
					x2 = x1;
					x2 += rand() % int(pow(FIELD_SIZE, 0.5));
					for (y = 0 ; y <= FIELD_SIZE - 1 ; y++)
					{
						swap(_field[x1][y], _field[x2][y]);
					}
				}
			case 1:
				{
					unsigned short y1, y2;
					y1 = rand() % int(pow(FIELD_SIZE, 0.5));
					y1 *= int(pow(FIELD_SIZE, 0.5));
					y2 = y1;
					y2 += rand() % int(pow(FIELD_SIZE, 0.5));
					for (x = 0 ; x <= FIELD_SIZE - 1 ; x++)
					{
						swap(_field[x][y1], _field[x][y2]);
					}
				}
			case 2:
				{
					unsigned short x1, x2;
					x1 = rand() % int(pow(FIELD_SIZE, 0.5));
					x1 *= int(pow(FIELD_SIZE, 0.5));
					x2 = rand() % int(pow(FIELD_SIZE, 0.5));
					x2 *= int(pow(FIELD_SIZE, 0.5));
					for (unsigned short r = 0 ; r <= int(pow(FIELD_SIZE, 0.5)) - 1 ; r++)
					{
						for (y = 0 ; y <= FIELD_SIZE - 1 ; y++)
						{
							swap(_field[x1 + r][y], _field[x2 + r][y]);
						}
					}
				}
			case 3:
				{
					unsigned short y1, y2;
					y1 = rand() % int(pow(FIELD_SIZE, 0.5));
					y1 *= int(pow(FIELD_SIZE, 0.5));
					y2 = rand() % int(pow(FIELD_SIZE, 0.5));
					y2 *= int(pow(FIELD_SIZE, 0.5));
					for (unsigned short q = 0 ; q <= int(pow(FIELD_SIZE, 0.5)) - 1 ; q++)
					{
						for (x = 0 ; x <= FIELD_SIZE - 1 ; x++)
						{
							swap(_field[x][y1 + q], _field[x][y2 + q]);
						}
					}
				}
			}
		}
		count_take = int((FIELD_SIZE * FIELD_SIZE) * mas_difficulty[difficulty - 1]);
		while (count_take > 0)
		{
			unsigned short x, y;
			x = rand() % FIELD_SIZE;
			y = rand() % FIELD_SIZE;
			if (!_field[x][y].take)
			{
				_field[x][y].take = true;
				_field[x][y].number = _field[x][y].true_number;
				_field[x][y].visible = true;
				count_take--;
			}
		}
	}

	bool taken()
	{
		 if (_field[empty.x][empty.y].take)
		 {
			 return false;
		 }
		 return true;
	}

	void print_field(bool t)
	{
		/*SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x04);	*/
		cout<<(char)218;
		for (int i = 1 ; i <= FIELD_SIZE * 4 + pow(FIELD_SIZE, 0.5) - 1 ; i++)
		{
			if (!(i % (4 * int(pow(FIELD_SIZE, 0.5)) + 1)))
			{
				cout<<(char)194;
			}
			else
			{
				cout<<(char)196;
			}
		}
		cout<<(char)191;
		printf("\n");
		for (unsigned short i = 0 ; i < FIELD_SIZE ; i++)
		{	
			/*SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x04);	*/
			cout<<(char)179;
			for (unsigned short j = 0 ; j < FIELD_SIZE ; j++)
			{
				
				if (!((j) % int(pow(FIELD_SIZE, 0.5))) && j)
				{
					/*SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x04);	*/
					cout<<(char)179;
				}
				
				if (!t)
				{
					bool flag = false;
					if (_field[j][i].visible)
					{
						/*SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x0F);*/
						if (_field[j][i].take)
						{
							/*SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x03);*/
						}
						if ((j == empty.x) && (i == empty.y))
						{
							/*SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x0A);	*/
						}
						for (unsigned short z = 0 ; z <= FIELD_SIZE - 1 ; z++)
						{
							if (j != z)
							{
								if (_field[j][i].number == _field[z][i].number)
								{
									/*SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x0C);*/
									if ((j == empty.x) && (i == empty.y))
									{
										/*SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x0A);	*/
									}
									printf("%s%2d%s", "[", _field[j][i].number, "]");
									flag = true;
									break;
								}
							}
						}
						for (unsigned short z = 0 ; z <= FIELD_SIZE - 1 ; z++)
						{
							if (i != z)
							{
								if (_field[j][i].number == _field[j][z].number)
								{
									/*SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x0C);*/
									if ((j == empty.x) && (i == empty.y))
									{
										/*SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x0A);	*/
									}
									if (!flag)
									{
										printf("%s%2d%s", "[", _field[j][i].number, "]");
									}
									flag = true;
									break;
								}
							}
						}
						if (!flag)
						{
							printf("%s%2d%s", "[", _field[j][i].number, "]");
						}
					}
					else
					{
						if ((j == empty.x) && (i == empty.y))
						{
							/*SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x0A);*/
						}
						else
						{
							/*SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x0F);	*/
						}
						printf("%s", "[  ]");
					}
				}
				else
				{
					/*SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x08);	*/
					printf("%s%2d%s", "[", _field[j][i].true_number, "]");
				}
			}
			if (!((i + 1) % int(pow(FIELD_SIZE, 0.5))) && i)
				{
				/*SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x04);	*/
				cout<<(char)179;
				printf("\n");
				if (i < 8) 
				{
					cout<<(char)195;
					for (int i = 1 ; i <= FIELD_SIZE * 4 + pow(FIELD_SIZE, 0.5) - 1 ; i++)
					{
						if (!(i % (4 * int(pow(FIELD_SIZE, 0.5)) + 1)))
						{
							cout<<(char)197;
						}
						else
						{
							cout<<(char)196;
						}
					}
					cout<<(char)180;
				}
				else
				{
					cout<<(char)192;
					for (int i = 1 ; i <= FIELD_SIZE * 4 + pow(FIELD_SIZE, 0.5) - 1 ; i++)
					{
						if (!(i % (4 * int(pow(FIELD_SIZE, 0.5)) + 1)))
						{
							cout<<(char)193;
						}
						else
						{
							cout<<(char)196;
						}
					}
					cout<<(char)217;
				}
			}
			/*SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x04);	*/
			if (((i + 1) % int(pow(FIELD_SIZE, 0.5))))
			{
				cout<<(char)179;
			}
			printf("\n");
		}
	}

	void moveup()
	{
		if (empty.y)
		{
			empty.y--;
		}
		else
		{
			if (empty.x)
			{
				empty.x--;
				empty.y = FIELD_SIZE - 1;
			}
			else
			{
				empty.x = FIELD_SIZE - 1;
				empty.y = FIELD_SIZE - 1;
			}
		}
	}

	void movedown()
	{
		if (empty.y <= FIELD_SIZE - 2)
		{
			empty.y++;
		}
		else
		{
			if (empty.x <= FIELD_SIZE - 2)
			{
				empty.x++;
				empty.y = 0;
			}
			else
			{
				empty.x = 0;
				empty.y = 0;
			}
		}
	}

	void moveleft()
	{
		if (empty.x)
		{
			empty.x--;
		}
		else
		{
			if (empty.y)
			{
				empty.y--;
				empty.x = FIELD_SIZE - 1;
			}
			else
			{
				empty.x = FIELD_SIZE - 1;
				empty.y = FIELD_SIZE - 1;
			}
		}
	}

	void moveright()
	{
		if (empty.x <= FIELD_SIZE - 2) 
		{
			empty.x++;
		}
		else
		{
			if (empty.y <= FIELD_SIZE - 2)
			{
				empty.y++;
				empty.x = 0;
			}
			else
			{
				empty.x = 0;
				empty.y = 0;
			}
		}
	}

	void set_number(int number)
	{
		if (!_field[empty.x][empty.y].take)
		{
			if (!number)
			{
				_field[empty.x][empty.y].number = number;
				_field[empty.x][empty.y].visible = false;
			}
			if ((number > 0) && (number <= FIELD_SIZE))
			{
				_field[empty.x][empty.y].number = number;
				_field[empty.x][empty.y].visible = true;
			}
		}
	}

	void set_difficulty()
	{
		while ((difficulty > 3) || (difficulty < 1))
		{
			system("clear");
			try
			{
				printf("%s\n", "Enter difficulty: 1 - easy, 2 - normal, 3 - hard"); 
				cin>>difficulty;
				if (cin.fail() || (difficulty > 3) || (difficulty < 1))
				{
					throw "Enter correct difficulty.";
				}
				return;
			}
			catch (const char * error)
			{
				cout<<error<<endl;
				system("pause");
				cin.get();
				cin.sync();
				cin.clear();
			}
		}
	}

	bool check()
	{
		for (unsigned short i = 0 ; i <= FIELD_SIZE - 1 ; i++)
		{	
				for (unsigned short j = 0 ; j <= FIELD_SIZE - 1 ; j++)
				{
					if (_field[j][i].number != _field[j][i].true_number)
					{
						return false;
					}
				}
		}
		system("clear");
		print_field(false);
		/*SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x0B);*/
		printf("%s\n%s\n", "Press 'w', 'a', 's', 'd' for move and press keys '1..9' for enter number.", "Press 'q' for exit / 'r' for restart.");
		printf("%s\n", "YOU WIN!");
		return true;
	}
};

