#include<stdio.h>
int main()
{
	int i=2,j;
	do
	{
		j=2;
		do
		{
			printf(" %d ",i);
			j=j+2;
		}while(j<=10);
		printf("\n");
		i=i+2;
	}while(i<=10);
	return 0;
}