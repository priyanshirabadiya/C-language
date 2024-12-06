#include<stdio.h>
int main()
{
	int n,m;
	printf("enter n:");
	scanf("%d",&n);
	printf("enter m:");
	scanf("%d",&m);
	if(n*m%n+m==0)
	{
		printf("dision by 3 or 7");
	}
	else
	{
		printf("not divison by 3 or 7");
	}
	return 0;
}
