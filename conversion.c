//C program to convert Fahrenheit to Celsius
#include <stdio.h>
 
int main()
{
    float cel, fah;
 
    printf("Please Enter the temperature in Fahrenheit: \n");
    scanf("%f", &fah);
 
    // Convert th temperature from fahrenheit to celsius formula
    celsius = (fah - 32) * 5 / 9;
    //celsius = 5 * (fah - 32) / 9;
    //celsius = (fah - 32) * 0.55556; 

    printf("\n %.2f Fahrenheit = %.2f Celsius", fah, cel);
 
    return 0;
}
