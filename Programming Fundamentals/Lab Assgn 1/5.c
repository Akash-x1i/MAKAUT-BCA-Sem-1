// 5. Write a C program to find the Area of the Triangle by Entering Height, and Base

#include<stdio.h>
void main(){
    int base, height;
    float area;
    printf("enter height of the triangle : ");
    scanf("%d",&height);
    printf("enter base of the triangle : ");
    scanf("%d",&base);
    area=0.5*base*height;
    printf("the area of the triangle is %f",area);
}