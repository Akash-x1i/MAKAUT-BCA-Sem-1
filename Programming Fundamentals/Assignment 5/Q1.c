// Write a program to find the reverse of a number.

#include<stdio.h>
void main(){
    int num, digit, reverse;
    printf("Enter a number : ");
    scanf("%d",&num);
    
    reverse=num;
    printf("Reverse of the number is ");
    while (reverse>0)
    {
        digit=reverse%10;
        reverse=reverse/10;
        printf("%d",digit);

    }
    


}