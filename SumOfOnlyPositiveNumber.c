#include<stdio.h>

//WAP TO FIND THE SUM OF POSITIVE NUMBERS ENTERED BY USER UNTIL..
//..THE USER ENTER A NEGATIVE NUMBER,THEN BREAK THE LOOP AND DISPLAY THE SUM.

int main(){
    int num , sum=0 ;

    printf("Enter the value that you want sum of : ");
    scanf("%d",&num);

    while ( 1 ){
        if(num > 0) sum += num;
        else break;
        printf("Enter values: ");
        scanf("%d",&num);
        
    }
    printf("The total sum of positive numbers upto now = %d",sum);
    return 0;
}