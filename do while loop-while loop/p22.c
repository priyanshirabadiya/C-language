#include<stdio.h>
int main()
{
	int i=0;
	do
	{
		if(i%4==0)
		{
			printf(" %c",i+65);
		}
		else
		{
			printf("%c",i+97);
		}
		i=i+2;
	}while(i<=24);
	return 0;
}
