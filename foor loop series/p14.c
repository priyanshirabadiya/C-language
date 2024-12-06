#include<stdio.h>
int main()
{
	int i,total=0;
	for(i=1;i<=6;i=i+2)
	{
		printf("%d",i);
		total+=i;
	}
	printf("\n total of even is:%d",total);
	return 0;
}