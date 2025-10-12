// PRINT THE PATTERN, BY TAKING NUMBER OF ROWS[N] BY USER.(HERE N=5)
// Number Box
//  1 2 3 4 5
//  1 2 3 4 5
//  1 2 3 4 5
//  1 2 3 4 5
//  1 2 3 4 5

#include<stdio.h>
int main(){
    int n ;

    printf("Enter the value of n:");
    scanf("%d",&n);

    for ( int i = 1 ; i <= n ; i++){
        for ( int j = 1 ; j <= n ; j++){
            printf("%d ", j );
        }
        
        printf("\n");
    }
    return 0;

}