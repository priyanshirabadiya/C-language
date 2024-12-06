#include<stdio.h>
int add()
{
	int i,n,j;
	printf("enter n :");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=n;j>=i;j--)
		{
			printf("%d",i);
		}
		printf("\n");
	}
}
int main()
{
	add();
}
