#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
    char a[10];
    int i,n;
    clrscr();
    printf("enter the string:");
    gets(a);
    printf("enter no of characters to print:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    printf("%c",a[i]);
    getch();
}
