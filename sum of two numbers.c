#include <stdio.h>
#include<conio.h>
int main(void)
{
    float a,b,c;
    clrscr();
    printf("enter two numbers:");
    scanf("%f %f",&a,&b);
    c=a+b;
    printf("sum=%f",c);
    getch();
    return 0;
}
