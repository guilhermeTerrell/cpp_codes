#include <iostream>
#include "snake.h"
//#include <conio.h>

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
				else if ((column == this -> snake_head.first) && (row == this -> snake_head.second)) std::cout << this -> snake_head_char;
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
	this -> fruit_coord.first = 1 + (rand() % (SnakeGame::width - 2)); //randomly generates x coordinate (1~38)
	this -> fruit_coord.second = 1 + (rand() % (SnakeGame::height - 2)); //randomly generates y coordinate (1~18)
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

/*
	Function: 	gameOver
	Objective:	Evaluates if snake head hits the wall. If so, game over flag is updated to 1. 
	Arguments:	none
	Returns:	none
*/
bool SnakeGame::gameOver(void){
	if((this -> snake_head.first == 0) || (this -> snake_head.first == 39) || (this -> snake_head.second == 0) 
			||(this -> snake_head.second == 19)){
		this -> game_over = 1;
	}
	else this -> game_over = 0;
	return this -> game_over;
}

/*
	Function: 	move_snake
	Objective:	Move snake to the screen with the following commands:
				w: up
				s: down
				d: right
				a: left
				
	Arguments:	none
	Returns:	none
*/
void SnakeGame::move_snake(void){
	std::cout << "Move the snake" << std::endl;
	std::cin >> this -> snake_direction_moviment;
	SnakeGame::define_snake_head_char();
	
	/*increase y coordinate = go up*/
	if(this -> snake_direction_moviment == 'w'){
		this -> snake_head.second--;
	}
	
	/*decrease y coordinate = go down*/
	if(this -> snake_direction_moviment == 's'){
		this -> snake_head.second++;
	}
	
	/*increase x coordinate = go right*/
	if(this -> snake_direction_moviment == 'd'){
		this -> snake_head.first++;
	}
	
	/*decrease x coordinate = go left*/
	if(this -> snake_direction_moviment == 'a'){
		this -> snake_head.first--;
	}
}

/*
	Function: 	define_snake_head_char
	Objective:	Define the charactere that represents the snake head depending on the direction movement
				w: up 		^
				s: down		v
				d: right	>
				a: left		<
				
	Arguments:	none
	Returns:	none
*/
void SnakeGame::define_snake_head_char(void){
	if (this -> snake_direction_moviment == 'w') this -> snake_head_char = '^';
	if (this -> snake_direction_moviment == 's') this -> snake_head_char = 'v';
	if (this -> snake_direction_moviment == 'd') this -> snake_head_char = '>';
	if (this -> snake_direction_moviment == 'a') this -> snake_head_char = '<';
}