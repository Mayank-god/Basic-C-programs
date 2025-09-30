#include <stdio.h>

//CONVERT CENTIGRADE TO FAHRENHEIT BY ENTERING VALUE BY CENTIGRADE BY USER.

int main() {

    float temp_Celsius, temp_Fahrenheit;

    printf("Enter the temperature in Celsius: ");
    scanf("%f", &temp_Celsius);

    //Formula
    temp_Fahrenheit = (temp_Celsius * 9 / 5) + 32 ;

    // Display the result
    printf("%.2f Celsius is equal to %.2f Fahrenheit.\n", temp_Celsius, temp_Fahrenheit);

    return 0;
}