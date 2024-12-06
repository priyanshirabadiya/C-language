#include<stdio.h>
int main()
{
	int i=1,n,j=1;
	printf("enter n:");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("\n %d",j);
		j*=2;
		i++;
	}
	return 0;
}
