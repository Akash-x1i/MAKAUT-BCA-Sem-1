// 4. Write a C program to input any alphabet and check whether a it is a vowel or consonant. 
#include <ctype.h>
#include<stdio.h>
void main()
    {
    char character;
    printf("enter a character : ");
    scanf("%c",&character);
    
    int Low_vowel=(character=='a'||character=='e'||character=='i'||character=='o'||character=='u');
    int Up_vowel=(character=='A'||character=='E'||character=='I'||character=='O'||character=='U');
    if (!isalpha(character))
        printf("Error! Non-alphabetic Character");
    else if (Up_vowel||Low_vowel)
        {   
            printf("'%c' is a vowel.",character);
        }
    else
        printf("'%c' is a consonant.",character);
    }