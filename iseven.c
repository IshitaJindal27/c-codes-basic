#include<stdio.h>
int main()
{
    // W.A.P. to check if the number is even or odd
    int num;
    printf("Enter the number you want to check- ");
    scanf("%d", &num);
    if(num%2==0)
    {
        printf("The Number is Even");
    }
    else
    {
        printf("The Number Is Odd");
    }
    return 0;
}