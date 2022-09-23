//10. Write a program to reverse a given number.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,temp,reverse=0;
    printf("Enter number to reverse it:\n");
    scanf("%d",&num);
    temp = num;
    while(temp)
    {
        reverse = reverse * 10 + temp%10;
        temp/=10;
    }
    printf("Before reverse: %d\nAfter reverse: %d",num,reverse);
    getch();
    return 0;
}