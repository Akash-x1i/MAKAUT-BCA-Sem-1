#include<stdio.h>
void main(){
   int n,lower,upper;
   printf("Enter a number:");
   scanf("%d",&n);
   lower= (n/10) * 10; /*the arithmetic operators work from left to right*/
   upper = lower+10;
   printf("Range is %d - %d",lower,upper);
 
}