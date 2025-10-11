#include <stdio.h>
#include <math.h>  // for pow() function

// WAP to find whether a number is Armstrong or not
int main() {
    int num, num1, len = 0, count = 0, temp;

    printf("Enter number: ");
    scanf("%d", &num);

    num1 = num;

    while (num1 > 0) {
        len++;
        num1 /= 10;
    }
    num1 = num; 

    // Calculate the Armstrong sum
    while (num1 > 0) {
        temp = num1 % 10;
        count += pow(temp, len);
        num1 /= 10;
    }

    if (num == count)
        printf("Yes, %d is an Armstrong number!\n", num);
    else
        printf("No, %d is not an Armstrong number!\n", num);

    return 0;
}

