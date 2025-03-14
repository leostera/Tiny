#pragma once

#include <stdbool.h>

// TODO(Apaar): I just want Tiny_Context
#include "tiny.h"
#include "tokens.h"

typedef struct {
    Tiny_Context ctx;

    const char *fileName;
    const char *src;

    int lineNumber;
    Tiny_TokenPos pos;

    int last;
    char *lexeme;  // array

    union {
        bool bValue;
        int iValue;
        float fValue;
    };
} Tiny_Lexer;

void Tiny_InitLexer(Tiny_Lexer *l, const char *fileName, const char *src, Tiny_Context ctx);

Tiny_TokenKind Tiny_GetToken(Tiny_Lexer *l);

void Tiny_DestroyLexer(Tiny_Lexer *l);
