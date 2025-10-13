// Print the pattern:
// 1
// 1 3 
// 1 3 5 
// 1 3 5 7 

#include<stdio.h>
int main(){

    int row;
    printf("Enter the value of row :");
    scanf("%d",&row);

    for ( int i=1 ;i <= 2*row - 1;i += 2){
        for ( int j= 1 ; j<=i ; j+=2){
        printf("%d",j);
        printf(" ");
       }
       printf("\n");
    }


    return 0;
}