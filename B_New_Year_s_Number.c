#include<stdio.h>
int main()
{
    int i,t,ans,rem;
    long int n;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        ans=n/2020;
        rem=n%2020;
        if(ans>=1&&rem<=ans){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
}