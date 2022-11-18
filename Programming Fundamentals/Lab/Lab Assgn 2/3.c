//Enter Marks of Five Subjects and Calculate Total, Average, Percentage using C programming

#include<stdio.h>
void main(){
    float sub1, sub2, sub3, sub4 ,sub5, total, average, percentage;

    printf("Maximum marks of a subject is 100.\nEnter marks of subject 1: \n");
    scanf("%f",&sub1);
    printf("Enter marks of subject 2: \n");
    scanf("%f",&sub2);
    printf("Enter marks of subject 3: \n");
    scanf("%f",&sub3);
    printf("Enter marks of subject 4: \n");
    scanf("%f",&sub4);
    printf("Enter marks of subject 5: \n");
    scanf("%f",&sub5);
    

    total=sub1+sub2+sub3+sub4+sub5;
    average=total/5;
    percentage=(total*100)/500;

    if (total>500)
        printf("!!Error: total marks of the five subject is greater than the maximum marks entered.\n");
    else
    {
    printf("Total marks obtained is %.1f\n",total);
    printf("Average marks obtained is %.1f\n",average);
    printf("Percentage of marks obtained is %.1f%%\n",percentage);
    }
    
    }