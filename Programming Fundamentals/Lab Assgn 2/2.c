// Write a C program to perform Fahrenheit to Celsius Temperature Conversion.

// C=(F-32)/1.8

#include <stdio.h>
void main(){
float C,F;
    
    printf("enter temperature in Fahrenheit :\n");
    scanf("%f",&F);

    C=(F-32)/1.8;

    printf("Temperature in Celsius : %f",C);
}





