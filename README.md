# Lexical-Analyzer
A lexical analyzer implemented in C that reads a C source file and converts the program into tokens such as keywords, identifiers, operators, punctuators, and literals.  

The analyzer also detects lexical errors like invalid numeric constants, unterminated strings/characters, and unknown tokens, and reports them with line and column numbers similar to compiler error messages.

## Features
- Tokenizes C source code
- Supports decimal, octal, hexadecimal, binary, and floating-point numbers
- Skips single-line and multi-line comments
- Detects lexical errors
- Displays tokens in a structured table

## Compilation
```bash
gcc main.c lexic.c check.c -o lexer
