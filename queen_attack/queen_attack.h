#if !defined(QUEEN_ATTACK_H)
#define QUEEN_ATTACK_H

namespace queen_attack {
	class chess_board {	
	private:
		std::pair<int, int> const _white;
		std::pair<int, int> const _black;
	public:
		chess_board(const std::pair<int, int>& white, const std::pair<int, int>& black)
			: _white(white), _black(black)
		{}; //constructor to initialize chess_board class variable members
		std::pair<int, int> white(void); //return white queen position
		std::pair<int, int> black(void); //return black queen position
		std::pair<int, int> board(int, int); //move queens in the board for a given coordinate
		bool can_attack(std::pair<int, int>, std::pair<int, int>); //check positions of each queen to see attack condition
	};	
}  // namespace queen_attack

#endif // QUEEN_ATTACK_H
