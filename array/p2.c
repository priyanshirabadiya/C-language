#include<stdio.h>
int main()
{
	int i,eng[5],che[5],phy[5],total=0;
	float pr;
	for(i=0;i<5;i++)
	{
		printf(" enter val eng[%d]:",i);
		scanf("%d",&eng[i]);
		printf(" enter val che[%d]:",i);
		scanf("%d",&che[i]);
		printf(" enter val phy[%d]:",i);
		scanf("%d",&phy[i]);
	}
	printf ("eng\tche\tphy\ttotal\tpr\t grade\t");
	for(i=0;i<5;i++)
	{
		total=eng[i]+che[i]+phy[i];
		pr=total/3;
		printf("\n%d\t%d\t%d\t%d\t%.2f\t",eng[i],che[i],phy[i],total,pr);
		if(eng[i]<35||phy[i]<35||che[i]<35|| pr<35)
			printf("   fail");
		else if(pr>=75)
			printf("  grade a");
		else if(pr>=60)
			printf(" grade b");
		 else if(pr>=45)
			 printf(" grade c");
		else
			 printf(" pass");
	}
	return 0;
}