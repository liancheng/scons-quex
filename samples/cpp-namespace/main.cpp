#include "quex/my_scanner"

#include <cstdlib>
#include <iostream>

int main (int argc, char* argv[])
{
    my::scanner lexer ("test.in");

    while (true) {
        my::Token* token = NULL;
        lexer.receive (&token);

        if (QUEX_TKN_TERMINATION == token->type_id())
            break;

        std::cout << "id=" << token->type_id() << std::endl;
    }

    return 0;
}
