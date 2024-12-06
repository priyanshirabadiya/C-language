#include<stdio.h>
int add()
{
	int i=1,j,sp=10,n;
	printf("enter n:");
	scanf("%d",&n);
	do
	{
		j=1;
		do
		{
			printf(" ");
			j++;
		}while(j<=sp);
		j=1;
		do
		{
			if(i==1||i==n||j==1||j==i)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
			j++;
		}while(j<=i);		
		printf("\n");
		sp--;
		i++;
	}while(i<=n);
}
int main()
{
	add();
}