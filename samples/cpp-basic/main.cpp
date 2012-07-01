#include "Lexer"

#include <cstdlib>
#include <iostream>

int main (int argc, char* argv[])
{
    quex::Lexer lexer ("test.in");

    while (true) {
        quex::Token* token = NULL;
        lexer.receive (&token);

        if (QUEX_TKN_TERMINATION == token->type_id())
            break;

        std::cout << "id=" << token->type_id() << std::endl;
    }

    return 0;
}
