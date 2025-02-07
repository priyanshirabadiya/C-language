#include<stdio.h>
int main()
{
	int a,b;
	printf("\nProgram to find smallest");
	printf("\nenter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
	printf("smallest number is:%d",a<b?a:b);
	return 0;
}