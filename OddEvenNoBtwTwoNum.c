#include <stdio.h>

//WAP TO FIND THE SUM OF ALL EVEN AND ODD NUMEBRS.

int main() {
    int num;

    printf("Enter the value of N: ");
    scanf("%d", &num);

    printf("\nEven numbers from 1 to %d:\n", num);
    for (int i = 1; i <= num; i++) {
        if (i % 2 == 0)
            printf("%d ", i);
    }

    printf("\n\nOdd numbers from 1 to %d:\n", num);
    for (int i = 1; i <= num; i++) {
        if (i % 2 != 0)
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}