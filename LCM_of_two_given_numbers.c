#include <stdio.h>
int main()
{ 
    int a,b,c,i,n; 
    scanf("%d %d",&a,&b); 
    for(i=1;i<=b;i++)
    { 
        if(a%i==0 && b%i==0) c=i; 
        
    } 
    n=a*b/c; 
    printf("%d",n);
}