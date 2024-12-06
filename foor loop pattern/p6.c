#include<stdio.h>
int main()
{
	int i,j;
	for(i=2;i<=10;i=i+2)
	{
		for(j=2;j<=10;j=j+2)
		{
			printf(" %d ",i);
		}
		printf("\n");
	}
	return 0;
}