// 2. Write a C program to find the Area of a Rectangle by Entering Length and Breadth.
#include<stdio.h>
void main(){
    float area, length, breadth;

    printf("enter length and breadth of the rectangle : \n");
    scanf("%f%f",&length,&breadth);
    area=length*breadth;

    printf("the area of the rectangle is %f",area);
}