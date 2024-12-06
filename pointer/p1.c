#include<stdio.h>
int main()
{
	int a=10,*p,**q;
	p=&a;
	q=&p;
	printf("value of a:%d\n",a);
	printf("address of a:%u\n",&a);
	printf("address of a using p:%u\n",p);
	printf("address of a:%u\n",&p);
	printf("value of a using p:%d\n",*p);
	printf("value of a using q:%d\n",**q);
}