#include<stdio.h>
int main()
{
	int a[5],i,b[5],sum;
	for(i=0;i<5;i++)
	{
		printf("enter val a[%d]: ",i);
		scanf("%d",&a[i]);
		printf(" enter val b[%d]:",i);
		scanf("%d",&b[i]);
	}
	printf("a\tb\tsum");
	for(i=0;i<5;i++)
	{
		sum=a[i]+b[i];
		printf(" \n %d\t%d\t%d",a[i],b[i],sum);
	}
	return 0;
}