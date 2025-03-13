#include <string>
#include <map>

enum class TokenType {
    Heading,
    BoldItalic,
    BlockQoute,
    ListItem,
    CodeBlock,
    EscapeChar,
};

struct Token {
    TokenType type;
    std::string value;
};

const std::map<std::string, TokenType> tokenMap = {
    {"#", TokenType::Heading},
    {"*", TokenType::BoldItalic},
    {"_", TokenType::BoldItalic},
    {">", TokenType::BlockQoute},
    {"-", TokenType::ListItem},
    {"`", TokenType::CodeBlock},
    {"\\", TokenType::EscapeChar},
};
