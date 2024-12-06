#include<stdio.h>
#define n 5
int display(int a[])
{
	int min=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]<min)
		min=a[i];
	}
	printf("min=%d\n ",min);
}
int add(int b[])
{
	int max=b[0];
	for(int i=0;i<n;i++)
	{
		if(b[i]>max)
		max=b[i];
	}
	printf("max=%d\n ",max);
}
int main()
{
	int arr[n],i;
	for(i=0;i<n;i++)
	{
		printf("enter val:");
		scanf("%d",&arr[i]);
	}
	display(arr);
	add(arr);
}