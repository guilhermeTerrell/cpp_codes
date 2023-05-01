#include <iostream>
#include <string>
#include "pangram.h"


int main(int argc, char ** argv){

	std::string text = "the quick brown fox jumps over the lazy dog";

	int is_pangram = pangram::is_pangram(text);

	std::cout << is_pangram << std::endl;
	
	return 0;
}

