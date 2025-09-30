#include <stdio.h>
#include <math.h>

//ENTER VALUE OF PRINCIPAL,RATE AND TIME FROM USER AND CALCULATE IT'S SIMPLE INTEREST.

int main(){

    float principal , rate , time ;
    float simple_interest , compound_interest , amount ;

    printf("enter principal amount : ") ;
    scanf("%f" , &principal);

    printf("enter rate : ");
    scanf("%f" , &rate);

    printf("enter time (in years) : ");
    scanf("%f" , &time);

    //Formula for simple interest
    simple_interest=(principal*rate*time)/100;

    //Formula for compound interest
    amount = principal*pow((1+rate/100), time);
    compound_interest= amount - principal ;

    printf("the simple interest is :  %.2f \n" ,  simple_interest);
    printf("the compound interest is : %.2f \n" , compound_interest);

    return 0;
}