#include<stdio.h>
int main()
{
	int i,j,sp=10;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=sp;j++)
		printf(" ");
		for(j=1;j<=i;j++)
		{
			printf("%c ",j+64);
		}
		printf("\n");
		sp-=2;
	}
	for(i=6;i>=1;i--)
	{
		for(j=1;j<=sp;j++)
		printf(" ");
		for(j=1;j<=i;j++)
		{
			printf("%c ",j+64);
		}
		printf("\n");
		sp+=2;
	}	
	return 0;
}