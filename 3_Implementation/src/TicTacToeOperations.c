#include "TicTacToeOperations.h"

// Implementation of CheckRows Function

int checkRows(int grid[3][3],int playerInteger)
{
	int numberOfOccurences;

	// Loop to go through the grid and check for the occurences of the
	for(int i=0;i<3;i++)
	{
		numberOfOccurences=0;
		for(int j=0;j<3;j++)
		{
			if(grid[i][j]==playerInteger)
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



int checkColumns(int grid[3][3],int playerInteger)
{
	int numberOfOccurences;

	// Loop to go through the grid and check for the occurences of the
	for(int i=0;i<3;i++)
	{
		numberOfOccurences=0;
		for(int j=0;j<3;j++)
		{
			if(grid[j][i]==playerInteger)
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


int checkDiagonals(int grid[3][3],int playerInteger)
{
	int numberOfOccurences=0;
	for(int i=0;i<3;i++)
	{
		if(grid[i][i] == playerInteger)
		{
			numberOfOccurences++;
		}
	}
	if(numberOfOccurences==3)
	{
		return 1;
	}

	if( (grid[2][0] == playerInteger) && (grid[0][2] == playerInteger) && (grid[1][1] == playerInteger))
	{
		return 1;
	}
	return 0;
}


int ifGridFull(int grid[3][3])
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			// if one cell is empty return 0 that is grid is not full
			if(grid[i][j]==0)
			{
				return 0;
			}
		}
	}
	return 1;
}

void printGrid(int grid[3][3])
{
    printf("\n\t");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d  ",grid[i][j]);
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
