#include <iostream>
#include "snake.h"

int main(int argc, char ** argv){

	SnakeGame snakeGame;
	
	while(snakeGame.gameOver() == 0){
		if(snakeGame.get_fruit_eated_status() == 1){
			snakeGame.placeFruit();
		}
		snakeGame.drawScreen();
		snakeGame.move_snake();
		snakeGame.eat_fruit();
		system("clear");
	}
}