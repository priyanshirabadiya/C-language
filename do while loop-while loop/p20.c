#include<stdio.h>
int main()
{
	int i=1,a=0,b=1,c,n;
	printf(" enter n:");
	scanf("%d",&n);
	do
	{
		c=a+b;
		a=b;
		b=c;
		i++;
		printf( "  %d",a);
	}while(i<=n);
	return 0;
}
	
	