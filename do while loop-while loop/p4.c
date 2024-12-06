#include<stdio.h>
int main()
{
	int i,n;
	printf("enter n:");
	scanf("%d",&n);
	i=n;
	do
	{
		printf("\n %d",i);
		i--;
	}while(i>=1);
	return 0;
}