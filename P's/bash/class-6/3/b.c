#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/* SUGESTÂO: utilize as páginas do manual para conhecer mais sobre as funções usadas:
 man system
 man date
*/

int main(int argc, char *argv[])
{
    char commandcasted[1024] = ""; char timeofcasting[10]; char timeofcastinginfo[20] = ""; char commandinfo[50] = "";

    FILE *logfile = fopen(argv[1], "rw+");
    
    //if( logfile == NULL )
     //   puts("file not found");
      //  return EXIT_FAILURE;

    time_t rawtime;
    struct tm *info;
    
    do
    {
        
        printf("Command: ");
        scanf("%1023[^\n]%*c", commandcasted);
        time( &rawtime );
        info = localtime( &rawtime );
        /* system(const char *command) executes a command specified in command
            by calling /bin/sh -c command, and returns after the command has been
            completed.
        */
        strcat(timeofcastinginfo , asctime(info));
        if(strcmp(commandcasted, "end")) {
           printf("\n * Command to be executed: %s\n", commandcasted);
           printf("\nTime casting : %s \n", timeofcastinginfo);
           printf("---------------------------------\n");
           system(commandcasted);
           printf("---------------------------------\n");
           strcat(co)
           fprintf(logfile, "%s" ,commandinfo);
        }
    } while(strcmp(commandcasted, "end"));

    printf("-----------The End---------------\n");

    return EXIT_SUCCESS;
}
