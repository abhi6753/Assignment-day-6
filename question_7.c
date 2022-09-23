//7. Write a program to count digits in a given number
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,temp,count=0;
    printf("Enter number to count its digit:\n");
    scanf("%d",&num);
    temp = num;
    while(temp)
    {
        count++;
        temp/=10;
    }
    printf("%d digits in %d",count,num);
    getch();
    return 0;
}