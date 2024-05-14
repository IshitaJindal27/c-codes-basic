#include<stdio.h>
int main()
{
    // W.A.P to check whether the nmber is positive negative or zero
    int num;
    printf("Enter the number you want to check- ");
    scanf("%d",&num);

    if(num>0)
    printf("The Number Is Positive");
    else if(num==0)
    printf("The Number Is Zero");
    else
    printf("The Number Is Negative");
    return 0;
}