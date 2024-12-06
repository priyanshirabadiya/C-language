#include<stdio.h>
int main()
{
    int i,j,n=5;
    for(i=0;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("\n * * ");
        }
        else
        {
            printf("\n* * *");
        }
    }
}