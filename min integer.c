#include<stdio.h>
int main()
{
int N,i,a[i],x;
printf("enter the total integer in array:");
scanf("%d",&N);
printf("enter the integers");
for(i=0;i<N;i++)
scanf("%d",&a[i]);
{
  x=a[0];
  for(i=0;i<N;i++)
  {
      if(a[i]<x)
      x=a[i];
  }
    printf("min=%d",x);
}
}
