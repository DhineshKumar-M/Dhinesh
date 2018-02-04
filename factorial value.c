#include<stdio.h>
void main()
{
    int i,b,c=1;
    printf("\nEnter the table value:");
    scanf("%d",&b);
    for(i=1;i<=b;i++)
    c=c*i;
    printf("FACTORIAL VALUE:%d",c);
}
