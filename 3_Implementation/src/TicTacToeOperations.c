#include "TicTacToeOperations.h"

// Implementation of CheckRows Function

int checkRows(char grid[3][3],int playerInteger)
{
	int numberOfOccurences;
	char sym = getSymbol(playerInteger);
	// Loop to go through the grid and check for the occurences of the
	for(int i=0;i<3;i++)
	{
		numberOfOccurences=0;
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



int checkColumns(char grid[3][3],int playerInteger)
{
	int numberOfOccurences;
	char sym = getSymbol(playerInteger);
	// Loop to go through the grid and check for the occurences of the
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


int checkDiagonals(char grid[3][3],int playerInteger)
{
	int numberOfOccurences=0;
	char sym = getSymbol(playerInteger);
	for(int i=0;i<3;i++)
	{
		if(grid[i][i] == sym)
		{
			numberOfOccurences++;
		}
	}
	if(numberOfOccurences==3)
	{
		return 1;
	}

	if( (grid[2][0] == sym) && (grid[0][2] == sym) && (grid[1][1] == sym))
	{
		return 1;
	}
	return 0;
}


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
	return 1;
}

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


int changeTurn(int turn)
{
	if(turn==1)
	{
		return 2;
	}
	return 1;
}

void playGame(char grid[3][3],int turn)
{
  int playerChoiceRow,playerChoiceColumn;
  while(1)
    {
    	printf("\n\nPlayer %d's turn: \n",turn);
    	printf("Make your choice:- ");
    	scanf("%d %d",&playerChoiceRow,&playerChoiceColumn);
    	if(playerChoiceRow>3 || playerChoiceRow<1 || playerChoiceColumn>3 || playerChoiceColumn<1)
    	{
    		printf("\nINVALID Choice\nPlease select row and columns with in the range that is 1-3");
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
			printf("The location you given is already filled!\nPlease Select some other location");
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
            printf("Game Drawn\n");
        }
    }
 }

char getSymbol(int playerInteger)
{
    if(playerInteger == 1)
        return 'X';
    return 'O';
}
