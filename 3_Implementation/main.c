#include "TicTacToeOperations.h"
#include "TicTacToeOperations.c"

int main()
{
	int grid[3][3] = {{0,0,0},{0,0,0},{0,0,0}};

	int turn = 1;
	int playerChoiceRow,playerChoiceColumn;
	printf("Welcome to Tic Tac Toe Game\n");
	printf("You need to select the row and column number of the grid to make your turn\n");
	printf("Example grid to select from\n\t(1,2) for second column of first row\n\t(2,3) For third column of second row");

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
    	if(grid[--playerChoiceRow][--playerChoiceColumn] == 0)
    	{
    		grid[playerChoiceRow][playerChoiceColumn] = turn;
    	}
    	else
    	{
			printf("The location you given is already filled!\nPlease Select some other location");
			continue;
    	}

    	if (checkRows(grid,turn) ==1 || checkColumns(grid,turn) == 1 || checkDiagonals(grid,turn) == 1 )
    	{
    		printf("\n\nPlayer %d won the Game\nThanks for playing",turn);
    		return 0;
    	}
    	turn = changeTurn(turn);
    	printGrid(grid);
    	if(ifGridFull(grid) == 1)
        {
            printf("Game Drawn\nThanks for playing");
        }
    }

	return 0;
}
