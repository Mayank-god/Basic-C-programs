#include <stdio.h>

//WAP TO SWAP TWO NUMBERS ENTERED BY THE USER
int main(){

    int number1 , number2;
    int temp;

    printf("enter the number 1 :  ");
    scanf("%d" , &number1);

    printf("enter the number 2 :  ");
    scanf("%d" , &number2);

    printf("Before swapping : \n");

    printf("number 1 : %d\n" , number1);
    printf("number 2 : %d\n" , number2);

    temp = number1;
    number1 = number2;
    number2 = temp;

    printf(" After swapping : \n");
    printf("number 1 : %d\n" , number1);
    printf("number 2 : %d\n" , number2);

    return 0;
}