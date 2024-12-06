#include<stdio.h>
int main()
{
	int i,p[5],q[5],amt,di,dis,gst,bill,tdis=0,tgst=0,tbill=0;
	for(i=0;i<5;i++)
	{
		printf("enter val p[%d]: ",i);
		scanf("%d",&p[i]);
		printf("enter val q[%d]: ",i);
		scanf("%d",&q[i]);
	}
	printf("\nproducts\tprice\tqty\tamt\tdisc\tdiscAmt\tgst\tBillAmt\n");
	for(i=0;i<5;i++)
	{
		amt=p[i]*q[i];
		di=amt/100*10;
		dis=amt-di;
		gst=dis/100*18;
		bill=dis+gst;
		tdis+=dis;
		tgst+=gst;
		tbill+=bill;
		if(i==0)
		   printf("Key");
		else if(i==1)
		    printf("Mouse");
		else if(i==2)
		    printf("Moniter");
		else if(i==3)
		    printf("Pro");
		else if(i==4)
		    printf("Ram");
		printf("\t\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n",p[i],q[i],amt,di,dis,gst,bill);
	}
	printf("\n");
	printf("\t\t\t\t\t\t%d\t%d\t%d",tdis,tgst,tbill);
	return 0;
}