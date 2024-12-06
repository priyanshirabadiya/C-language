#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
	printf("smallest number is:%d",a<b?a:b);
	return 0;
}