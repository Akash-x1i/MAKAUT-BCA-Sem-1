// 1. Write a C program to check whether a number is negative, positive or zero. 

#include<stdio.h>
void main()
    {
    int num;
    printf("enter a number : ");
    scanf("%d",&num);

    if (num<0)
    {
      printf("the number is negative.")  ;
    }
    else if (num>0)
    {
        printf("the number is positive.")  ;
    }
    else
    {
        printf("the number is zero");
    }
    
    
}