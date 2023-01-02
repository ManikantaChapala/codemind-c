#include<stdio.h>
int main()
{
    int n,i,sum=0,pro=1,rem;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        sum +=rem;
        pro *=rem;
        n /=10;
    }
    printf("%d",pro-sum);
    return 0;
}
