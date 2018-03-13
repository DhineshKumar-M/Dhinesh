#include<stdio.h>
#include<conio.h>
void main()
{ 
    int x,n,a=0,b=1,c;
    clrscr();
    printf("Enter the no of terms:");
    scanf("%d",&n);
    printf("\t%d",b);
    for(x=0;x<n;x++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("\t%d",c);
    }
    getch();
}
