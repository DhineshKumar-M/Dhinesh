
#include<stdio.h>
int main()
{
int x,y,i,c;
printf("Enter any two numbers:");
scanf("%d%d",&x,&y);
printf("Prime numbers between %d  and %d are:",x,y);
while(x<y)
{
c=0;
for(i=2;i<=x/2;++i)
{
if(x%i==0)
{
c=1;
break;
}
}
if(c==0)
printf(" \t%d",x);
++x;
}
return 0;
}
