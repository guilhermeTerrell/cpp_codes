#include <iostream>
#include "snake.h"

/*
	Function: 	screen
	Objective:	Print game screen where the snake and eats will be placed
	Arguments:	none
	Returns:	none
*/
void SnakeGame::drawScreen(void){
	
	/*print screen*/
	for (int row = 0; row < SnakeGame::height; row++){
		for (int column = 0; column < SnakeGame::width; column++){
			if ((row == 0) || (row == SnakeGame::height - 1)) std::cout << "#";
			else{
				if((column == 0) || (column == SnakeGame::width - 1)) std::cout << "#";
				else if ((column == this -> fruit_coord.first) && (row == this -> fruit_coord.second)) std::cout << "@";
				else std::cout << " ";
			}
		}
		std::cout << std::endl;
	}
}

/*
	Function: 	placeFruit
	Objective:	Print fruit on the game screen
	Arguments:	none
	Returns:	none
*/
void SnakeGame::placeFruit(void){
	this -> fruit_coord.first = 1 + (rand() % (SnakeGame::width - 2)); //randomly generates x coordinate (1~39)
	this -> fruit_coord.second = 1 + (rand() % (SnakeGame::height - 2)); //randomly generates y coordinate (1~19)
}

/*
	Function: 	getFruitPosition
	Objective:	Print the coordinates of the fruit
	Arguments:	none
	Returns:	none
*/
void SnakeGame::getFruitPosition(void){
	std::cout << "x: " << this -> fruit_coord.first << std::endl;
	std::cout << "y: " << this -> fruit_coord.second << std::endl;
}
