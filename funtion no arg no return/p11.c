#include<stdio.h>
int add()
{
	int i,n,j,l=65;
	printf("enter n :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j%2==0)
			printf("%c",l);
			else
			printf("%c",l+32);
			l++;
		}
		printf("\n");
	}
}
int main()
{
	add();
}
