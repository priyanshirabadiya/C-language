#include<stdio.h>
int main()
{
	int n;
	printf("enter n:");
	scanf("%d",&n);
	if(n>18)
	{
		printf("eligible for voting");
	}
	else
	{
		printf("not eligible for voting");
	}
	return 0;
}