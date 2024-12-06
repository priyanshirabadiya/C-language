
#include<stdio.h>
int main()
{
	int i,j,a=5;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" %d ",a+j-1);
		}
		a--;
		printf("\n");
	}
	return 0;
}