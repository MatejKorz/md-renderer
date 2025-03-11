#include <fstream>
#include <iostream>

#include "parser.hpp"

int main(int argc, char *argv[]) {
    if (argc < 2) {
        return -1;
    }


    Parser parser = Parser();

    {
        std::ifstream inputFile(argv[1]);
        if (!inputFile) {
            std::cerr << "File not found" << "\n";
        }

        parser.parse(inputFile);

    }



    return 0;
}
