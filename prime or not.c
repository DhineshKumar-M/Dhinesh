
#include<stdio.h>
void main()
{
int x,a;
printf("enter the value a");
scanf("%d",&a);
for(x=2;x<=a;x++)
{
if(a%x==0)
break;
}
if(a==x)
printf("the number is prime %d",a);
else
printf("the number is not a prime number %d",a);
}
