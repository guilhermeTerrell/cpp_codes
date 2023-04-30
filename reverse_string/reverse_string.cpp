#include <string>
#include "reverse_string.h"

namespace reverse_string {
	
    int size_str(std::string original_str){
            int index = 0;
            while(original_str[index] != '\0'){
                    index++;
            }
            return index;
    }
    
    std::string reverse_string(std::string original_str){
            std::string rev_str = ""; /*empty string vector*/
            for(int i = size_str(original_str) - 1 ; i >= 0; i--){
                rev_str += original_str[i];
            }
            return rev_str;
    }
}
