#include<stdio.h>
int main()
{
	char ch;
	printf("enter ch:");
	scanf("%c",&ch);
	if(65<=ch&&ch<=90)
	{
		printf("%c",ch+32);
	}
	else
	{
		printf("%c",ch-32);
	}
	return 0;
}