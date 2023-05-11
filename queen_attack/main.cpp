#include <iostream>
#include "queen_attack.h"

int main (int argc, char ** argv){
	 
	const auto white = std::make_pair(8, 4);
    const auto black = std::make_pair(5, 3);
	
	queen_attack::chess_board board{white, black};
	
	board.init_empty_chess_board();
	board.show_chess_board();
	
	return 0;
}
