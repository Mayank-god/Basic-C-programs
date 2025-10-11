#include <stdio.h>

//CHECK WHETER A NUMBER IS PALINDROME OR NOT.[PALINDROME = reverse is same (ex=12321)]

int main() {
    int num, copy, revers = 0, temp;

    printf("Enter  number: ");
    scanf("%d", &num);

    copy = num;

    while (num > 0) {
        temp = num % 10; 
        revers = revers * 10 + temp; 
        num /= 10;                 
    }

    if (copy == revers)
        printf("The number is a Palindrome.\n");
    else
        printf("The number is NOT a Palindrome.\n");

    return 0;
}