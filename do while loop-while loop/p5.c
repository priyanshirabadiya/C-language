#include<stdio.h>
int main()
{
	int i,n;
	printf("enter n:");
	scanf("%d",&n);
	i=-n;
	while(i<=n)
	{
		printf("\n %d",i);
		i++;
	}
	return 0;
}