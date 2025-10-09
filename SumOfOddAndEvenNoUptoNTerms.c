//WAP to print the sum of all even numbers and all odd numbers between 1 to n.
#include<stdio.h>

int main(){

    int n ;
    int sumeven = 0 , sumodd = 0 ;

    printf("Enter upto which number you want sum of: ");
    scanf("%d", &n );

    //Loop to sum all the odd and even numbers !
    for (int i = 1 ; i<=n ; i++){
        if ( i % 2 == 0){
            sumeven += i;
        }
        else{
            sumodd += i;
        }
    }

    printf("The sum of all even digits = %d \n",sumeven);
    printf("The sum of all odd digits = %d",sumodd);

    return 0;

}