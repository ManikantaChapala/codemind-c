#include<stdio.h>
int main()
{
    int n,rem,sq,sum=0;
    scanf("%d",&n);
    sq=n*n;
    while(sq>0)
    {
        rem=sq%10;
        sum +=rem;
        sq /=10;
    }
    if(sum==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}
