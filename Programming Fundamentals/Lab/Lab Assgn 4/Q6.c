//Write a C program to input any character and check whether it is alphabet, digit or special character.

#include<stdio.h>

void main(){
    char character;
    printf("enter a character : ");
    scanf("%c",&character);

    if (character>='a' && character<='z' || character>='A' && character<='Z' )
    {
        printf("the character is a alphabet");
    }
    else if (character>=48 && character<=57)
    {
        printf("the character is digit");
    }
    else
        printf("the character is special character");

}