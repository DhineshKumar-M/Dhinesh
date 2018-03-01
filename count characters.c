
#include <stdio.h>
#include <conio.h>
void main()
{
	char str[100];
	int i,c=0;
	printf("enter the sentence:");
	scanf("%[^\n]s",str);
	for(i=0;str[i]!='\0';i++)
	{
		c=c+1;
	}
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			c=c-1;
		}
	}
	printf("\nthe number of characters in the line are:%d",c);
	getch();
}
