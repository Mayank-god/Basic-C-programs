#include <stdio.h>

//WAP TO CHECK WHETHER THE YEAR ENTERED BY THE USER IS A LEAP YEAR OR NOT.

int main(){

    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){

        printf("%d is a leap year.\n", year);
    }

    else{
        printf("%d is not a leap year.\n", year);
    }
    
    return 0;
}