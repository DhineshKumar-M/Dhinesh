#include<stdio.h>
void main( )
{
int a,b,c,n,x;
printf ("Enter a Three Digit Number:");
scanf ("%d",&n);
a=n%10;
b=( (n/10)%10);
c=(n/100)%10;
x=(a*a*a)+(b*b*b)+(c*c*c);
if(x==n)
printf("\nArmstrong");
else
printf("\nNot armstrong");
}
