#include<stdio.h>
int main()
{
    int num ,temp,rev=0,b;
    printf("Enter the number");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        b=temp%10;
       rev=(rev*10)+b;
       temp/=10;
    }
    if(rev==num)
    printf("palindrom");
    else 
    printf("Not palindrom");
    return 0;
}

