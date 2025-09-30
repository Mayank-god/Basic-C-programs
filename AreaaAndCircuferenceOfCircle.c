#include <stdio.h> 

//CALCULATE THE AREA AND CIRCUMFERENCE OF THE CIRCLE BY ENTERING RADIUS BY USER.

int main(){

    float radius ;
    float area , circumference ;

    printf("Enter the radius :");
    scanf("%f" , &radius);

    area = 3.14*radius*radius ;
    circumference = 2*(3.24)*radius ;

    printf("The area of the circle is : %.2f \n" , area);
    printf("Circumference of the circle is : %.2f " , circumference);

    return 0;
}