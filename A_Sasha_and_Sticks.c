#include<stdio.h>
int main()
{
    long long int n, k, ans;
 
    scanf("%lld %lld", &n, &k);
 
    ans = n/k;
 
    if(ans%2 == 0){
        printf("NO");
        }
 
    else{
        printf("YES");
        }
 
    return 0;
 
}