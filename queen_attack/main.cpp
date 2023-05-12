#include <iostream>
#include "queen_attack.h"

int main (int argc, char ** argv){
	 
	auto white = std::make_pair(8, 4);
    auto black = std::make_pair(5, 3);
	
	queen_attack::chess_board board{white, black};
	
	board.init_empty_chess_board();
	board.make_a_move('w', 5, 5);
	board.show_chess_board();
	std::cout << "----------------------------" << std::endl;
	board.make_a_move('b', 1, 4);
	board.show_chess_board();
	std::cout << "----------------------------" << std::endl;
	board.make_a_move('w', 2, 7);
	board.show_chess_board();
	std::cout << "----------------------------" << std::endl;
	board.make_a_move('b', 0, 0);
	board.show_chess_board();
	
	
	std::cout << "Posição final" << std::endl;
	std::cout << "white: " << std::endl;
	std::cout << "x = " << board.white().first << std::endl;
	std::cout << "y = " << board.white().second << std::endl;
	std::cout << "black: " << std::endl;
	std::cout << "x = " << board.black().first << std::endl;
	std::cout << "y = " << board.black().second << std::endl;

	return 0;
}
