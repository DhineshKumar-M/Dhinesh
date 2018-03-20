#include <stdio.h>
#include <conio.h>
void main() 
{
	char str[100];
	int i,count=1;
	clrscr();
	printf("enter the sentence:");
	scanf("%[^\n]s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			count=count+1;
		}
	}
	printf("\nthe number of words in the sentence are:%d",count);
	getch();
}
