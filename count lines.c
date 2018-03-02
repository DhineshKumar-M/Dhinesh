#include <stdio.h>
#include <conio.h>
void main()
{
	char str[50];
	int i,count=1;
	clrscr();
	printf("enter the sentence:");
	scanf("%[^\n]s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='.')
		{
			count=count+1;
		}
	}
	printf("\nThe number of lines in the paragraph are:%d",count);
	getch();
}
