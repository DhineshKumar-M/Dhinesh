#include<stdio.h>
#include<conio.h>
void main()
{
    int x,y;
    clrscr();
    printf("\n enter the two numbers \n");
    scanf("%d %d",&x,&y);
    printf("\nBefore swap a=%d b=%d",x,y);
    x=x^y;
    y=y^x;
    x=y^x;
    printf("\nAfter swap a=%d b=%d",x,y);
    getch();
}
