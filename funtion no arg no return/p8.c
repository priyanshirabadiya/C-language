#include<stdio.h>
int add()
{
	int i,n;
	printf("enter n :");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		printf("\n  %d",i);
	}
}
int main()
{
	add();
}
