//8. Write a program to check whether a given number is a Prime number or not.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,i=1,count=0;
    printf("Enter number to check prime or not:\n");
    scanf("%d",&num);
    while(i<=num)
    {
       if(num%i==0)
       { 
          count++;        
          if(count>2)
            break;
       }
       i++;
    }
    if(count == 2)
      printf("%d is Prime number",num);
    else
      printf("%d is not prime number",num);
    getch();
    return 0;
}
