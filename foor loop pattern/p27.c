#include<stdio.h>
int main()
{
	int i,j,sp=10;
	for(i=5;i>=1;i--)
	{
		for(j=sp;j>=5;j--)
			printf("   ");
		for(j=i;j>=1;j--)
		{
			printf(" * ");
		}
		sp++;
		printf(" \n");
	}
	return 0;
}