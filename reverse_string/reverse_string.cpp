#include <string>
#include "reverse_string.h"

namespace reverse_string {
	
    std::string reverse_string(std::string original_str){
            std::string rev_str = ""; /*empty string vector*/
            for(int i = (original_str.size()) - 1 ; i >= 0; i--){
                rev_str += original_str.at(i);
            }
            return rev_str;
    }
}
