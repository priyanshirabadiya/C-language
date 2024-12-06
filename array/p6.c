#include<stdio.h>
int main()
{
 int i,k[5],m[5],n[5],p[5],r[5],a[5],b[5],c[5],d[5],e[5],amt,di,dis,gst,bill,tdis=0,tgst=0,tbill=0,amt1,di1,dis1,gst1,bill1,amt2,di2,dis2,gst2,bill2,amt3,di3,dis3,gst3,bill3,amt4,di4,dis4,gst4,bill4;
  	for(i=0;i<1;i++)
  	{
  		printf("enter keyboard price=",i);
  		scanf("%d",&k[i]);
  	}
  	for(i=0;i<1;i++)
  	{
  		printf("enter keyboard qty=",i);
  		scanf("%d",&a[i]);
  	}
  	for(i=0;i<1;i++)
  	{
   		printf("enter mouse price=",i);
  		scanf("%d",&m[i]);
   	}
   	for(i=0;i<1;i++)
   	{
   		printf("enter mouse qty=",i);
  		scanf("%d",&b[i]);
  	}
  	for(i=0;i<1;i++)
  	{
   		printf("enter monior price=",i);
  		scanf("%d",&n[i]);
  	}
 	 for(i=0;i<1;i++)
  	{
   		printf("enter monitor qty=",i);
  		scanf("%d",&c[i]);
  	}
  	for(i=0;i<1;i++)
  	{
   		printf("enter pro price=",i);
  		scanf("%d",&p[i]);
  	}
   	for(i=0;i<1;i++)
   	{
   		printf("enter pro qty=",i);
  		scanf("%d",&d[i]);
  	}
  	for(i=0;i<1;i++)
  	{
   		printf("enter ram price=",i);
  		scanf("%d",&r[i]);
  	}
  	for(i=0;i<1;i++)
  	{
   		printf("enter ram qty=",i);
  		scanf("%d",&e[i]);
  	}

	  printf("Product\tprice\tqty\tamt\tdis\tdiscamt\tgst\tbillamt");
   	for(i=0;i<1;i++)
   	{
			amt=k[i]*a[i];
			di=amt/100*10;
			dis=amt-di;
			tdis += dis;
			gst=dis/100*18;
			tgst += gst;
			bill=dis+gst;
			tbill += bill;
			printf("\nkey \t%d\t%d\t%d\t%d\t%d\t%d\t%d",k[i],a[i],amt,di,dis,gst,bill);
			
	}
	for(i=0;i<1;i++)
	{
			amt1=m[i]*b[i];
			di1=amt1/100*10;
			dis1=amt1-di1;
			gst1=dis1/100*18;
			bill1=dis1+gst1;
			tdis+=dis1;
			tgst+= gst1;
			tbill+=bill1;
		    printf("\nMouse \t%d\t%d\t%d\t%d\t%d\t%d\t%d",m[i],b[i],amt1,di1,dis1,gst1,bill1);
	}
	for(i=0;i<1;i++)
	{
			amt2=n[i]*c[i];
			di2=amt2/100*10;
			dis2=amt2-di2;
			gst2=dis2/100*18;
			bill2=dis2+gst2;
			tdis+=dis2;
			tgst+= gst2;
			tbill+=bill2;
		    printf("\nMon \t%d\t%d\t%d\t%d\t%d\t%d\t%d",n[i],c[i],amt2,di2,dis2,gst2,bill2);
	}
	for(i=0;i<1;i++)
	{
			amt3=p[i]*d[i];
			di3=amt3/100*10;
			dis3=amt3-di3;
			gst3=dis3/100*18;
			bill3=dis3+gst3;
			tdis+=dis3;
			tgst+= gst3;
			tbill+=bill3;
		    printf("\nPro \t%d\t%d\t%d\t%d\t%d\t%d\t%d",p[i],d[i],amt3,di3,dis3,gst3,bill3);
	}
	for(i=0;i<1;i++)
	{
			amt4=r[i]*e[i];
			di4=amt4/100*10;
			dis4=amt4-di;
			gst4=dis4/100*18;
			bill4=dis4+gst4;
			tdis+=dis4;
			tgst+= gst4;
			tbill+=bill4;
		    printf("\nRam \t%d\t%d\t%d\t%d\t%d\t%d\t%d",r[i],e[i],amt4,di4,dis4,gst4,bill4);
   	}
	printf("\n\t\t\t\t\t%d\t%d\t%d",tdis,tgst,tbill);
   return 0;
}