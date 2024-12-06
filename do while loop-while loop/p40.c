#include<stdio.h>
int main()
{
	int i=1,j,a=65;
	do
	{
		j=1;
		do
		{
			if(i%2!=0)
			{
				printf(" %c ",a);
			}
			else
			{
				printf(" %c",a+32);
			}
			a++;
			j++;
		}while(j<=i);
		printf("\n");
		i++;
	}while(i<=5);
	return 0;
}