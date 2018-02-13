#include<stdio.h>
int main()
{
    int a,b,x,y,i,j,k;
    printf("TIME1:");
    scanf("%d%d",&a,&b);
    printf("TIME2:");
    scanf("%d%d",&x,&y);
    a=(a*60)+b;
    x=(x*60)+y;
    i=a-x;
    j=i/60;
    k=i%60;
    printf("TIME:HOURS=%d,MINS=%d",j,k);
    return 0;
}
