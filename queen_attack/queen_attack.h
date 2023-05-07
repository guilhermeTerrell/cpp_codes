#if !defined(QUEEN_ATTACK_H)
#define QUEEN_ATTACK_H
#include <utility>
namespace queen_attack {
	class chess_board {	
	private:
		std::pair<int, int> const _white; //white queen
		std::pair<int, int> const _black; //black queen
	public:
		chess_board(const std::pair<int, int>, const std::pair<int, int>); //constructor to initialize chess_board class variable members
		std::pair<int, int> white(void) const; //return white queen position
		std::pair<int, int> black(void) const; //return black queen position
		std::pair<int, int> board(int, int); //move queens in the board for a given coordinate
		bool can_attack() const; //check positions of each queen to see attack condition
	};	
}  // namespace queen_attack

#endif // QUEEN_ATTACK_H
