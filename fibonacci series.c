#include<stdio.h>
#include<conio.h>
void main()
{ 
    int i,n,a=0,b=1,c;
    clrscr();
    printf("Enter the no of terms:");
    scanf("%d",&n);
    printf("\t%d",b);
    for(i=0;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("\t%d",c);
    }
}
