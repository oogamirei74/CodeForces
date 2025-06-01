#include<stdio.h>
int main(){
    long long int m,n,a,x,m1,n2;
    scanf("%lld %lld %lld", &m, &n, &a);
 
    if (m%a == 0){
        m1 = m/a;
    }
    else{
        m1 = (m/a)+1;
    }
 
    if (n%a == 0){
        n2 = n/a;
    }
    else{
        n2 = (n/a)+1;
    }
    x = m1 * n2;
 
    printf ("%lld",x);
 
    return 0;
}