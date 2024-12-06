#include<stdio.h>
int main()
{
    int i,j,n=5,k;
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
        printf("* ");
        }
        printf("\n");
    }
    for(i=1;i<=4;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf(" ");
        }
        for(k=4;k>=i;k--)
        {
            printf("* ");
        }
    printf("\n");
    }
}
