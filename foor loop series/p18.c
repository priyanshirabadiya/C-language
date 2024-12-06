#include<stdio.h>
int main()
{
	int i,n,a=1;
	printf("enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d",a*i);
		a++;
	}
	return 0;
}