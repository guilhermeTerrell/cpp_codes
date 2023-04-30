#include <iostream>
#include <cstdio>
#include "reverse_string.h"

int main(int argc, char ** argv){
	
	std::string rev_str = reverse_string::reverse_string("abacate");
	std::cout << rev_str << "\n";
	
	return 0;
}