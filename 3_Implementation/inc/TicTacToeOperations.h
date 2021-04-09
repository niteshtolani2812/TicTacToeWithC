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

int checkRows(char grid[3][3],int playerInteger);


/**
* Checks if a player won or not by checking the columns of the grid
* @param[in] grid which is 3x3 grid of game
* @param[in] player integer which represent one of two players
* @return if player won return 1 else return 0
*/

int checkColumns(char grid[3][3],int playerInteger);


/**
* Checks if a player won or not by checking the diagonals of the grid
* @param[in] grid which is 3x3 grid of game
* @param[in] player integer which represent one of two players
* @return if player won return 1 else return 0
*/

int checkDiagonals(char grid[3][3],int playerInteger);


/**
* Checks if the grid is full or not
* @param[in] grid which is 3x3 grid of game
* @return if grid is fully filled return 1 else return 0
*/

int ifGridFull(char grid[3][3]);

/**
* prints the grid row by row
* @param[in] grid which is 3x3 grid of game
*/

void printGrid(char grid[3][3]);



/**
* changes the turn from one player to another
* @param[in] turn integer which represents the present turn
* @returns if turn is 1 then 2 and vice versa
*/

int changeTurn(int turn);


/**
* method to play game by using input and outputs
* @param[in] grid which is 3x3 grid of game
* @param[in] turn integer which represents the present turn
*/

void playGame(char grid[3][3],int turn);

/**
* method to Get 'X' or 'O' according to the player number
* @param[in] player integer representing the player number
* @param[in] char 'X' or 'O'
*/

char getSymbol(int playerInteger);
