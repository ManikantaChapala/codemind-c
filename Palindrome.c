#include<stdio.h>
int main()
{
    int n,b,rem,sum=0;
    scanf("%d",&n);
    b=n;
    while(b>0)
    {
        rem=b%10;
        sum =sum * 10 + rem;
        b/=10;
    }
    if(n==sum)
    {
        printf("True");
    }
    else 
    {
    printf("False");
    }
    return 0;
}