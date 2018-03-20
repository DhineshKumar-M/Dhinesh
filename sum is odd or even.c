#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    clrscr();
    printf("enter 2 numbers:");
    scanf("%d%d",&a,&b);
    c=a+b;
    if(c%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
        
    }
    getch();
}
