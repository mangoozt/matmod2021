#include <iostream>
#include "strutils.h"


int main() {
    std::string str;
    std::getline(std::cin, str);

    std::cout << word_count(str.c_str()) << std::endl;
    std::cout << word_count("         ") << std::endl;
    std::cout << word_count("j  f") << std::endl;
    std::cout << word_count(" fgj         fdsghsfgdh") << std::endl;
    std::cout << word_count(" fgdhfgdj;;;;;;;;;") << std::endl;
    std::cout << word_count(" fgdhfgdj") << std::endl;
    std::cout << word_count("") << std::endl;

}
