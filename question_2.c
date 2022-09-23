//2. Write a program to calculate sum of first N even natural numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,i=1,sum=0;
    printf("Enter number to calculate sum of N even natural numbers:\n");
    scanf("%d",&num);
    while(i<=num)
    {
        sum += 2*i;
        i++;
    }
    printf("Sum of first %d even natural number is %d",num,sum);
    getch();
    return 0;
}