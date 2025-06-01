#include<stdio.h>
int main()
{
    long long int a,b,n,i,x,j;
    scanf("%lld", &j);
 
    for(i=0; i<j; i++){
         scanf("%lld %lld %lld", &a, &b, &n);
         for(x=0; a<=n && b<=n; x++){
         if(a < b){
            a = a + b;
         }
         else{
            b = a + b ;
         }
        }
        printf("%lld\n", x);
    }
 
    return 0;
}