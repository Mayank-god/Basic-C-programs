#include <stdio.h>

//WAP AND MAKE A FUNCTION WHICH TAKE A NUMBER AND PRINT IT'S TABLE.

void printable(int n);

int main(){

    int num;

    printf("Enter number that you want to have table of :\t");
    scanf("%d",&num);

    printable(num);
    return 0;

    //FUNCTION
}

void printable(int n){
    for(int b=1 ; b<=10; b++){
        printf("%d * %d = %d \n",n , b , b*n);
    }

}
