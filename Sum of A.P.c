#include<stdio.h>
void main()
{
    int N,A,D,x;
    printf("enter the no of terms:");
    scanf("%d",&N);
    printf("enter the first value:");
    scanf("%d",&A);
    printf("enter the commom difference:");
    scanf("%d",&D);
    x=(N*(A+(A+((N-1)*D)))/2);
    printf("sum of the A.P series is: %d",x);
}
