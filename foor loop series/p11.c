#include<stdio.h>
int main()
{
	int i,total=0;
	for(i=1;i<=5;i++)
	{
		printf("%d",i);
		total+=i;
	}
	printf("\n total is:%d",total);
	return 0;
}