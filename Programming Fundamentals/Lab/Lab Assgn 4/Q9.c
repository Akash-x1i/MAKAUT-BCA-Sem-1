// 9. Write a C program to input month number and print number of days in that month.

#include <stdio.h>
// 1-31 2-28 3-31 4-30 5-31 6-30 7-31 
//8-31 9-30 10-31 11-30 12-31
void main(){
    int month, days;
    printf("enter month number :\n");
    scanf("%d",&month);
if (month%2==0 )
{
    if (month<8)
    {
        if (month==2)
            days=28;
        else 
            days=30;
    }
    else
        days=31;

}
else{
    if (month<8)
        days=31;
    else
        days=30;
    }
printf("the number of days is %d",days);
}