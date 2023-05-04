#include <iostream>
#include "queen_attack.h"

int main(int argc, char ** argv){
	
	char chess_board[8][8];
	queen_attack::init_empty_chess_board(chess_board);
	queen_attack::show_chess_board(chess_board);
	
	queen_attack::white = std::make_pair(10,20);

	return 0;
}