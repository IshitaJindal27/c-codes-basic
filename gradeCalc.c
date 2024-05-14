#include<stdio.h>
int main()
{
    // W.A.P that takes a student's score as input and prints their grade (A, B, C, D, or F) based on a grading scale.
    int marks;
    printf("Enter the marks out of 100 to check your grades- ");
    scanf("%d",&marks);
    if(marks>=90)
    printf("A Grade");
    else if(marks>=80 && marks<90)
    printf("B Grade");
    else if(marks>=65&&marks<80)
    printf("C Grade");
    else if(marks>=50&&marks<65)
    printf("D Grade");
    else
    printf("F Grade");
    return 0;
}