// Print the pattern
//              * 
//           *  *
//        *  *  *
//     *  *  *  *
//  *  *  *  *  *

#include<stdio.h>

int main(){

    int row;
    printf("Enter the value of n:");
    scanf("%d", &row);
    
    //Printed using only one loop
    for (int i=row ; i>=1 ; i--){

        for (int j=1 ; j<=row ; j++){   //we have to print entire square box that's..
            if (j>=i){                  //...why i am using j<=row
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
