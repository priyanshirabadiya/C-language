#include<stdio.h>
float add(int a,float b)
{
	return a*b;
}
int main()
{
	int a;
	float b;
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%f",&b);
	float x=add(a,b);
	printf("mul:%f",x);
}