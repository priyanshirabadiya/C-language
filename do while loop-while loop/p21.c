#include<stdio.h>
int main()
{
	float i=0.5,n,j=0.5;
	printf("enter n:");
	scanf("%f",&n);
	printf("%f",j);
	while(i<=n)
	{
		j+=i*1;
		printf("  %f",j);
		i++;
	}
	return 0;
}
