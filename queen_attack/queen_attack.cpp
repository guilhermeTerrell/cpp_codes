#include <iostream>
#include "queen_attack.h"

namespace queen_attack {
	
	void init_empty_chess_board(char matrix[][8]){
		
		/*loop to create an 2-D array of '0' like {'0', '0', '0', ..., '0'}*/
		/*outside for loop iterate over rows*/
		for(int i = 0; i <= 7; i++){
			/*inside for loop iterate over cols*/
			for(int j = 0; j <= 7; j++){
				matrix[i][j] = '0';
			}
		}
		//std::cout << empty_board << std::endl;
	}
	
	void show_chess_board(char matrix[][8]){
		
		std::cout << "  a b c d e f g h" << std::endl;
		/*outside for loop iterate over rows*/
		for(int i = 0; i <= 7; i++){
			std::cout << "  - - - - - - - -" << std::endl;
			/*inside for loop iterate over cols*/
			for(int j = 0; j <= 7; j++){
				if(j == 0) std::cout << i << " ";
				std::cout << matrix[i][j] << " ";
				if(j == 7) std::cout << i << std::endl;
			}
		}
		std::cout << "  - - - - - - - -" << std::endl;
		std::cout << "  a b c d e f g h" << std::endl;
	}
	
}  // namespace queen_attack
