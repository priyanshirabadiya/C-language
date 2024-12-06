#include<stdio.h>
int main()
{
	int i,j,n,sp=10;
	printf(" enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=1;j--)
		{
			if(i>=j)
				printf("* ");
			else
				printf(" ");
		}
		sp--;
		printf("\n");
	}
	for(i=n-1;i>=1;i--)
	{
		for(j=n;j>=1;j--)
		{
			if(i>=j)
				printf("* ");
			else
				printf(" ");
		}
		sp--;
		printf(" \n");
	}
	return 0;
}