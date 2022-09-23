//6. Write a program to calculate factorial of a number.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,i =1,fact=1;
    printf("Enter number to calculate factorial of a number:\n");
    scanf("%d",&num);
    while(i<=num)
    {
        fact *=i;
        i++;
    }
    printf("Factorial of %d is %d",num,fact);
    getch();
    return 0;
}