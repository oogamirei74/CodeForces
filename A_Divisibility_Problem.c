#include<stdio.h>
int main()
{
    int n;
    long int a, b, x;
 
    scanf("%d", &n);
 
    for(int i = 0; i < n; i++){
        scanf("%ld %ld", &a, &b);
        if(a%b != 0){
        x = ((a/b)+1)*b-a;
 
        printf("%d\n", x);
        }
        else{
            printf("0\n");
        }
    }
    return 0;
}