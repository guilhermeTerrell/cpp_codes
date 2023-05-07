#include <utility>
#include <stdexcept>
#include "queen_attack.h"

/*Member functions definitions from class chess_board*/

using namespace queen_attack;

chess_board::chess_board(const std::pair<int, int> white, const std::pair<int, int> black)
			: _white(white), _black(black) {}; //constructor to initialize chess_board class variable members

std::pair<int, int> chess_board::board(int x, int y){
	return std::make_pair(x, y);	
}

bool chess_board::can_attack() const{
	
	//Negative positions are invalid
	if((this -> _white.first < 0) || (this -> _black.first < 0) || (this -> _white.second < 0) || (this -> _black.second < 0)) 
		throw std::domain_error("newly placed queen must have positiverow");
	
	//same row and column is invalid (position must be different)
	else if((this -> _white.first == this -> _black.first) && (this -> _white.second == this -> _black.second)) return false;
	
	//same row
	else if((this -> _white.first == this -> _black.first) && (this -> _white.second != this -> _black.second)) return true;
	
	//same column
	else if((this -> _white.first != this -> _black.first) && (this -> _white.second == this -> _black.second)) return true;
	
	//same diagonal
	else if (((this -> _white.first - this -> _black.first) == 0) && ((this -> _white.second - this -> _black.second) == 0)) return true;
	
	//another invalid moves
	else return false;
}

std::pair<int, int> chess_board::white() const{
	return this -> _white;
}

std::pair<int, int> chess_board::black() const{
	return this -> _black;
}