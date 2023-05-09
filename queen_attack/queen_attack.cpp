#include <utility>
#include <stdexcept>
#include "queen_attack.h"

/*Member functions definitions from class chess_board*/

using namespace queen_attack;

chess_board::chess_board() : _white (std::make_pair(7, 3)), _black(std::make_pair(5, 2)) {};

chess_board::chess_board(const std::pair<int, int> white, const std::pair<int, int> black)
			: _white(white), _black(black) {
				if (white == black) throw std::domain_error("Queen positions can not be the same");
				else if ((white.first < 0) || (white.second < 0) || (black.first < 0) || (black.second < 0)) 
					throw std::domain_error("Coordinates must be positive");
				else if ((white.first == 0) || (black.first == 0)) 
					throw std::domain_error("Newly placed queen must have row");
				else if ((white.second == 0) || (black.second == 0)) 
					throw std::domain_error("Newly placed queen must have column");
			}; //constructor to initialize chess_board class variable members

std::pair<int, int> chess_board::board(int x, int y){
	return std::make_pair(x, y);	
}

bool chess_board::can_attack() const{
	
	//same row
	if((this -> _white.first == this -> _black.first) && (this -> _white.second != this -> _black.second)) return true;
	
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