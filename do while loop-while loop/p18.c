#include<stdio.h>
int main()
{
	int i=1,n,a=1;
	printf("enter n:");
	scanf("%d",&n);
	do
	{
		printf("  \n %d",a*i);
		a++;
		i=i*2;
	}while(i<=n);
	return 0;
}