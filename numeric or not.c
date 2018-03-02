#include <stdio.h>
void main() 
{
	char str[50];
	int n,i,b;
	printf("enter the string:");
	scanf("%s",str);
	n=strlen(str);
	for(i=0;i<n;i++)
	{
	{
		if(str[i]>='0' && str[i]<='9')
		{
	b++;
		}
	}
	}
		if(b==n)
		{
			printf("\n The given string is numeric");
		}
		else
		{
		printf("\n The given string is not a numeric");
	}
}
