#include<stdio.h>
int main()
{
	int i=1;
	test:
		if(i<=5)
		{
			printf("%d",i++);
			goto test;
		}
}