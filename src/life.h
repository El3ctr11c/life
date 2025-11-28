#ifndef LIFE_H
#define LIFE_H

#include <vector>
#include <iomanip>

//Function that asks user for board and simulates board for generations
std::vector<std::vector<char>> getBoard();

void printBoard(std::vector<std::vector<char>> board);

void simulateBoard();

#endif
