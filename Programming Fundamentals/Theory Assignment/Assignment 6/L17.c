#include <stdio.h>
void main(){
    int n,i, evensum, oddsum;
    evensum=0;
    oddsum=0;
    printf("enter a number : ");
    scanf("%d",&n);
     for (int i = 1; i <= n; i++)
     {
        if (i%2==0)
        {
            evensum=evensum+i;
        }
        else
            oddsum=oddsum+i;
     }
     printf("even digit sum : %d\n",evensum);
     printf("odd digit sum : %d",oddsum);
   
    
}