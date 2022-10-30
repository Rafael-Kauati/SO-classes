#include <stdio.h>
#define LINEMAXSIZE 80

int main(int argc, char *argv[]){
    FILE *f = fopen(argv[1], "r") ;
    const char line [LINEMAXSIZE]; 

    if(f == NULL){
        return 1;
    }

    while( fgets(line, sizeof(line), f) != NULL ){
        printf("-> %s", line); /* not needed to add '\n' to printf because fgets will read the '\n' that ends each line in the file */

    }

    fclose(f);

    return 0;


}