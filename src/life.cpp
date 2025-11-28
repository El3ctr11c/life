#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "life.h"

std::vector<std::vector<int>> getBoard() {
	//Please Enter the name of the file you want to run (<name>.txt)
	std::string filename;
	std::cin >> filename;

	//Attempt to open board
	std::ifstream infile;
	infile.open(filename, std::ios::in);
	
	if (!infile) {
		std::cerr << "Error trying to open file!" << std::endl;
		std::exit(1);
	}
		
	std::vector<std::vector<int>> board;
	
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
