#include<stdio.h>
int main()
{
	int i,n,j=1;
	printf("enet n:");
	scnaf("%d",&n);
	for(i=1;i<=n;i++)
	{
		j=i*i;
		printf("%d",j);
	}
	return 0;
}