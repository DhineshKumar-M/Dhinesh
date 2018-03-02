#include <stdio.h>
#include <conio.h>

void main() 
{
	char str[100];
	int i,count=0;
	clrscr();
	printf("enter the sentence:");
	scanf("%[^\n]s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='0' && str[i]<='9')
		{
			count=count+1;
		}
	}
	printf("\nThe number of numeric characters are:%d",count);
	getch();
}
