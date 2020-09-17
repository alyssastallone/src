/*
 * life.c
 *
 *  Created on: Sep 13, 2016
 *      Author: leune
 */
#include <stdio.h>
#include <unistd.h>
#include "life.h"

int main(int argc, char *argv[]) {
	int board[XSIZE][YSIZE];
	int rounds = DEFAULTROUNDS;

	initBoard(board);
	board[5][5] = ALIVE;
	board[5][6] = ALIVE;
	board[5][7] = ALIVE;
	board[6][6] = ALIVE;

	printf("Playing %d rounds.\n\n", rounds);
	for (int i=0; i<rounds; i++) {
		printf("Round: %d\n", i+1);
		printBoard(board);
		playRound(board);

		sleep(1);
	}

	return 0;
}

//initializes board to all dead cells by setting all spots = 0
//	dead cells = 0;
void initBoard(int vBoard[][YSIZE]) {
    /* write this function */
	int x, y;          //for loops variables
	for (x=0; x < XSIZE; x++)
		{
			for(y=0; y < YSIZE; y++)
				vBoard[x][y] = 0;

		}
}

void playRound(int vBoard[][YSIZE]) {

	int tmpBoard[XSIZE][YSIZE];
	
	int x, y;		//for loop variables
	int numNeighbors;	// for the # of neighbors to decide what happens to cells

	initBoard(tmpBoard);

	// perform the algorithm on vBoard, but update tmpBoard
	// with the new state
	
	/* 
	  Algorithm:
		if a cell is alive:
			it dies if it has less than 2 living neighbors
			it dies if it have more than 3 living neighbors 
			it lives if it have 2 or 3 living neighbors
		if a cell is dead:
			if becomes alive if it has three living neighbors
	*/
	//for all the cells apply the algorithm
	for(x = 0; x < XSIZE; x++)
	{
		for (y = 0; y < YSIZE; y++)
		{
			//set neighbor equal to neigbors function to determine the number of neighbors
			numNeighbors = neighbors(vBoard, x, y);
			//if number of neighbors < 2 - cell dies
			// set board coordinates to 0
			if (numNeighbors < 2)
			{
				tmpBoard[x][y] = 0;
			}
			//if neighbors > 3 - cell dies 
			if (numNeighbors > 3)
			{
				tmpBoard[x][y] = 0;
			}
			//if neighbors = 2 - cell lives
			// its already alive - nothing happens
			if (numNeighbors == 2)
			{
				tmpBoard[x][y] = vBoard[x][y];
			}
			//if neighbors = 3 - cell maintains life or becomes alive 
			// so set = 1;
			if (numNeighbors == 3)
			{
				tmpBoard[x][y] = 1;
			}
		}

	}

    // copy tmpBoard over vBoard
	for (int y=0; y < YSIZE; y++) {
		for (int x=0; x < XSIZE; x++) {
			vBoard[x][y] = tmpBoard[x][y];
		}
	}
}

int onBoard(int x, int y) {
	if (x < 0 || x >= XSIZE)
		return 0;
	else
		if (y < 0 || y >= YSIZE) return 0;
	else
		return 1;
}

int neighbors(int vBoard[][YSIZE], int x, int y) {
	int n=0;

	int xp1 = x + 1;
	int xm1 = x - 1;
	int yp1 = y + 1;
	int ym1 = y - 1;

	if (onBoard(xm1, y) && vBoard[xm1][y] == ALIVE) n++;
	if (onBoard(xm1, yp1) && vBoard[xm1][yp1] == ALIVE) n++;
	if (onBoard(x, yp1) && vBoard[x][yp1] == ALIVE) n++;
	if (onBoard(xp1, yp1) && vBoard[xp1][yp1] == ALIVE) n++;
	if (onBoard(xp1, y) && vBoard[xp1][y] == ALIVE) n++;
	if (onBoard(xp1, ym1) && vBoard[xp1][ym1] == ALIVE) n++;
	if (onBoard(x, ym1) && vBoard[x][ym1] == ALIVE) n++;
	if (onBoard(xm1, ym1) && vBoard[xm1][ym1] == ALIVE) n++;

	return n;
}

void printBoard(int vBoard[XSIZE][YSIZE]) {
	int x, y; 		//for loop variables
	for (y = 0; y< YSIZE; y++)
	{
		for(x = 0; x < XSIZE; x++)
		{
			printf(" %d ", vBoard[x][y]);
		}
		//new line after each row
		printf("\n");
	}
		
}