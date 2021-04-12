#include "TicTacToeOperations.h"

// Implementation of CheckRows Function
int checkRows(char grid[3][3],int playerInteger)
{
    // integer for number of occurrences of a symbol in row
	int numberOfOccurences;

	// get symbol by turn variable
	char sym = getSymbol(playerInteger);

	// Loop to go through the grid and check for the occurrences of the symbol
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

		// if row has three symbols return 1 which means player won
		if(numberOfOccurences==3)
		{
			return 1;
		}
	}
	return 0;
}


// Implementation of CheckRows Function
int checkColumns(char grid[3][3],int playerInteger)
{
    // integer for number of occurrences of a symbol in column
	int numberOfOccurences;

	// get symbol by turn variable
	char sym = getSymbol(playerInteger);

	// Loop to go through the grid and check for the occurrences of the symbol
	for(int i=0;i<3;i++)
	{
		// loops to check if one column has three symbols of same type
		numberOfOccurences=0;
		for(int j=0;j<3;j++)
		{
			if(grid[j][i]==sym)
			{
				numberOfOccurences++;
			}
		}
		// if column has three symbols return 1 which means player won
		if(numberOfOccurences==3)
		{
			return 1;
		}
	}
	return 0;
}


int checkDiagonals(char grid[3][3],int playerInteger)
{
	// get symbol by turn variable
	char sym = getSymbol(playerInteger);

    // if statement to check for first diagonal of the grid
	if( (grid[0][0] == sym) && (grid[1][1] == sym) && (grid[2][2] == sym))
	{
		return 1;
	}

    // if statement to check for second diagonal of the grid
	if( (grid[2][0] == sym) && (grid[0][2] == sym) && (grid[1][1] == sym))
	{
		return 1;
	}
	return 0;
}

// function to check if grid is full or not
int ifGridFull(char grid[3][3])
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			// if one cell is empty return 0 that is grid is not full
			if(grid[i][j]=='-')
			{
				return 0;
			}
		}
	}
	// return 1 if grid is full
	return 1;
}

// method to print the grid
void printGrid(char grid[3][3])
{
    printf("\n\t");
    // nested loop to go cell by cell and print the grid
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%c  ",grid[i][j]);
		}
		printf("\n\t");
	}
}

// method to change turn variable and return it
int changeTurn(int turn)
{
	if(turn==1)
	{
		return 2;
	}
	return 1;
}

// method to play game and call all other functions
void playGame(char grid[3][3],int turn)
{
   // variables for user input
  int playerChoiceRow,playerChoiceColumn;
  while(1)
    {
        // print turn message depicting whose turn is this
    	printf("\n\nPlayer %d's turn: \n",turn);
    	printf("Make your choice:- ");
    	// accept inputs from the user
    	// if accepted inputs are less than 2 inputs are invalid
    	if(scanf("%d %d",&playerChoiceRow,&playerChoiceColumn)!=2)
    	{
            printf("\nERROR!!! :INVALID Choice\nPlease select row and columns with in the range that is 1-3");
            continue;
        }

        // if choices are out of bounds of the grid then print ERROR message
    	if(playerChoiceRow>3 || playerChoiceRow<1 || playerChoiceColumn>3 || playerChoiceColumn<1)
    	{
    		printf("\nERROR!!! :INVALID Choice\nPlease select row and columns with in the range that is 1-3");
    		continue;
    	}

    	// if chosen cell is empty then fill the column with respective symbol according to the turn variable
    	if(grid[--playerChoiceRow][--playerChoiceColumn] == '-')
    	{
    	    if(turn == 1)
                grid[playerChoiceRow][playerChoiceColumn] = 'X';
            else
                grid[playerChoiceRow][playerChoiceColumn] = 'O';
    	}

    	// If cell is already filled then print message
    	else
    	{
			printf("\nERROR!!! :The location you given is already filled!\nPlease Select some other location");
			continue;
    	}

        // call all functions for the win , if any of the function return 1 then print the winning message
    	if (checkRows(grid,turn) ==1 || checkColumns(grid,turn) == 1 || checkDiagonals(grid,turn) == 1 )
    	{
    		printf("\n**************************\n* Player %d won the Game  *\n**************************\n\n",turn);
    		return;
    	}
    	// change the turn of the game to other player
    	turn = changeTurn(turn);

    	// print grid after player's move
    	printGrid(grid);
    	if(ifGridFull(grid) == 1)
        {
            printf("\n**************\n* Game Drawn *\n**************");
            return;
        }
    }
 }

 // function to get symbol from the integer
char getSymbol(int playerInteger)
{
    if(playerInteger == 1)
        return 'X';
    return 'O';
}
