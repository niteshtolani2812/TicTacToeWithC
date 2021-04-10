#include "unity.h"
#include "TicTacToeOperations.h"

/* Modify these two lines according to the project */
#define PROJECT_NAME    "Tic Tac Toe"

/* Prototypes for all the test functions */
//void test_checkRows(void);
//void test_checkColumns(void);
//void test_checkDiagonals(void);
//void test_ifGridFull(void);
void test_changeTurn(void);
void test_getSymbol(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  //RUN_TEST(test_checkRows);
  //RUN_TEST(test_checkColumns);
  //RUN_TEST(test_checkDiagonals);
  //RUN_TEST(test_ifGridFull);
  RUN_TEST(test_changeTurn);
  RUN_TEST(test_getSymbol);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
/*
/* Write all the test functions 
void test_checkRows(void) {
  TEST_ASSERT_EQUAL(1, checkRows({{'X','X','X'},{'O','O','-'},{'O','X','-'}},1));
  TEST_ASSERT_EQUAL(0, checkRows({{'X','X','-'},{'O','-','O'},{'-','X','-'}},1));
  TEST_ASSERT_EQUAL(1, checkRows({{'X','X','-'},{'O','O','O'},{'-','X','-'}},2));
  TEST_ASSERT_EQUAL(0, checkRows({{'X','X','-'},{'O','-','O'},{'-','X','-'}},2));
}

void test_checkColumns(void) {

  TEST_ASSERT_EQUAL(1, checkColumns({{'X','O','O'},{'X','O','-'},{'X','X','-'}},1));
  TEST_ASSERT_EQUAL(0, checkColumns({{'X','X','-'},{'O','-','O'},{'-','X','-'}},1));
  TEST_ASSERT_EQUAL(1, checkColumns({{'O','X','-'},{'O','X','O'},{'O','X','-'}},2));
  TEST_ASSERT_EQUAL(0, checkColumns({{'X','X','-'},{'O','-','O'},{'-','X','-'}},2));

}

void test_checkDiagonals(void) {

  TEST_ASSERT_EQUAL(1, checkDiagonals({{'X','O','X'},{'X','X','-'},{'O','O','X'}},1));
  TEST_ASSERT_EQUAL(1, checkDiagonals({{'X','O','X'},{'X','X','-'},{'X','O','O'}},1));
  TEST_ASSERT_EQUAL(0, checkDiagonals({{'X','X','-'},{'O','-','O'},{'-','X','-'}},1));
  TEST_ASSERT_EQUAL(1, checkDiagonals({{'O','X','-'},{'X','O','O'},{'O','-','O'}},2));
  TEST_ASSERT_EQUAL(1, checkDiagonals({{'X','O','O'},{'X','O','-'},{'O','O','-'}},2));
  TEST_ASSERT_EQUAL(0, checkDiagonals({{'X','X','-'},{'O','-','O'},{'-','X','-'}},2));

}

void test_ifGridFull(void) {

  TEST_ASSERT_EQUAL(1, ifGridFull({{'X','O','X'},{'X','X','O'},{'O','O','X'}}));
  TEST_ASSERT_EQUAL(0, ifGridFull({{'X','O','-'},{'-','X','-'},{'X','O','O'}}));

}*/

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
