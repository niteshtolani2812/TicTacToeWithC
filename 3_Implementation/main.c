// including both header and source file
#include "TicTacToeOperations.h"
#include "src/TicTacToeOperations.c"

// main function of the Application
int main()
{

    // turn variable for the represent present turn of the game
    // choice variable for if you want to play game again
	int turn = 1,choice = 1;

	// printing welcome message of the game
	printf("Welcome to Tic-Tac-Toe Game\n");
	printf("You need to select the row and column number of the grid to make your turn\n");
	printf("Example grid to select from\n\t(1,2) for second column of first row\n\t(2,3) For third column of second row\n");

    do
    {
        // grid of the game
        char grid[3][3] = {{'-','-','-'},{'-','-','-'},{'-','-','-'}};

        // printing grid at the start of the game
        printGrid(grid);

        // calling the play game function of the game
        playGame(grid,turn);
        printf("\n\nWant to play another Game?\nPress 1 to play Again ");
        scanf("%d",&choice);
    }while(choice == 1);

    // printing ending message
    printf("\n\n**********************\n* Thanks for Playing *\n**********************");
	return 0;
}
