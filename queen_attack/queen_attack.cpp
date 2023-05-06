#include <iostream>
#include "queen_attack.h"

/*Member functions definitions from class Chess_Board*/

using namespace queen_attack;

std::pair<int, int> chess_board::board(int x, int y){
	if((x >= 0) && (y >= 0)) return std::make_pair(x, y);	
}

bool chess_board::can_attack(std::pair<int, int> white_queen, std::pair<int, int> black_queen){
	//same row and column is invalid (position must be different)
	if((white_queen.first == black_queen.first) && (white_queen.second == black_queen.second)) return false;
	
	//same row
	else if((white_queen.first == black_queen.first) && (white_queen.second != black_queen.second)) return true;
	
	//same column
	else if((white_queen.first != black_queen.first) && (white_queen.second == black_queen.second)) return true;
	
	//same diagonal
}

std::pair<int, int> chess_board::white(){
	return this -> _white;
}

std::pair<int, int> chess_board::black(){
	return this -> _black;
}