#include <stdio.h>

//WAP TO PRINT FIBONACCI SERIES UPTO N TERM

int main() {
    int n, ps1=0 ,ps2=1, a=0;
    printf("Enter N: ");
    scanf("%d",& n);

    if( n <= 0)   printf("Not Defined !");
    
    else{
        printf("series : ");
        if( n >= 1)   printf("%d ", 0);
        if( n >= 2)   printf("%d ", 1);

        for ( int i = 3 ; i <= n ; i++){
            a = ps2;
            ps2 = ps1 + ps2;
            ps1 = a;
            printf("%d " , ps2);
        }
    }
    return 0;
}