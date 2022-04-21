#ifndef SCRIPT_DEF
#define SCRIPT_DEF

#define MAX_LINE_LENGTH 128
#define MAX_LINE_COUNT 128

struct script_file
{
    /* data */
    unsigned int id;
    char* path;
    char content[MAX_LINE_COUNT][MAX_LINE_LENGTH];
    unsigned int line_count;
};

typedef struct script_file Script;


#endif