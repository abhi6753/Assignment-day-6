//9. Write a program to calculate LCM of two numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,L;
    printf("Enter two number to calculate LCM:\n");
    scanf("%d%d",&a,&b);
    for(L = a>b?a:b ; L<=a*b ; L+=a>b?a:b)
    {
       if(L%a==0 && L%b == 0)
          break;        
    }
    printf("LCM of %d and %d is %d",a,b,L);
    getch();
    return 0;
}