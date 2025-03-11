#ifndef PARSER_H
#define PARSER_H

#include <string>
#include <vector>
#include "tokens.hpp"

class Parser {
  public:
    void parse(std::ifstream &input);
    std::vector<Token> getParsedData() const;

  private:
    std::vector<std::string> parsedData;
};

#endif
