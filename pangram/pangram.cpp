#include "pangram.h"
#include <string>
#include <ctype.h>
#include <iostream>

namespace pangram{
	
	#define QTY_LETTERS 26
	//typedef enum PANGRAM { NOT_PANGRAM = 0, PANGRAM = 1};
	
	int is_pangram(std::string text){
	
		std::string usedLetter = "";
		
		//empty input string
		if (text.size() == 0){
			return 0;
		}

		for(int index = 0; index <= int(( text.size() ) - 1); index++){

			// if not finded and caractere is not space means new letter
			// append to it
			if(( usedLetter.find(tolower(text.at(index))) == std::string::npos ) && ( isalpha(text.at(index)) )){
				usedLetter += text.at(index);
			}
		}
		return ( usedLetter.size() == QTY_LETTERS ) ? 1 : 0;
	}
	
} // namespace pangram
