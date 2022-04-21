#include <string.h>
#include <stdio.h>

#include "script.h"

#define MAX_LINE_SIZE 128
extern int ids = 0;

Script readFile(FILE *file, char *path)
{
    Script rtn;
    char line[MAX_LINE_SIZE] = {0};
    unsigned int line_count = 0;

    rtn.id = ids++;
    rtn.path = path;
    //printf("loop\n");
    while (fgets(line, MAX_LINE_SIZE, file))
    {
        //printf("%s\n",line);
        strcpy(rtn.content[line_count], line);
        line_count++;
    }
    //printf("zoop\n");
    rtn.line_count = line_count;
    return rtn;
}
