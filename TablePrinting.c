#include <stdio.h>

//WAP TO TAKE A NUMBER AND PRINT IT'S TABLE.

int main(){

    int num;

    printf("Enter number that you want to have table of :\t");
    scanf("%d",&num);

    for(int b=1 ; b<=10; b++){
        printf("%d * %d = %d \n",num , b , b*num);
    }
    return 0;
}
