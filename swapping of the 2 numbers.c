#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k;
    clrscr();
    printf("\n enter the two numbers \n");
    scanf("%d %d",&i,&j);
    printf("\nBefore swap a=%d b=%d",i,j);
   k=i;
   i=j;
   j=k;
    printf("\nAfter swap a=%d b=%d",i,j);
    getch();
}
