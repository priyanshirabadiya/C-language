#include<stdio.h>
int add()
{
	int a,b;
	printf("enter a and b:");
	scanf("%d%d",&a,&b);
	return a+b;
}
int main()
{
	int x;
	x=add();
	printf("add:%d",add());
	printf("add:%d",x);
}
