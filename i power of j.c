#include<stdio.h>
void main()
{
int i,j,n=1;
printf("Enter the values");
scanf("%d %d ",&i,&j);
for(int k=1;k<=j;k++)
{
n=n*i;
}
printf("\n ans=%d",n);
}
