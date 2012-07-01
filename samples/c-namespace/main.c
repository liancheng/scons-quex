#include "quex/my_scanner.h"

#include <stdlib.h>
#include <stdio.h>

int main (int argc, char* argv[])
{
    my_scanner lexer;

    QUEX_NAME (construct_file_name) (&lexer, "test.in", NULL, 0);

    while (1) {
        QUEX_TYPE_TOKEN* token = NULL;
        QUEX_NAME (receive) (&lexer, &token);

        if (QUEX_TKN_TERMINATION == token->_id)
            break;

        printf ("id=%d\n", token->_id);
    }

    return 0;
}
