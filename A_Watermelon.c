#include<stdio.h>
int main()
{
    int w, ans;
    scanf("%d", &w);
 
    if(w > 2){
        if(w%2 == 0){
            printf("YES");
        }
        else{
            printf("NO");
        }
    }
 
    else{
        printf("NO");
    }
 
 
    return 0;
}