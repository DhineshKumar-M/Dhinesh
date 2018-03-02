#include<stdio.h>
#include<conio.h>
int main()
{
int i,a[i],n,sum,average;
printf("enter the no of intergers:");
scanf("%d",&n);
printf("enter the numbers:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
average=sum/n;
printf("%d",average);
return 0;
}
