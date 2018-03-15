#include <stdio.h>
#include<conio.h>
int main(void)
{
    int a,b,c;
    clrscr();
    printf("enter two numbers:");
    scanf("%d %d",&a,&b);
    c=a*b;
    if(c%2==0)
    {
        printf("even");
    }
    else
    {
        printf("not an even");
    }
    getch();
    return 0;
}
