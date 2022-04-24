#ifndef KEYWORDS_DEF
#define KEYWORDS_DEF

#define  _err = -1;

enum keyword {
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
};

const char * const keyword_str[] = {
    [NONE]        = "null",
    [DECLARE]     = "declare",
    [IS]          = "is",
    [ISNT]        = "isnt",
    [ADD]         = "add",
    [SUB]         = "sub",
    [MUL]         = "mul",
    [DIV]         = "div",
    [MOD]         = "mod",
    [IF]          = "if",
    [ELSE]        = "else",
    [LESSTHAN]    = "lessthan",
    [GREATERTHAN] = "greaterthan",
    [EQUALS]      = "equals",
    [AND]         = "and",
    [OR]          = "or",
    [END]         = "end",
    [PRINT]       = "print",
    [INPUT]       = "input",
    [ROUTINE]     = "routine",
    [RETURN]      = "return",
    [CALL]        = "call",
    [INCLUDE]     = "include",
    [GOTO]        = "goto"
};



#define ASSERT_ENUM_TO_STR(sarray, max) \
    typedef char assert_sizeof_##max[(sizeof(sarray)/sizeof(sarray[0]) == (max)) ? 1 : -1]

ASSERT_ENUM_TO_STR(keyword_str, TOTAL_KEYWORDS);

#endif