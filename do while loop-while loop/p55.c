#include<stdio.h>
int main()
{
	int i=5,j;
	while(i>=1)
	{
		j=5;
		while(j>=i)
		{
			printf("%d",j);
			j--;
		}		
		printf("\n");
		i--;
	}
	i=2;
	while(i<=5)
	{
		j=5;
		while(j>=i)
		{
			printf("%d",j);
			j--;
		}		
		printf("\n");
		i++;
	}
	return 0;
}