#include<stdio.h>
int add()
{
	int i=1,j,sp;
	j=1;
	do
	{
		sp=10;
		do
		{
			printf("  ");
			j++;
		}while(j<=sp);		
		j=1;
		do
		{
			printf("* ");
			j++;
		}while(j<=i);
		sp--;
		printf("\n");
		i++;
	}while(i<=5);
}
int main()
{
	add();
}