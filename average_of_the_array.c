#include<stdio.h>
int main()
{
    int a,i;
    float sum=0;
    scanf("%d",&a);
    int n[a];
    for(i=0;i<a;i++)
    {
    scanf("%d",&n[i]);    
    sum=sum+n[i];
    }
    printf("%.2f",sum/a);
}