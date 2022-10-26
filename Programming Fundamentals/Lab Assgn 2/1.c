// Write a C program to perform Celsius to Fahrenheit Temperature Conversion.

// C=(F-32)/1.8
// F=(C*1.8)-32

#include <stdio.h>
void main(){
float C,F;
    // printf("enter temperature in Celcius :\n");
    // scanf("%f",&C);
    
    printf("enter temperature in Fahrenheit :\n");
    scanf("%f",&F);

    // F=(C*1.8)+32;
    C=(F-32)/1.8;

    printf("Temperature in Celsius : %f",C);
    // printf("Temperature in Fahrenheit : %f",F);
}





