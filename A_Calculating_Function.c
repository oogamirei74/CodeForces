#include<stdio.h>
int main()
{
    long long int n, k;
    scanf("%lld", &n);
    if(n%2 == 0){
        k = n/2;
      }
    else{
        k = ((n+1)/2)*(-1);
    }
    printf("%lld", k);
 
    return 0;
}