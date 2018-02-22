#include<stdio.h>
void main()
{
    int i,j;
    printf("\n enter the two numbers \n");
    scanf("%d %d",&i,&j);
    printf("\nBefore swap a=%d b=%d",i,j);
    i=i^j;
    j=j^i;
    i=j^i;
    printf("\nAfter swap a=%d b=%d",i,j);
}
