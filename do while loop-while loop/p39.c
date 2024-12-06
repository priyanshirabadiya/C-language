#include<stdio.h>
int main()
{
	int i=65,j;
	while(i<=69)
	{
		j=65;
		while(j<=i)
		{
			printf(" %c",i);
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}