#ifndef SNAKE
#define SNAKE

class SnakeGame {
private:
	int const width = 40;
	int const height = 20;
	std::pair<int, int> fruit_coord;
public:
	void drawScreen(void);
	void placeFruit(void);
	void getFruitPosition(void);
};


#endif //end of SNAKE
