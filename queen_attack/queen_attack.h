#if !defined(QUEEN_ATTACK_H)
#define QUEEN_ATTACK_H
#include <utility>
namespace queen_attack {
	class chess_board {	
	private:
		std::pair<int, int> _white; //white queen
		std::pair<int, int> _black; //black queen
		char chess_board_matrix[8][8]; //matrix that represents the chess board
	public:
		chess_board(); //std constructor
		chess_board(const std::pair<int, int>, const std::pair<int, int>); //constructor to initialize chess_board class variable members
		std::pair<int, int> white(void) const; //return white queen position
		std::pair<int, int> black(void) const; //return black queen position
		std::pair<int, int> board(int, int); //move queens in the board for a given coordinate
		bool can_attack() const; //check positions of each queen to see attack condition
		void init_empty_chess_board(void); //initialize an empty chess board (without queens)
		void show_chess_board(void); //print chess board with queen positions
		void make_a_move(char, int, int); //make a valid move with your queen
	};	
}  // namespace queen_attack

#endif // QUEEN_ATTACK_H
