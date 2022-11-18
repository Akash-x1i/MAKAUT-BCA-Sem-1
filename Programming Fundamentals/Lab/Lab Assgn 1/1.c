// 1. Write a C program to find the Perimeter of a Rectangle by Entering Length and Breadth.

#include<stdio.h>

void main(){
    float perimeter, Length, Breadth;

    printf("enter length and breadth :\n");
    scanf("%f%f",&Length,&Breadth);
    perimeter=2*(Length+Breadth);
    printf("the perimeter of the rectangle is %f",perimeter);

}