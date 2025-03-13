#include "parser.hpp"
#include <fstream>
#include <iostream>

Token findToken(std::string line) {
    for (int i = 0; i < line.size(); ++i) {
        char c = line[i];
        if (escapableChars.find(c) == std::string::npos) {
            continue;
        }

        if (i != 0 && line[i - 1] == '\\') {
            continue;
        }

        auto it = tokenMap.find(std::string(1, c));
        if (it == tokenMap.end()) {
            continue;
        }


        return {it->second, line.substr(i + 1)};
    }

    return {TokenType::Text, line};
}

std::string toString(TokenType type) {
    switch (type) {
        case TokenType::Heading: return "Heading";
        case TokenType::BoldItalic: return "BoldItalic";
        case TokenType::BlockQuote: return "BlockQuote";
        case TokenType::ListItem: return "ListItem";
        case TokenType::CodeBlock: return "CodeBlock";
        case TokenType::EscapeChar: return "EscapeChar";
        case TokenType::Text: return "Text";
        default: return "Unknown";
    }
}

void Parser::parse(std::ifstream &input) {

    std::string line;
    while (std::getline(input, line)) {
        Token tok = findToken(line);
        std::cout << toString(tok.type) << ":" << tok.value << "\n";
    }
}
