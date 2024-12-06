#include<stdio.h>
int main()
{
	int i=1,j,n=5;
	while(i<=n)
	{
		j=1;
		while(j<=n)
		{
			if(i==1||i==n||j==1||j==n)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
			j++;
		}		
		printf("\n");
		i++;
	}
	return 0;
}