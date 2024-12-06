#include<stdio.h>
int main()
{
	int i=1,j;
	while(i<=9)
	{
		j=1;
		while(j<=9)
		{
			printf(" %d ",i);
			j=j+2;
		}
		printf("\n");
		i=i+2;
	}
	return 0;
}