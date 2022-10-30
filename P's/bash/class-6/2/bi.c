#include <stdio.h>
#include <stdlib.h>

/* SUGESTÂO: utilize as páginas do manual para conhecer mais sobre as funções usadas:
 man qsort
*/

int compareInts(const void *px1, const void *px2)
{
    int x1 = *((int *)px1);
    int x2 = *((int *)px2);
    return(x1 < x2 ? -1 : x1 == x2 ? 0 : 1);
}

int main(int argc, char *argv[])
{
    int i, totalNums;
    int *numbers;
    
    FILE *file= fopen( argv[1] , "r") ;
    const char line[80];

    if(file == NULL){
        return 1;
    }

    /* Memory allocation for all the numbers in the arguments */
    numbers = (int *) malloc(sizeof(int) * totalNums);

    /* Storing the arguments in the "array" numbers */
    totalNums = 0 ;
    //printf("Order of the numbers in the nums.txt file"); 
    while( fgets(line, sizeof(line), file) != NULL ){
    //    printf("-> %s", line); /* not needed to add '\n' to printf because fgets will read the '\n' that ends each line in the file */
        numbers[totalNums] = atoi(line);
        totalNums ++ ;
    }


    /* void qsort(void *base, size_t nmemb, size_t size, int (*compar)(const void *, const void *)); 
         The qsort() function sorts an array with nmemb elements of size size.*/
    qsort(numbers, totalNums, sizeof(int), compareInts);

    /* Printing the sorted numbers */
    printf("Sorted numbers: \n");
    for(i = 0 ; i < totalNums ; i++)
    {
        printf("%d\n", numbers[i]);
    }

    return EXIT_SUCCESS;
}
