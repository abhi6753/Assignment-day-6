//3. Write a program to calculate sum of first N odd natural numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,i=1,sum=0;
    printf("Enter number to calculate sum of first N odd natural numbers:\n");
    scanf("%d",&num);
    while (i<=num)
    {
        sum +=2*i-1; 
        i++;
    }
    printf("Sum of first %d odd natural number is %d",num,sum);
    getch();
    return 0;   
}