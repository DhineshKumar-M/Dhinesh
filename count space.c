#include <stdio.h>
#include <conio.h>
void main()
{
	char str[100];
	int i,a=0;
	printf("enter the sentence:");
	scanf("%[^\n]s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			a=a+1;
		}
	}
	printf("\nthe number of space in the line are:%d",a);
	getch();
}
