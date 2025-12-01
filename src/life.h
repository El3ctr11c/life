#ifndef LIFE_H
#define LIFE_H

#include "board.h"

//Class that simulates the game of life

class Life {
	public:
		int generations;
		int alive_count;
		int dead_count;

		Board lifeBoard;
		//Constructor 
		Life();

		//Rules 
		Board getNextState(Board curr);

	private:
		//Helper functions
};
#endif
