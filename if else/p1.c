#include<stdio.h>
int main()
{
	int m,n;
	printf("enter n:");
	scanf("%d",&n);
	printf("enter m:");
	scanf("%d",&m);
	if(n<m)
	{
		printf("%d small number",n);
	}
	else
	{
		printf("%d small number",m);
	}
	return 0;
}