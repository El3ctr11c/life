#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "life.h"

std::vector<std::vector<int>> getBoard() {
	//Please Enter the name of the file you want to run (<name>.txt)
	std::cout << "Enter the name of the file you want to run: ";
	std::string filename;
	std::cin >> filename;
	std::cout << std::endl;

	//Attempt to open board
	std::string infilePath = "../boards/" + filename;

	//std::cout << infilePath << std::endl;

	std::ifstream infile;
	infile.open(infilePath, std::ios::in);
	
	if (!infile) {
		std::cerr << "Error trying to open file!" << std::endl;
		std::exit(1);
	}
	
	//Board will be stored in the stack
	std::vector<std::vector<int>> board;
	
	//Read File line by line (row by row)
	std::string rowString;
	while (std::getline(infile, rowString)) {
		std::cout << rowString << std::endl;
	}

	
	return board;
	//Timesteps per second 30 steps per second

	//Load Board (nameboard.txt selected!)
	//Settings txt file that stores how many seconds for simulation and timesteps per second, color
	//Ask user if they are ready? Yes / No : 
	//Loop each stateof game

}

void simulateBoard() {
	std::cout << "Simulating..." << std::endl;
}
