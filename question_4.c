//4. Write a program to calculate sum of squares of first N natural numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,i=1,sum=0;
    printf("Enter number to calculate sum of squares of first N natural numbers:\n");
    scanf("%d",&num);
    while(i<=num)
    {
        sum +=i*i;
        i++;
    }
    printf("Sum of squares of first %d natural is %d",num,sum);
    getch();
    return 0;
}