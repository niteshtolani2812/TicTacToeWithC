# TEST PLAN
## High level test plan
| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual O/P** |**Type Of Test**  |    
|------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       |Test **checkRows** function to check if somone won |  [- O -,X X X,O O -]| 1 | 1 |Scenario Based |
|  H_02       |Test **checkRows** function to check if someone did not win|[X O -,X - -,- O -]| 0 | 0 |Scenario based |
|  H_03       |Test **checkColumns** function to check if someone won| [X O -,X - -,X O -]| 1 | 1 |Scenario based   |
|  H_04       |Test **checkColumns** function to check if someone did not win| [X O -,X - -,- O -]| 0 | 0 |Scenario based   |
|  H_05       |Test **checkDiagonals** function to check if someone won| [X O -,- X -,X O X]| 1 | 1 |Scenario based   |
|  H_06       |Test **checkColumns** function to check if someone did not win| [X O -,X - -,X O -]| 0 | 0 |Scenario based   |
## Low level test plan
| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       |Test **changeTurn** function for Player 1| 1 | 2 | 2 |Scenario based |
|  L_02       |Test **changeTurn** function for Player 2| 2 | 1 | 1 |Scenario based |
|  L_03       |Test **getSymbol** function for Player 1| 1 | X | X |Scenario based    |
|  L_04       |Test **getSymbol** function for Player 2| 2 | O | O |Scenario based    |
|  L_05       |Test **isGridFull** function when grid is full| [O O X,X X X,O O X]| 1 | 1 |Scenario Based |
|  L_06       |Test **isGridFull** function when grid is full| [- O X,X - X,O - X]| 0 | 0 |Scenario Based |
# Test Cases Output
![Test Cases Output](https://user-images.githubusercontent.com/54026778/114516401-fec14200-9c5a-11eb-93be-a4cb982d8bcc.jpg)

