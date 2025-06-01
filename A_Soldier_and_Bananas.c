#include<stdio.h>
int main()
{
    long int n;
    long int k, w, a;
    scanf("%ld %ld %ld", &k, &n, &w);
    a = (k * ((w*(w+1))/2));
 
    if(a > n){
        printf("%ld", a - n);
        }
    else{
        printf("0");
        }
 
    return 0;
}