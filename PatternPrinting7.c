//Print this pattern
//  *        * 
//    *    *
//      *
//    *    *
//  *        *

#include<stdio.h>
int main(){

    int row;

    printf("Enter the number of rows:");
    scanf("%d",&row);

    for (int  i = 1; i <= row ; i++){
        for (int  j = 1; j <= row ; j++){
            if ( i == j || i+j == (row+1)){
                printf(" * "); 
            }  
            else{
                printf("   "); 
            } 
        }
    printf("\n");

    }
    return 0;
}