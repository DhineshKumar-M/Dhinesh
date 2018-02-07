#include<stdio.h>
void main()
{
int x,minutes;
printf("Enter total minutes");
scanf("%d",&minutes);
x=minutes/60;
printf("\nHours:%d",x);
minutes=minutes%60;
printf("\t minutes:%d",minutes);
}
