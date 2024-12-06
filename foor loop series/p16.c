#include<stdio.h>
int main()
{
	int i,n,j=1;
	printf("enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			j=i*i;
			printf("  %d",j);
		}
		else
		{
			printf("  %d",i);
		}
	}
	return 0;
}