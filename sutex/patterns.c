#include<stdio.h>
int main()
{
    int i,j,k,m,n=11;
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            printf("  ");
        }
       for(k=1;k<=i;k++)
        {
            printf(" *");
        } 
        printf(" ");
        for(m=1;m<i;m++)
        {
            printf("# ");
        }
        printf("\n");
    }
}