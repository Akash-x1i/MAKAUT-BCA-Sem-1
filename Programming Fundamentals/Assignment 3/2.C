// 2. Write a program in C to find the area and perimeter of a rectangle

#include<stdio.h>

int main(){
    float length, width, area, perimeter;

    printf("\nEnter the length of the rectangle : ");
    scanf("%f", &length);

    printf("\nEnter the width of the rectangle : ");
    scanf("%f", &width);

    area=length*width;
    perimeter=2*(length+width);

    printf("\nThe area of the rectangle is %f",area);

    printf("\n\nThe perimeter of the rectangle is %f\n\n",perimeter);
}
