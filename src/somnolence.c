    #include <stdio.h>    
    #include <stdlib.h>
    #include <string.h>

    #include "file_reader.h"
 
    

    int main(int argc, char **argv)
    {    

        char c;
        int i, j;
        char *path;
        Script s;

        if (argc <1)
            return EXIT_FAILURE;
        path = argv[1];

        /*Open File*/
        FILE *file = fopen(path, "r");

        if(!file)
        {
            perror(path);
            return EXIT_FAILURE;
        }  

        //file ops
        s = readFile(file, path);

        if (fclose(file))
        {
            return EXIT_FAILURE;
            perror(path);
        }

        // print file contents
        /* printf("ID: %d\nPath: %s\n", s.id, path);
        

        for(i = 0; i < s.line_count; i++)
        {
            printf("%s", s.content[i]);
        } */


        return 0;   
    }  