#include <stdio.h>
void main(){
int number;
printf("enter a number : \n");
scanf ("%d", &number);
if (number<= 100 && number>=10)
printf("the number is a two digit number");
else {
printf("the number is not a two digit number");
}
}