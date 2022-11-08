#include<stdio.h>
void main(){
    float mtr, km;
    int cm;
    printf("Enter length in Centimetre : \n");
    scanf("%d",&cm);

    mtr=cm/100;
    km=mtr/1000;

    printf("%d centimetre in meter is %.2f meter\n",cm ,mtr);
    printf("%d centimetre in kilometre is %.3f kilometre",cm,km);
} 
