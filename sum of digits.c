#include <stdio.h>
int main()
{
  int Number,y,x;
  printf("\n  Enter the number\n");
  scanf("%d", &Number);
  while(Number!=0)
  {
     x= Number%10;
     y=y+x;
     Number=Number/10;
  }
  printf("sum=%d",y);
  return 0;
}
 
