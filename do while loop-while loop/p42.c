#include<stdio.h>
int main()
{
	int i=1,j,a=65;
	do
	{
		j=1;
		do
		{
			printf(" %c",a);
			a++;
			j++;
		}while(j<=i);
		i++;
	}while(i<=5);
	printf("\n");
	return 0;
}