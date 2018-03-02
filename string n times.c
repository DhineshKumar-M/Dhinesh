#include<stdio.h>
#include<conio.h>
void main()
{
    char S[50];
    int K,i;
    clrscr(); 
    printf("enter no of times to print:");
    scanf("%d",&K);
    printf("enter the string:");
    scanf("%s",&S);
    for(i=0;i<K;i++)
    {
        printf("%s",S);
    }
    getch();
}
