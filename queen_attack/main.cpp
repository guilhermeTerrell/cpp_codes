#include <iostream>
#include "queen_attack.h"

using namespace queen_attack;

int main(int argc, char ** argv){
	
	const auto white = std::make_pair(-1, 53);
    const auto black = std::make_pair(100, 39);
	
	chess_board board{white, black}; //Instanciating an object of class chess_board and initializing it´s variable members
	
	//std::pair<int, int> white = board.board(2,2);
	//std::pair<int, int> black = board.board(5,7);
	
	if (board.white().first > 0) std::cout << "positivo" << std::endl;
	
	return 0;
}