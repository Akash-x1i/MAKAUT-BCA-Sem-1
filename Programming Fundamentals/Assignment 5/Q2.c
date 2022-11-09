// 2. Write a program to find the sum of n natural numbers.
// Input: n
// Output: (1+2+3+...+n)

#include<stdio.h>

void main(){
    int n, sum=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    for (int i = 0; i <= n; i++)
    {
        sum=sum+i;
    }
    printf("sum is %d",sum);
}