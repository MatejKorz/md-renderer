#include "parser.hpp"
#include <iostream>
#include <fstream>

void Parser::parse(std::ifstream &input) {

    std::string line;
    while (std::getline(input, line)) {
        std::cout << line << "\n";
    }

}
