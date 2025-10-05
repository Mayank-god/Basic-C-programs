//WAP to print the sum of all numbers upto a given number n(Positive Number).

#include<stdio.h>

int main(){

    int n;
    int sum=0;

    printf("Enter upto which number you want sum of: ");
    scanf("%d",&n);

    //Loop to sum all the digits
    for (int i = 1 ; i<=n ; i++){
        sum = sum + i;
    }

    printf("The sum of all digits upto %d : %d", n , sum);

    return 0;

}
