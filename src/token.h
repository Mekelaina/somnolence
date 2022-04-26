#ifndef TOKEN_DEF
#define TOKEN_DEF

#define SV_IMPLEMENTATION
#include "sv.h"

typedef enum {
    KEYWORD = 0,
    NAME,
    COLON,
    LABEL,
    CHAR_LIT,
    STRING_LIT,
    COMMENT,
    ESCAPE,
    START,
    END
} TokenType;

typedef struct {
    size_t line_num;
    size_t start_pos;
    size_t end_pos;
} Loc;

typedef enum {
    NONE = 0,
    DECLARE,
    IS,
    ISNT,
    ADD,
    SUB,
    MUL,
    DIV,
    MOD,
    IF,
    ELSE,
    LESSTHAN,
    GREATERTHAN,
    EQUALS,
    AND,
    OR,
    END,
    PRINT,
    INPUT,
    ROUTINE,
    RETURN,
    CALL,
    INCLUDE,
    GOTO,

    TOTAL_KEYWORDS
}  Keyword;

typedef struct Token
{
    String_View text;
    Loc loc;
    TokenType type;
    union
    {
        String_View strlit_val;
        String_View name_val;
        Keyword keyword;
        Token *startof;
        Token *endof;
    };
    
} Token;

#endif