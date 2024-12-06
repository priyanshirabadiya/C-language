#include<stdio.h>
int maths,sci,eng,total;
float per;
void dis()
{
	printf("maths\tenglish\tsci\ttotal\tper\n");
	printf("%d\t%d\t%d\t%d\t%.2f",maths,eng,sci,total,per);

}
void clac()
{
	total=maths+eng+sci;
	per=(float)total/3;
	dis();
}
void setdata()
{
	printf("\nenter maths marks:");
	scanf("%d",&maths);
	printf("\nenter english marks:");
	scanf("%d",&eng);
	printf("\nenter sci marks:");
	scanf("%d",&sci);
	clac();
}
int main()
{
	setdata();
}
	
	