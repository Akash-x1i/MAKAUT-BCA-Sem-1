// 4. Write a C program to check whether a character is alphabet or not. 

#include<stdio.h>
void main()
    {
    char character;
    printf("enter a character : ");
    scanf("%c",&character);
    
    // int Up_alpha=('a'||character=='b'||character=='c'||character=='d'||character=='e'||character=='f'||character=='g'||character=='h'||character=='i'||character=='j'||character=='k'||character=='l'||character=='m'||character=='n'||character=='o'||character=='p'||character=='q'||character=='r'||character=='s'||character=='t'||character=='u'||character=='v'||character=='w'||character=='x'||character=='y'||character=='z');
    // int Low_alpha=('A'||character=='B'||character=='C'||character=='D'||character=='E'||character=='F'||character=='G'||character=='H'||character=='I'||character=='J'||character=='K'||character=='L'||character=='M'||character=='N'||character=='O'||character=='P'||character=='Q'||character=='R'||character=='S'||character=='T'||character=='U'||character=='V'||character=='W'||character=='X'||character=='y'||character=='Z');
    int alpha=(character=='a'||character=='b'||character=='c'||character=='d'||character=='e'||character=='f'||character=='g'||character=='h'||character=='i'||character=='j'||character=='k'||character=='l'||character=='m'||character=='n'||character=='o'||character=='p'||character=='q'||character=='r'||character=='s'||character=='t'||character=='u'||character=='v'||character=='w'||character=='x'||character=='y'||character=='z'||character=='A'||character=='B'||character=='C'||character=='D'||character=='E'||character=='F'||character=='G'||character=='H'||character=='I'||character=='J'||character=='K'||character=='L'||character=='M'||character=='N'||character=='O'||character=='P'||character=='Q'||character=='R'||character=='S'||character=='T'||character=='U'||character=='V'||character=='W'||character=='X'||character=='y'||character=='Z');
    if (alpha)
        {   
            printf("'%c' is a alphabet.",character);
        }
    else
        printf("'%c' is not a alphabet.",character);
    }