#include<stdio.h>
int add()
{
	int n;
	printf("enter n :");
	scanf("%d",&n);
	if(n>18)
		printf("eligible for voteing");
	else
		printf("eligible for not voting");
}
int main()
{
	add();
}
