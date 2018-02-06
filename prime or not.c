#include<stdio.h>
void main()
{
    int x,i,c=0,d;
    printf("Enter the number");
    scanf("%d",&x);
    if(x==1)
    {
        printf("neither prime nor composite");
    }
    if(x==2)
    {
        printf("only even prime no.");
    }else 
    {
    for(i=2;i<x;i++)
    {
       d=x%i; 
    if(d==0)
    {
       c++;
    }
    }
    if(c==0)
    {
        printf("prime");
    }
    else
    {
        printf(" not prime");
    }
    }
    }
    
