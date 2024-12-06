#include<stdio.h>
int main()
{
	float maths,eng,che,phy,total,present,marks;
	printf(" enter maths marks:");
	scanf("%f",&maths);
	printf("enter english marks:");
	scanf("%f",&eng);
	printf(" \n enter che marks:");
	scanf("%f",&che);
	printf(" \n enter phy marks:");
	scanf("%f",&phy);
	total=maths+eng+che+phy;
	printf("\n total=%f",total);
	present=total/400*100;
	printf("\n present=%f",present);
	if(maths<35||eng<35||phy<35||che<35|| present<35)
	{
		printf("\n Fail");
	}
	else if(present>=75)
	{
		printf("\n grade A");
	}
	else if(present>=60)
	{
		printf("\n grade B");
	}
	else if(present>=45)
	{
		printf("\n grade C");
	}
	else
	{
		printf("\n Pass");
	}
	
	return 0;
}