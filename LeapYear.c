#include<stdio.h>
int main()
{
    // Develop a program that checks if a given year is a leap year or not. 
    int year;
    printf("Enter the year you want to check- ");
    scanf("%d",&year);

    if(year%4==0)
    {
        printf("Year is a Leap Year");
    }
    else
    printf("Year is not a Leap Year");
    return 0;

}