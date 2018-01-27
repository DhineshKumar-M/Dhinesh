#include<stdio.h>
void main()
{
int i,x,n;
printf("Enter the values");
scanf("%d %d",&x,&n);
for(i=x;i<n;i++)
{
if(i%2==1)
printf(" %d",i);
}
}
