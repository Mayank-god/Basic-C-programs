//WAP TO PRINT SUM OF ALL THE NATURAL NUMBER UPTO N BY RECURSION.

#include<stdio.h>

int sum(int n);

int main(){
    int n;

    printf("enter the number: ");
    scanf("%d",&n);

    int result=sum(n);

    printf("the sum of n natural number is: %d",result);
    return 0;
}

        //FUNCTION
int sum(int n){
    if (n==1){
        return 1;
    }
    int sumnm1=sum(n-1);
    int sumN=sumnm1+n;
    return sumN;
}