#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=9;i=i+2)
	{
		for(j=1;j<=9;j=j+2)
		{
			printf(" %d ",i);
		}
		printf("\n");
	}
	return 0;
}