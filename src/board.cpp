#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <vector>

#include "board.h"

const char LIVE_CHAR = '#';
const char DEAD_CHAR = '.';

//Open up the settings file and display the current setting
//Options to change a specific attribute
//Settings file: Color, the characters, seconds

Board::Board(std::vector<std::vector<char>> inputBoard) {
	this->grid = inputBoard;
}

char Board::getCell(int x, int y) {
	return grid[x][y];
}

void Board::killCell(int x, int y) {
	grid[x][y] = DEAD_CHAR;
}


//NOT A METHOD OF BOARD CLASS
std::vector<std::vector<char>> getBoard() {
	//Please Enter the name of the file you want to run (<name>.txt)
	std::cout << "Enter the name of the file you want to run: ";
	std::string filename;
	std::cin >> filename;
	std::cout << std::endl;

	//Attempt to open board
	std::string infilePath = "../boards/" + filename;
	std::ifstream infile;
	infile.open(infilePath, std::ios::in);
	
	if (!infile) {
		std::cerr << "Error trying to open file! :(" << std::endl;
		std::exit(1);
	}
	std::cout << "Successfully found " << filename << "! :)" << std::endl;

	//Board will be stored in the stack (for now)
	std::vector<std::vector<char>> board;
	
	//Read File line by line (row by row
	std::string line;
	while (std::getline(infile, line)) {
		std::vector<char> row;
		
		//Rdeserve the number of columns to row (the size of rowString)
		row.reserve(line.size());

		//Populate buffer row by iterating through the chars of entire row (string)
		for (char c : line) {
			if (c == '1') row.push_back(LIVE_CHAR);
			else row.push_back(DEAD_CHAR);
		}
		//Add each row to board
		board.push_back(row);
	}
	return board;
}

void Board::modifyCell(int x, int y, char state) {
	if ((x >= 0 && x < countRows()) && (y >= 0 && y <= countCols())) {
		grid[x][y] = state;
	}
}

int Board::countRows() {
	return this->grid.size();
}
int Board::countCols() {
	return this->grid[0].size();
}

//TODO MODIFY THIS FUNCTION TO SUPPORT COLOR
void Board::printBoard() {
	for (auto v : grid) {
		for (auto c : v) {
			std::cout << std::setw(5) << c;
		}
	std::cout << std::endl;
	}
}


