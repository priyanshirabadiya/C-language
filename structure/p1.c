#include<stdio.h>
struct data{
	int p;
	char p1[20];
	int rate,qty,amt,dis,billamt,gst,netbill;
};
int main()
{
	struct data a[5];
	int i;
	for(i=0;i<2;i++)
	{
		printf("enter products number:");
		scanf("%d",&a[i].p);
		printf("enter  products name:");
		scanf("%s",&a[i].p1);
		printf("enter  rate:");
		scanf("%d",&a[i].rate);
		printf("enter  qty:");
		scanf("%d",&a[i].qty);
	}
	printf("\n\nproducts no\tproducts name\trate\tqty\tamt\tdis\tbillamt\tgst\tnetbill");
	for(i=0;i<2;i++)
	{
		a[i].amt=a[i].rate*a[i].qty;
		a[i].dis=a[i].amt/100*5;
		a[i].billamt=a[i].amt-a[i].dis;
		a[i].gst=a[i].billamt/100*18;
		a[i].netbill=a[i].billamt+a[i].gst;
		printf("\n%d\t\t%s\t\t%d\t%d\t%d\t%d\t%d\t%d\t%d",a[i].p,a[i].p1,a[i].rate,a[i].qty,a[i].amt,a[i].dis,a[i].billamt,a[i].gst,a[i].netbill);
	}
}