#include<stdio.h>
int add()
{
	int a,b,c;
	printf("enter a :");
	scanf("%d",&a);
	printf("enter b :");
	scanf("%d",&b);
	a=b*a;
	b=a/b;
	a=a/b;
	printf("a=%d\n",a);
	printf("b=%d\n",b);
}
int main()
{
	add();
}
