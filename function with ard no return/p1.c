#include<stdio.h>
int add(int n)
{
	int i,rev=0,a;
	while(n!=0)
	{
		a=n%10;
		rev=rev*10+a;
		n=n/10;
	}
	printf("%d",rev);
}
int main()
{
	int n;
	printf("enter n:");
	scanf("%d",&n);
	add(n);
}