// Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and 
// Computer.

#include<stdio.h>

void main(){
    float total, percentage, physics, chemistry, biology, math, computer;
    char grade;
    printf("enter physics marks :\n");
    scanf("%.1f",&physics);
    printf("enter chemistry marks :\n");
    scanf("%.1f",&chemistry);
    printf("enter biology marks :\n");
    scanf("%.1f",&biology);
    printf("enter mathematics marks :\n");
    scanf("%.1f",&math);
    printf("enter computer marks :\n");
    scanf("%.1f",&computer);

    total=physics+chemistry+biology+math+computer;
    percentage=total/5;
    if (percentage >= 90)
        grade='A';
    else if (percentage >=80)
        grade='B';
    else if (percentage >=70)
        grade='C';
    else if (percentage >=60)
        grade='D';
    else if (percentage >=40)
        grade='E';
    else
        grade='F';
    
    printf("the percentage is %.1f and grade is %c",percentage,grade);
}