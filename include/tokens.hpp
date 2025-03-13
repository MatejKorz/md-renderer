#include <string>
#include <map>


enum class TokenType {
    Heading,
    BoldItalic,
    BlockQuote,
    ListItem,
    CodeBlock,
    EscapeChar,
    Text,
};

struct Token {
    TokenType type;
    std::string value;
};

const std::map<std::string, TokenType> tokenMap = {
    {"\\", TokenType::EscapeChar},
    {"#", TokenType::Heading},
    {"*", TokenType::BoldItalic},
    {"_", TokenType::BoldItalic},
    {">", TokenType::BlockQuote},
    {"-", TokenType::ListItem},
    {"`", TokenType::CodeBlock},
};

const std::string escapableChars = "\\`*_{}[]<>()#+-.!|";

