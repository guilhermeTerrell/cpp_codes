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
			this -> chess_board_matrix[row][column] = '-';
		}
	}
}

void chess_board::make_a_move(char queen_first_letter, int row, int column) {
	std::pair<int, int> previous_position; //store previous positons of queens 
	if ((row <= 7) && (column <= 7)){
		if (queen_first_letter == 'w') {
			previous_position = this -> _white;
			this -> _white = std::make_pair(row, column); //update white queen position
			this -> chess_board_matrix[row][column] = 'w'; //put her on the chess board
			this -> chess_board_matrix[previous_position.first][previous_position.second] = '-'; //restore previous position
		}
		else if (queen_first_letter == 'b') {
			previous_position = this -> _black;
			this -> _black = std::make_pair(row, column); //update black queen position
			this -> chess_board_matrix[row][column] = 'b'; //put her on the board
			this -> chess_board_matrix[previous_position.first][previous_position.second] = '-'; //restore previous position
		}
		else std::domain_error("No valid queen.");
	}
	else throw std::domain_error("Out of bound. Choose a valid position to make your move");
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