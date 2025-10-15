// Print the pattern
//     *
//     *
// * * * * * 
//     * 
//     * 
// (n=odd)

#include <stdio.h>
int main() {
    int row;
    
    printf("Enter the number of rows (odd): ");
    scanf("%d", &row);

    int mid = (row / 2) + 1;

    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= row; j++) {
            if (i == mid || j == mid)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}