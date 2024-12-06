#include<stdio.h>
int main()
{
	int i=1,a,j,sp=10;
	do
	{
		j=1;
		do
		{
			printf(" ");
			j++;
		}while(j<=sp);
		j=1;
		do
		{
			printf("%c ",j+64);
			j++;
		}while(j<=i);		
		printf("\n");
		sp-=2;
		i++;
	}while(i<=5);
	i=6;
	do
	{
		j=1;
		do
		{
			printf(" ");
			j++;
		}while(j<=sp);
		j=1;
		do
		{
			printf("%c ",j+64);
			j++;
		}while(j<=i);		
		printf("\n");
		sp+=2;
		i--;
	}while(i>=1);
	return 0;
} 