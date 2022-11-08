// Write a C program to Calculate Simple Interest | Principle, Rate of interest & Time.

#include <stdio.h>

void main(){
    float SI, P, R, T;

    printf("Enter principle amount : \n");
    scanf("%f",&P);
    printf("Enter Rate of interest : \n");
    scanf("%f",&R);
    printf("Enter Time in years : \n");
    scanf("%f",&T);

    SI=P*T*R;

    printf("Simple Interest = %.2f",SI/100);

}