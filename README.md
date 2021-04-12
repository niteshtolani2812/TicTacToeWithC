# TicTacToeWithC
This is my project for L&amp;T STEP IN program. This Game desiged in C Programming Language using multifile approach. I have used the concepts of functions, 2D arrays and multifile approach.




Build | Code Quality | Unity | [Git Inspector](using github.io option)
------|----------|-------|--------------
[![C/C++ CI](https://github.com/bmaan99/TicTacToeWithC/actions/workflows/c-cpp.yml/badge.svg)](https://github.com/bmaan99/TicTacToeWithC/actions/workflows/c-cpp.yml) | [![Static Cppcheck](https://github.com/bmaan99/TicTacToeWithC/actions/workflows/cppcheck.yml/badge.svg)](https://github.com/bmaan99/TicTacToeWithC/actions/workflows/cppcheck.yml) [![Dynamic Valgrind](https://github.com/bmaan99/TicTacToeWithC/actions/workflows/CodeQuality_Dynamic.yml/badge.svg)](https://github.com/bmaan99/TicTacToeWithC/actions/workflows/CodeQuality_Dynamic.yml)| [![Unity - Unit Testing](https://github.com/bmaan99/TicTacToeWithC/actions/workflows/unity.yml/badge.svg)](https://github.com/bmaan99/TicTacToeWithC/actions/workflows/unity.yml)| [![Git Inspector](https://github.com/bmaan99/TicTacToeWithC/actions/workflows/gitinspector.yml/badge.svg)](https://github.com/bmaan99/TicTacToeWithC/actions/workflows/gitinspector.yml)


## Folder Structure
Folder             | Description
-------------------| -----------------------------------------
`1_Requirements`   | Documents detailing requirements and research
`2_Design`         | Documents specifying design details
`3_Implementation` | All code and documentation
`4_Test_plan`      | Documents with test plans and procedures

## Contributors List and Summary

PS No. |  Name   |    Features    | Issuess Raised |Issues Resolved|No Test Cases|Test Case Pass
-------|---------|----------------|----------------|---------------|-------------|--------------
258260 | Balkaran Singh  | Whole App    | 5     | 3   | 20   | 20     
## Challenges Faced and How Was It Overcome

## 1. Unable to keep check on the input values:
This was solved by having if statements on the range of values so that it does not go out of bounds of the game grid. Moreover, I have taken the benefit of the return value of scanf to ensure that 2 values are received by the program at each time when the user enters its choice for the move.

## 2. Some problems in getting 'X' and 'O' on the grid
First I have used simple integers in the game grid, but then I used 'X' and 'O' on the grid by making a function to get symbols by the corresponding player integer. This function helped to treat the grid as a 2D char array.


