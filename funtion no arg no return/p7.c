#include<stdio.h>
int add()
{
	int n;
	printf("enter n :");
	scanf("%d",&n);
	if(n>0)
		printf("postive");
	else
		printf("negative");
}
int main()
{
	add();
}
