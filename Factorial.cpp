//WAP TO PRINT THE FACTORIAL OF A GIVEN NUMBER USING FACTORIAL.
#include<stdio.h>

int main(){

    int num , copy = num , i = 1 , fac = 1 ; 

    printf(" Enter number you want factorial of : ");
    scanf("%d",&num);

    while( i <= num){

        fac = fac*i ;
        i++;

    }
    printf("Factorial of %d is %d \n", copy , fac);

    return 0;
}