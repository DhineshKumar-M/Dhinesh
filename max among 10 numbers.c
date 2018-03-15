#include<stdio.h>
#include<conio.h>
int main(void)
{
int i,a[i],max;
printf("enter the numbers:");
for(i=0;i<10;i++)
scanf("%d",&a[i]);
{
  max=a[0];
  for(i=0;i<10;i++)
  {
      if(a[i]>max)
      max=a[i];
  }
    printf("max=%d",max);
}
getch();
return 0;
}
