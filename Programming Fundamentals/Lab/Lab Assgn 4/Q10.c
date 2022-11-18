// triangle's angle validation
#include <stdio.h>

void main(){
    int angle1, angle2, angle3;
    printf("enter three angles of the triangle consecutively :\n");
    scanf("%d%d%d",&angle1, &angle2, &angle3);
    if (angle1+angle2+angle3==180)
    {
        printf("it is a valid triangle");
    }
    else
    {
        printf("the triangle is not valid");
    }
    
}