#include <stdio.h>
//CHECK WHETHER THE NUMBER ENTERED BY THE USER IS EVEN OR ODD.

int main(){

    int number ;

    printf("Enter a number:");
    scanf("%d",&number);

    if(number%2==0){
        printf("the number is even");
     }

    else{
        printf("the number is odd");
    }

    return 0;
}