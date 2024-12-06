#include<stdio.h>
int main()
{
	int i,j,l=1;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			l++;
			if(j%2==0)
			{
				printf(" %c ",l+63);
			}
			else
			{
				printf("%c",l+95);
			}
		}
		printf("\n");
	}
	return 0;
}