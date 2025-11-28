#include <iostream>
#include <iomanip>
#include <string>

void displayUI();
void displayOptions();

int main() {
	displayUI();
	displayOptions(); 
	
	enum choices {LOAD_OPTION = 0, SETTINGS_OPTION = 1, BACK_OPTION = 2, EXIT_OPTION = 3};

	//Ask user for the option to select
	int choice;
	std::cout << "Enter your choice: ";
	std::cout << std::endl;
	std::cin >> choice;
	
	//Load Board 
	
	//Settings (Options to change settings) stay on settings screen until exit or go back
	
	//Exit Progra=;
	
	//UI Option
	switch (choice) {
		//User chose 
		case(LOAD_OPTION):
			break;
		case(BACK_OPTION):
			break;
		case(EXIT_OPTION):
			break;
		default:
			std::cout << "Invalid Choice!" << std::endl;
			break;
	}
	//Please Enter the name of the file you want to run
		
	//Timesteps per second 30 steps per second
		
	//Load Board (nameboard.txt selected!)
	//Settings txt file that stores how many seconds for simulation and timesteps per second, color
	//Ask user if they are ready? Yes / No : 
	//Loop each stateof game
	
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
	std::cout << "3). N/A" << std::endl;
	std::cout << "4). N/A" << std::endl;
	std::cout << "5). N/A" << std::endl;
	std::cout << std::string(60, '=') << std::endl;
}
