#if !defined(QUEEN_ATTACK_H)
#define QUEEN_ATTACK_H

namespace queen_attack {
	
	std::pair <int, int> white;
	std::pair <int, int> black;

	void init_empty_chess_board(char arr[][8]);
	void show_chess_board(char matrix[][8]);
	
}  // namespace queen_attack

#endif // QUEEN_ATTACK_H
