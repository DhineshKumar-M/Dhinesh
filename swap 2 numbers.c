#include<stdio.h>
void main()
{
    int i,j,k;
    printf("\n enter the two numbers \n");
    scanf("%d %d",&i,&j);
    printf("\nBefore swap a=%d b=%d",i,j);
   k=i;
   i=j;
   j=k;
    printf("\nAfter swap a=%d b=%d",i,j);
}
