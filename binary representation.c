#include<stdio.h>
#include<string.h>
void main()
{
char str[20];
int l,i,a=0;
printf("enter tne string");
scanf("%s",str);
l=strlen(str);
for(i=0;i<l;i++)
{

    if(str[i]=='1' || str[i]=='0')
    {
    a=1;
    }

else
{
    a=0;
    break;
}
}
if(a==1)
{
    printf("yes");
}
else
{
    printf("no");
}
}
