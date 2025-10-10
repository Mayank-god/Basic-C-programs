#include<stdio.h>

// WRITE A CONDITIONAL PROGRAM WHETHER TO CHECK YOU ARE ADULT OR NOT AND YOU CAN VOTE OR NOT.

int main(){

    int age;

    printf("Enter your age:");
    scanf("%d",&age);

    if(age<18){
        printf("You are underage!\n");
        printf("You can't vote!!");
    }

    else{
        printf("You are an adult! \n");
        printf("You can vote!!");
    }
    
    return 0;
}