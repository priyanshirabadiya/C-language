#include<stdio.h>
int main()
{
	int i,a[5][5],b[5][5],j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{	
			printf("enter val a[%d][%d]",i,j);
			scanf("  %d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("  %d",a[i][j]);
		}
		printf("\n");
	}
	printf("transport matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("  %d",a[j][i]);
		}
		printf("\n");
	}
	return 0;
}