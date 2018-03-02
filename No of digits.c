#include<stdio.h>
#include<conio.h>
int main()
{
int n,x;
printf("enter the number:");
scanf("%d",&n);
while(n!=0)
{
    n=n/10;
    x++;
}
printf("Number of numeric digits:%d",x);
return 0;
}
