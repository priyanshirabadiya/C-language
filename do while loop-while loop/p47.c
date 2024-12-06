#include<stdio.h>
int main()
{
	int i=1,j,sp;
	while(i<=5)
	{
		sp=10;
		while(j>=sp)
		{
			printf("");
			j--;
		}		
		j=5;
		while(j>=i)
		{
			printf(" * ");
			j--;
		}
		sp++;
		printf("\n");
		i++;
	}
	return 0;
}