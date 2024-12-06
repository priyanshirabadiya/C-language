#include<stdio.h>
int main()
{
	int i,j,a[5][5],b[5][5],total=0;
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
			printf("%d  ",a[i][j]);
		}
		printf("\n");
	}
	printf("lower triangle total\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i>j)
			total+=a[i][j];
		}
	}
	printf("%d",total);
	return 0;
}