#include<stdio.h>
int main()
{
	int i=1,n,j=1;
	printf("enter n:");
	scanf("%d",&n);
	while(i<=n)
	{
		j=i*i;
		printf("   %d",j);
		i++;
	}
	return 0;
}
