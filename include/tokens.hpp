#include <string>

enum class TokenType {
    Heading,   // #, ##, ###
    Bold,      // **bold**
    Italic,    // *italic*
    ListItem,  // - or * list item
    CodeBlock, // ```code```
    Text,      // Plain text
    Link,      // [text](url)
    EndOfFile  // EOF
};

struct Token {
    TokenType type;
    std::string value;
};
