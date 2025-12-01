#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include "board.h"
#include "life.h"

void displayUI();
void displayOptions();

int main() {
	displayUI();
	displayOptions(); 
	
	int choice;
	std::cout << "Enter the option you want to select: ";
	std::cin >> choice;
	

	//Ask user for the option to select
	switch (choice) {
		//User choice to load a board
		case(1):
			//simulate();
			break;
		/*
		"Ill worry about this later"
		case(2):
			change_settings();
			break;
		*/
		
		default:
			std::cout << "Invalid Choice!" << std::endl;
			break;
	}



	return 0;
}


void displayUI() {
	std::cout << std::string(60, '=') << std::endl;
	std::cout << "Hello Welcome to Brandon's Version of Conways Game of Life!" << std::endl;
	std::cout << std::string(60, '=') << std::endl;

	//Rules of Conways Game of life
	std::cout << "Rules of Conway's Game of Life:" << std::endl;
	std::cout << "• "  << "Any live cell with fewer than two live neighbours dies, as if by underpopulation." << std::endl;
    	std::cout << "• "  <<  "Any live cell with two or three live neighbours lives on to the next generation." << std::endl;
	std::cout << "• "  <<  "Any live cell with more than three live neighbours dies, as if by overpopulation." << std::endl;
	std::cout << "• "  << "Any dead cell with exactly three live neighbours becomes a live cell, as if by reproduction.\n" << std::endl;
}

void displayOptions() {
	std::cout << "User Options: (Type the number to select option)" << std::endl;
	std::cout << "1). Load a Board" << std::endl;
	std::cout << "2). Settings" << std::endl;
	std::cout << std::string(60, '=') << std::endl;
}
