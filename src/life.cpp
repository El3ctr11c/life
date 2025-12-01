#include <iostream>

#include "board.h"
#include "life.h"

//Initialize life simulation
Life::Life() {
	//Get Board from file
	Board lifeBoard(getBoard());

	generations = 0;
		
	//Count how many cells are alive / dead
	alive_count = 0; // some method here
	dead_count = 0;
}



