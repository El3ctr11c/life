#ifndef BOARD_H
#define BOARD_H

#include <vector>

class Board {
	public:
		//Constructor
		Board(std::vector<std::vector<char>> inputBoard);

		//Returns a cell
		char getCell(int x, int y);
		
		//Assisn the [x][y]'th cell to the state
		void modifyCell(int x, int y, char state);

		//Turns a cell into a dead cell
		void killCell(int x, int y);

		//Cound the specific state of a cell in a grid
		int countCell(char state);

		void printBoard();

		void getNext(Board b);

		int countRows();
		int countCols();

	private:
		std::vector<std::vector<char>> grid;

};


std::vector<std::vector<char>> getBoard();

#endif
