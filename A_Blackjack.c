#include<stdio.h>
 
int main()
{
    int n;
    scanf("%d", &n);
 
    if(n<=10 || n>21){
        printf("0");
        }
 
    else if(n<=19){
        printf("4");
        }
 
    else if(n==20){
        printf("15");
        }
 
    else
        printf("4");
 
    return 0;
}