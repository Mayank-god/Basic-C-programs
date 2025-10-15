//Print the pattern
// A B C D E 
// A B C D E
// A B C D E
// A B C D E
// A B C D E

#include<stdio.h>

int main(){

    int n;
    printf("Enter the value of n :");
    scanf("%d",&n);

    for (int i = 65 ; i<= n + 65 -1; i ++){
        for (int j = 65 ; j<= n + 65 -1; j ++){
            
            char ch=(char)j;
            printf(" %c ",ch);

        }
        printf("\n");
    }
    return 0;
}