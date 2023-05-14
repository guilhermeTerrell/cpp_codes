#ifndef SNAKE
#define SNAKE

class SnakeGame {
private:
	bool game_over;
	bool fruit_eated;
	char snake_direction_moviment;
	char snake_head_char;
	std::string snake_tail;
	int const width = 40;
	int const height = 20;
	std::pair<int, int> fruit_coord;
	std::pair<int, int> snake_head;
public:
	SnakeGame() : 
		snake_head(20, 10), game_over(0), snake_direction_moviment(' '), snake_head_char('>'), snake_tail(" "), fruit_eated(1) {}; //default constructor to initialize data members in private area
	void drawScreen(void);
	void placeFruit(void);
	void getFruitPosition(void);
	bool gameOver(void);
	void move_snake(void);
	void define_snake_head_char(void);
	bool eat_fruit(void);
};


#endif //end of SNAKE
