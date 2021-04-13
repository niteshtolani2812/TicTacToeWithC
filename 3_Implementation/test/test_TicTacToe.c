#include "unity.h"
#include "TicTacToeOperations.h"


    /* Modify these two lines according to the project */
    #define PROJECT_NAME    "Tic Tac Toe"

    /* Prototypes for all the test functions */
    void test_checkRows(void);
    void test_checkColumns(void);
    void test_checkDiagonals(void);
    void test_ifGridFull(void);
    void test_changeTurn(void);
    void test_getSymbol(void);

    /* Required by the unity test framework */
    void setUp(){}
    /* Required by the unity test framework */
    void tearDown(){}

    /* Start of the application test */
    int main(void)
    {
    /* Initiate the Unity Test Framework */
      UNITY_BEGIN();

    /* Run Test functions */
      RUN_TEST(test_checkRows);
      RUN_TEST(test_checkColumns);
      RUN_TEST(test_checkDiagonals);
      RUN_TEST(test_ifGridFull);
      RUN_TEST(test_changeTurn);
      RUN_TEST(test_getSymbol);

      /* Close the Unity Test Framework */
      return UNITY_END();
    }

    // Write all the test functions 
    void test_checkRows(void) {
      char grid1[3][3] =  {{'X','X','X'},{'O','O','-'},{'O','X','-'}};
      char grid2[3][3] =  {{'X','X','-'},{'O','-','O'},{'-','X','-'}};
      char grid3[3][3] =  {{'X','X','-'},{'O','O','O'},{'-','X','-'}};
      char grid4[3][3] =  {{'X','X','-'},{'O','-','O'},{'-','X','-'}};
      
      TEST_ASSERT_EQUAL(1, checkRows(grid1,1));
      TEST_ASSERT_EQUAL(0, checkRows(grid2,1));
      TEST_ASSERT_EQUAL(1, checkRows(grid3,2));
      TEST_ASSERT_EQUAL(0, checkRows(grid4,2));
    }

    void test_checkColumns(void) {

      char grid1[3][3] =  {{'X','O','O'},{'X','O','-'},{'X','X','-'}};
      char grid2[3][3] =  {{'X','X','-'},{'O','-','O'},{'-','X','-'}};
      char grid3[3][3] =  {{'O','X','-'},{'O','X','O'},{'O','X','-'}};
      char grid4[3][3] =  {{'X','X','-'},{'O','-','O'},{'-','X','-'}};
      

      TEST_ASSERT_EQUAL(1, checkColumns(grid1,1));
      TEST_ASSERT_EQUAL(0, checkColumns(grid2,1));
      TEST_ASSERT_EQUAL(1, checkColumns(grid3,2));
      TEST_ASSERT_EQUAL(0, checkColumns(grid4,2));

    }

    void test_checkDiagonals(void) {
      char grid1[3][3] =  {{'X','O','X'},{'X','X','-'},{'O','O','X'}};
      char grid2[3][3] =  {{'X','O','X'},{'X','X','-'},{'X','O','O'}};
      char grid3[3][3] =  {{'X','X','-'},{'O','-','O'},{'-','X','-'}};
      char grid4[3][3] =  {{'O','X','-'},{'X','O','O'},{'O','-','O'}};
      char grid5[3][3] =  {{'X','O','O'},{'X','O','-'},{'O','O','-'}};
      char grid6[3][3] =  {{'X','X','-'},{'O','-','O'},{'-','X','-'}};
      

      TEST_ASSERT_EQUAL(1, checkDiagonals(grid1,1));
      TEST_ASSERT_EQUAL(1, checkDiagonals(grid2,1));
      TEST_ASSERT_EQUAL(0, checkDiagonals(grid3,1));
      TEST_ASSERT_EQUAL(1, checkDiagonals(grid4,2));
      TEST_ASSERT_EQUAL(1, checkDiagonals(grid5,2));
      TEST_ASSERT_EQUAL(0, checkDiagonals(grid6,2));

    }

    void test_ifGridFull(void) {
      char grid1[3][3] =  {{'X','O','X'},{'X','X','O'},{'O','O','X'}};
      char grid2[3][3] =  {{'X','O','-'},{'-','X','-'},{'X','O','O'}};
      

      TEST_ASSERT_EQUAL(1, ifGridFull(grid1));
      TEST_ASSERT_EQUAL(0, ifGridFull(grid2));

    }
    void test_changeTurn(void)
    {
      TEST_ASSERT_EQUAL(1, changeTurn(2));
      TEST_ASSERT_EQUAL(2, changeTurn(1));

    }

    void test_getSymbol(void)
    {
      TEST_ASSERT_EQUAL('X', getSymbol(1));
      TEST_ASSERT_EQUAL('O', getSymbol(2));
    }
