#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

static double sum(const double num1, const double num2){
    double res =  num1 + num2;
    return res;
}

static double sub(const double num1, const double num2){
    double res = num1 - num2;
    return  res;
}


int main(int argc, char *argv[]){
    char  operator; double value1, value2;
    for(int index = 0 ; index < argc ; index ++){
        if(index == 1){
            value1 = atof(argv[index]);
            printf("\nvalue 1 : %d", value1);
        }
        if(index == 2){
            operator = *(argv[index]);
        }
        if(index == 3){
            value2 = atof(argv[index]);
            printf("\nvalue 2  : %d\n", value2);

        }

    }

    switch (operator)
    {
    case '+':
        printf("sum of values : %d ", sum(value1, value2));
        break;
    case '-' :
        printf("sub of values : %d ", sub(value1, value2));
        break;
    default:
        break;
    }


}