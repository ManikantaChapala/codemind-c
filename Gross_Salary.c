#include<stdio.h>
int main()
{ 
    float basic,da,hra,gr; 
    scanf("%f",&basic); 
    if(basic<=10000) 
    { 
        da=0.8*basic; 
        hra=0.2*basic; 
        gr=basic+da+hra; 
        printf("%.2f",gr); 
    } 
    else if(basic>10000 && basic<=20000) 
    { 
        da=0.9*basic; 
        hra=0.25*basic; 
        gr=basic+da+hra; 
        printf("%.2f",gr); 
    } 
    else if(basic>20000) 
    { 
        da=0.95*basic; 
        hra=0.3*basic; 
        gr=basic+da+hra; 
        printf("%.2f",gr); 
    }
}