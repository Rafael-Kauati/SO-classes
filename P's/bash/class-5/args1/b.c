#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int  nums_of_args ; char arg1; char arg2;
    
    for(nums_of_args = 0 ; nums_of_args < argc ; nums_of_args++)
        {
            //printf("Argument %02d: \"%s\"\n", nums_of_args, argv[nums_of_args]);

        }
    
    nums_of_args--; //printf("number of arguments : %i\n",nums_of_args);
    
    if(nums_of_args == 2){

        for(int i = 0 ; i < argc ; i++)
        {
            if(i==1){
            printf("Argment 1 : %s\n", argv[i]);
            }
            if(i==2){
                printf("Argment 2 : %s\n", argv[i]);
            }
        }


//        printf("Argment 1 : %s\nArgment 2 : %s\n", arg1, arg2);
        
        return 0 ;
    }
    else{
        return 1 ;
    }

}
