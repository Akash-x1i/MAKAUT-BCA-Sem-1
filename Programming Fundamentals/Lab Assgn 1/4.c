// 4. Write a C program to find the Third Angle of a Triangle by Entering Two Angles

#include<stdio.h>
void main(){
    int ang1, ang2;
    printf("enter values of two angle of the triangle : \n");
    scanf("%d%d",&ang1,&ang2);
    printf("the value of the third angle is %d",180-(ang1+ang2));
}