#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

/* SUGESTÂO: utilize as páginas do manual para conhecer mais sobre as funções usadas:
 man fopen
 man fgets
*/

#define LINEMAXSIZE 80 /* or other suitable maximum line size */


int main(int argc, char *argv[])
{
    const int nums_of_args = argc;
    int linenum = 0 ;

    if( nums_of_args >= 2) {

            FILE *fp = NULL;
            char line [LINEMAXSIZE]; 
            
            errno = 0;
            fp = fopen(argv[1], "r");
            if( fp == NULL )
            {
                perror ("Error opening file!");
                return EXIT_FAILURE;
            }

            while( fgets(line, sizeof(line), fp) != NULL )
            {
                printf("%i %s", linenum, line);
                linenum ++ ; 
            }

            fclose(fp);
            
            return EXIT_SUCCESS;
    
    }
    else{
        return EXIT_FAILURE;
    }
}
