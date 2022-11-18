// 3. Write a C program to find the Diameter, Circumference and Area of a Circle.

#include<stdio.h>

void main(){
    float radius, pi, diameter, circumference, area;
    printf("enter radius : \n");
    scanf("%f",&radius);
    pi=22/(float)7;
    diameter=radius*2;
    circumference=diameter*pi;
    area=pi*radius*radius;
    
    printf("diameter of the circle is : %f\n",diameter);
    printf("circumference of the circle is : %f\n",circumference);
    printf("area of the circle is : %f\n",area);
}