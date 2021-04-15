#include "TicTacToeOperations.h"

/** 
* Implementation of CheckRows Function
*  integer for number of occurrences of a symbol in row
* Loop to go through the grid and check for the occurrences of the symbol
*  if row has three symbols return 1 which means player won
* @param[in] grid which is 3x3 grid of game
* @param[in] player integer which represent one of two players
* @return if player won return 1 else return 0
*/
	
int checkRows(char grid[3][3],int playerInteger)
{
	int numberOfOccurences;

	char sym = getSymbol(playerInteger);

	for(int i=0;i<3;i++)
	{
		numberOfOccurences=0;

		// loops to check if one row has three symbols of same type
		for(int j=0;j<3;j++)
		{
			if(grid[i][j]==sym)
			{
				numberOfOccurences++;
			}
		}

		if(numberOfOccurences==3)
		{
			return 1;
		}
	}
	return 0;
}



/** 
* Implementation of CheckColumns Function
* integer for number of occurrences of a symbol in column
* Loop to go through the grid and check for the occurrences of the symbol
* Loops to check if one column has three symbols of same type
* if column has three symbols return 1 which means player won
* @param[in] grid which is 3x3 grid of game
* @param[in] player integer which represent one of two players
* @return if player won return 1 else return 0
*/

int checkColumns(char grid[3][3],int playerInteger)
{
	int numberOfOccurences;

	char sym = getSymbol(playerInteger);

	for(int i=0;i<3;i++)
	{
		numberOfOccurences=0;
		for(int j=0;j<3;j++)
		{
			if(grid[j][i]==sym)
			{
				numberOfOccurences++;
			}
		}
		if(numberOfOccurences==3)
		{
			return 1;
		}
	}
	return 0;
}

/**
* Implementation of checkDiagonals Function
* if statement to check for first diagonal of the grid
* if statement to check for second diagonal of the grid
* @param[in] grid which is 3x3 grid of game
* @param[in] player integer which represent one of two players
* @return if player won return 1 else return 0
*/ 
 
int checkDiagonals(char grid[3][3],int playerInteger)
{
	// get symbol by turn variable
	char sym = getSymbol(playerInteger);

	if( (grid[0][0] == sym) && (grid[1][1] == sym) && (grid[2][2] == sym))
	{
		return 1;
	}

	if( (grid[2][0] == sym) && (grid[0][2] == sym) && (grid[1][1] == sym))
	{
		return 1;
	}
	return 0;
}

/** 
* function to check if grid is full or not
* if one cell is empty return 0 that is grid is not full
* @param[in] grid which is 3x3 grid of game
* @return if grid is fully filled return 1 else return 0
*/

int ifGridFull(char grid[3][3])
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(grid[i][j]=='-')
			{
				return 0;
			}
		}
	}
	return 1;
}

/**
* method to print the grid
* nested loop to go cell by cell and print the grid
* @param[in] grid which is 3x3 grid of game
*/
	
void printGrid(char grid[3][3])
{
    printf("\n\t");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%c  ",grid[i][j]);
		}
		printf("\n\t");
	}
}

/** 
* method to change turn variable and return it
* @param[in] turn integer which represents the present turn
* @returns if turn is 1 then 2 and vice versa
*/

int changeTurn(int turn)
{
	if(turn==1)
	{
		return 2;
	}
	return 1;
}

/** 
* method to play game and call all other functions
* print turn message depicting whose turn is this
* accept inputs from the user
* if choices are out of bounds of the grid then print ERROR message
* if chosen cell is empty then fill the column with respective symbol according to the turn variable
* If cell is already filled then print message
* call all functions for the win , if any of the function return 1 then print the winning message
* change the turn of the game to other player
* print grid after player's move
* @param[in] grid which is 3x3 grid of game
* @param[in] turn integer which represents the present turn
*/
    	
void playGame(char grid[3][3],int turn)
{
   // variables for user input
  int playerChoiceRow,playerChoiceColumn;
  while(1)
    {
    	printf("\n\nPlayer %d's turn: \n",turn);
    	printf("Make your choice:- ");
    	if(scanf("%d %d",&playerChoiceRow,&playerChoiceColumn)!=2)
    	{
            printf("\nERROR!!! :INVALID Choice\nPlease select row and columns with in the range that is 1-3");
            continue;
        }

    	if(playerChoiceRow>3 || playerChoiceRow<1 || playerChoiceColumn>3 || playerChoiceColumn<1)
    	{
    		printf("\nERROR!!! :INVALID Choice\nPlease select row and columns with in the range that is 1-3");
    		continue;
    	}

    	if(grid[--playerChoiceRow][--playerChoiceColumn] == '-')
    	{
    	    if(turn == 1)
                grid[playerChoiceRow][playerChoiceColumn] = 'X';
            else
                grid[playerChoiceRow][playerChoiceColumn] = 'O';
    	}

    	else
    	{
			printf("\nERROR!!! :The location you given is already filled!\nPlease Select some other location");
			continue;
    	}

    	if (checkRows(grid,turn) ==1 || checkColumns(grid,turn) == 1 || checkDiagonals(grid,turn) == 1 )
    	{
    		printf("\n**************************\n* Player %d won the Game  *\n**************************\n\n",turn);
    		return;
    	}
    	turn = changeTurn(turn);

    	printGrid(grid);
    	if(ifGridFull(grid) == 1)
        {
            printf("\n**************\n* Game Drawn *\n**************");
            return;
        }
    }
 }

/** 
* function to get symbol from the integer
* @param[in] player integer representing the player number
* @param[in] char 'X' or 'O'
*/

char getSymbol(int playerInteger)
{
    if(playerInteger == 1)
        return 'X';
    return 'O';
}
