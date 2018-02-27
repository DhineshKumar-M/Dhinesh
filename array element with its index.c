#include<stdio.h>
#include<conio.h>
void main ()
{
    int i,n,a[i];
    clrscr();
    printf("enter the no of elements:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
      for(i=0;i<n;i++)
    {
    printf("\n%d\t%d",a[i],i);
    getch();
}
}
