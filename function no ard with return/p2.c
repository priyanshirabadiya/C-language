#include<stdio.h>
int add()
{
	int m,n;
	printf("enter n:");
	scanf("%d",&n);
	printf("enter m:");
	scanf("%d",&m);
	if(n<m)
	{
		//printf("%d small number",n);
		return n;
	}
	else
	{
		//printf("%d small number",m);
		return m;
	}
}
int main()
{
	printf("%d",add());
}