#include <iostream>
#include "queen_attack.h"

int main (int argc, char ** argv){
	 
	const auto white = std::make_pair(8, 4);
    const auto black = std::make_pair(0, 3);
	
	queen_attack::chess_board{white, black};
	
	return 0;
}
