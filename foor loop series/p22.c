#include<stdio.h>
int main()
{
	int i;
	for(i=0;i<=24;i=i+2)
	{
		if(i%2==0)
		{
			printf("%c",i+65);
		}
		else
		{
			printf("%c",i+97);
		}
		
	}
	return 0;
}
		