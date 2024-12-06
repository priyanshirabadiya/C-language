#include<stdio.h>
int main()
{
	int a=10,b=20,*p1,*p2,c;
	p1=&a;
	p2=&b;
	printf("before swap\n");
	printf("a=%d\n",*p1);
	printf("b=%d\n",*p2);
	c=*p1;
	*p1=*p2;
	*p2=c;
	printf("after swap\n");
	printf("a=%d\n",*p1);
	printf("b=%d\n",*p2);
}
