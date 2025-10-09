//WAP TO READ A CHARACTER VALUE AND CHECK WHETHER IT IS IN UPPERCASE,LOWERCASE,DIGIT OR A SPECIAL SYMBOL.
#include<stdio.h>

int main(){

    char n;
    printf("Enter value:");
    scanf(" %c" , &n);

    if( n >= 'A' && n <= 'Z'){
        printf("Value is in Uppercase!");
    }
    else if( n >= 'a' && n <= 'z'){
        printf("Value is in Lowercase!");
    }
    else if( n >= '0' && n <= '9'){
        printf("Value is a Digit!");
    }
    else{
        printf("Value is a special symbol!");
    }
    return 0;

}