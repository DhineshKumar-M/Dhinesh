#include<stdio.h>
void main()
{
int i,a[i];
int sum=0,N,k;
printf("Total numbers:");
  scanf("%d",&N);
    printf("Enter the numbers:");
  for(i=0;i<N;i++)
    scanf("%d",&a[i]);
 printf("No of Numbers to be added:");
  scanf("%d",&k);
  for(i=0;i<k;i++)
  {
    sum=sum+a[i];
  }
  printf("sum:%d",sum);
}
