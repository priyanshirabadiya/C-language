#include<stdio.h>
int main()
{
	int i=1,j,sp=10,n;
	printf("enter n:");
	scanf("%d",&n);
	do
	{
		j=n;
		do
		{
			if(i>=j)
			{
				printf("* ");
			}
			else
			{
				printf(" ");
			}
			j--;
		}while(j>=1);		
		printf("\n");
		sp--;
		i++;
	}while(i<=n);
	i=n-1;
	do
	{
		j=n;
		do
		{
			if(i>=j)
			{
				printf("* ");
			}
			else
			{
				printf(" ");
			}
			j--;
		}while(j>=1);		
		printf("\n");
		sp--;
		i--;
	}while(i>=1);
	return 0;
}