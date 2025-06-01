#include<stdio.h>
int main()
{
   long long int a;
   long long int d100,d5,d20,d10,d1,r1,r5,r10,r20,r100,n;
   scanf("%lld",&a);
 
   d100=a/100;
   r100=a%100;
   d20=r100/20;
   r20=r100%20;
   d10=r20/10;
   r10=r20%10;
   d5=r10/5;
   r5=r10%5;
   d1=r5;
 
   n=d1+d5+d10+d20+d100;
 
    printf("%lld", n);
 
    return 0;
 
}