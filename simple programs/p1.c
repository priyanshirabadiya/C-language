#include <stdio.h>
int
main ()
{
  float inch = 2.54, a1 = 20;
  float a2 = 200;
  float a3 = 50;
  float a4 = 230;
  printf("\tcm to inch\n\n");
  printf ("20cm=%finch", a1 / inch);
  printf ("\n200cm=%finch", a2 / inch);
  printf ("\n50cm=%finch", a3 / inch);
  printf ("\n230cm=%finch", a4 / inch);     
  
  printf ("\n\n\tCM to km\n");
  
  float km = 1000, n = 20;
  float n2 = 20000;
  float n3 = 23456;
  float n4 = 30000;
  printf ("\n20cm=%fkm", n / km);
  printf ("\n20000cm=%fkm", n2 / km);
  printf ("\n23456cm=%fkm", n3 / km);
  printf ("\n30000cm=%fkm", n4 / km);
  
  printf ("\n\n\tfut to cm\n");
  
  float inh=12,j1=20;
  float j2=200;
  float j3=0.245;
  float j4=5;
  printf ("\n20fut=%finch",j1*inh);
  printf ("\n200fut=%finch",j2*inh);
  printf ("\n0.245fut=%finch",j3*inh);
  printf ("\n5fut=%finch",j4*inh);
  
  printf ("\n\n\tAREA OF CIRCLE\n");
  
  float pi=3.14,r1=2;
  float r2=7;
  float r3=6;
  float r4=5;
  
  printf ("\narea of circle=%fcm",r1*r1*pi);
  printf ("\narea of circle=%fcm",r2*r2*pi);
  printf ("\narea of circle=%fcm",r3*r3*pi);
  printf ("\narea of circle=%fcm",r4*r4*pi);
  

  return 0;
}