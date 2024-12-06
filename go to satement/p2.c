#include<stdio.h>
int main()
{
	int i=1,j;
	test:
		if(i<=5)
		{
		j=1;
		hello:
		if(j<=i)
		{
			printf("*");
			j++;
			goto hello;
		}
			printf("\n");
			i++;
			goto test;
		}
}