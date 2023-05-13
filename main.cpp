#include <iostream>
#include "snake.h"

int main(int argc, char ** argv){

	SnakeGame snakeGame;
	
	while(snakeGame.gameOver() == 0){
		snakeGame.placeFruit();
		snakeGame.drawScreen();
		snakeGame.move_snake();
		system("clear");
	}
}