#include "TicTacToeOperations.h"
#include "TicTacToeOperations.c"

int main()
{
	char grid[3][3] = {{'-','-','-'},{'-','-','-'},{'-','-','-'}};

	int turn = 1,choice = 1;
	printf("Welcome to Tic-Tac-Toe Game\n");
	printf("You need to select the row and column number of the grid to make your turn\n");
	printf("Example grid to select from\n\t(1,2) for second column of first row\n\t(2,3) For third column of second row\n");
    printGrid(grid);
    do
    {
        playGame(grid,turn);
        printf("\n\nWant to play another Game?\nPress 1 to play Again ");
        scanf("%d",&choice);

    }while(choice == 1);

    printf("\nThanks for Playing");
	return 0;
}
