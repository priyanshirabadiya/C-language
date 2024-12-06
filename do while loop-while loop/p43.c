#include<stdio.h>
int main()
{
	int i=1,j,a=5;
	while(i<=5)
	{
		j=1;
		while(j<=i)
		{
			printf("%d",a+j-1);
			j++;
		}
		a--;
		printf("\n");
		i++;
	}
	return 0;
}