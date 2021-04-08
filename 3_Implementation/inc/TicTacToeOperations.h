    /**
* @file TicTacToeOperations.h
* Tic Tac Toe application with two players playing each other
*
*/

#include <stdio.h>
#include <stdlib.h>

/**
* Checks if a player won or not by checking the rows of the grid
* @param[in] grid which is 3x3 grid of game
* @param[in] player integer which represent one of two players
* @return if player won return 1 else return 0
*/

int checkRows(int grid[3][3],int playerInteger);


/**
* Checks if a player won or not by checking the columns of the grid
* @param[in] grid which is 3x3 grid of game
* @param[in] player integer which represent one of two players
* @return if player won return 1 else return 0
*/

int checkColumns(int grid[3][3],int playerInteger);


/**
* Checks if a player won or not by checking the diagonals of the grid
* @param[in] grid which is 3x3 grid of game
* @param[in] player integer which represent one of two players
* @return if player won return 1 else return 0
*/

int checkDiagonals(int grid[3][3],int playerInteger);


/**
* Checks if the grid is full or not
* @param[in] grid which is 3x3 grid of game
* @return if grid is fully filled return 1 else return 0
*/

int ifGridFull(int grid[3][3]);

/**
* prints the grid row by row
* @param[in] grid which is 3x3 grid of game
*/

void printGrid(int grid[3][3]);


/**
* changes the turn from one player to another
* @param[in] grid which is 3x3 grid of game
* @returns if turn is 1 then 2 and vice versa
*/


int changeTurn(int turn);

