//5. Write a program to calculate sum of cubes of first N natural numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,i=1,sum=0;
    printf("Enter numbers to calculate sum of cubes of first N natural numbers:\n");
    scanf("%d",&num);
    while(i<=num)
    {
        sum +=i*i*i;
        i++; 
    }
    printf("sum of cubes of first %d natural numbers is %d",num,sum);
    getch();
    return 0;
}