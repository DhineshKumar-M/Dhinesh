#include<stdio.h>
void main()
{
char a;
printf("enter the character");
scanf("%c",&a);
printf("ascii value of %c is %d ",a,a);
if(a>=97 && a<=122 ||a>=65 && a<=90)
{
printf("its an alphabet");
}
else 
{
printf("its not an alphabet");
}
}
