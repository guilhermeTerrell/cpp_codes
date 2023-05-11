#include <utility>
#include <stdexcept>
#include <iostream>
#include "queen_attack.h"

/*Member functions definitions from class chess_board*/

using namespace queen_attack;

chess_board::chess_board() : _white (std::make_pair(7, 3)), _black(std::make_pair(5, 2)) {}; //default costructor

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

void chess_board::init_empty_chess_board() {
	for(int row = 0; row <= 7; row++){
		for(int column = 0; column <= 7; column++){
			this -> chess_board_matrix[row][column] = '#';
		}
	}
}

void chess_board::show_chess_board() {

	for(int row = 0; row <=7; row++){
		if (row == 0)std::cout << "  " << "a b c d e f g h" << std::endl;
		for(int column = 0; column <= 7; column++){
			
			if (column == 0) {
				std::cout << row << " " << this -> chess_board_matrix[row][column] << " ";
			}
			else if (column == 7) {
				std::cout << this -> chess_board_matrix[row][column] << " " << row << std::endl;
			}
			else std::cout << this -> chess_board_matrix[row][column] << " ";
		}
	}
	std::cout << "  " << "a b c d e f g h" << std::endl;
}