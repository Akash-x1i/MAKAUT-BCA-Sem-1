// 1. Write a c program to perform the modular division, finding the quotient and actual division.

#include<stdio.h>

int main(){
    int dividend, divisor, quotient, remainder;
    float division;

    printf("enter two numbers\n--------------------------------\nenter dividend : ");
    scanf("%d",&dividend);

    printf("\nenter divisor : ");
    scanf("%d",&divisor);

    quotient=dividend/divisor;
    remainder=dividend%divisor;
    division=dividend/(float)divisor;

    printf("\n\nmodular division (remainder) of %d and %d is %d\n\n",dividend,divisor,remainder);

    printf("floor division (quotient) of %d and %d is %d\n\n",dividend,divisor,quotient);

    printf("actual division (float value) of %d and %d is %f\n\n",dividend,divisor,division);


}