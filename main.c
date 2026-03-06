/*
 * Name        : Mathews Roy
 * Description :
 *              A lexical analyzer for C source files. It reads the input program,
 *              tokenizes keywords, identifiers, operators, literals, and punctuators,
 *              and reports lexical errors with line and column numbers.
 */

#include <stdio.h>
#include "lexic.h"
#include "check.h"

int main(int argc, char* argv[])
{
    lexer_t lexer;

    if(argc != 2)
    {
        printf("Usage: %s <Source_file.c>\n", argv[0]);
        return 1;
    }

    if(lexer_init(&lexer, argv[1]) != LEX_SUCCESS)
    {
        printf("Error: failed to open or validate '%s'\n", argv[1]);
        return 1;
    }

    lexer_tokenize(&lexer);
    lexer_print_tokens(&lexer);

    if(check_tokens(&lexer) == 0)
        printf("No errors found\n");

    return 0;
}