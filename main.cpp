#include <iostream>
#include "snake.h"

int main(int argc, char ** argv){
	int time = 0;
	SnakeGame snakeGame;
	
	while(time < 10){
		snakeGame.placeFruit();
		snakeGame.getFruitPosition();
		snakeGame.drawScreen();
		time++;
	}
}