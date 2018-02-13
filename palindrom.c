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
    printf("palindrome");
    else 
    printf("Not palindrome");
    return 0;
}

