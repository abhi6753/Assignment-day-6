//1. Write a program to calculate sum of first N natural numbers.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,i=1,sum=0;
    printf("Enter number to get sum of first n natural number:\n");
    scanf("%d",&num);
    while(i<=num)
    {
        sum = sum+i;
        i++;
    }
    printf("Sum of First %d natural number is %d",num,sum);
    getch();
    return 0;
}