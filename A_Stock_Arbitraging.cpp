#include<stdio.h>
 
int main()
{
    int n, m, r;
    scanf("%d %d %d", &n, &m, &r);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
 
    int b[m];
    for(int j = 0; j < m; j++){
        scanf("%d", &b[j]);
    }
 
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - 1; j++){
            if(a[j] > a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
 
    for(int i = 0; i < m; i++){
        for(int j = 0; j < m - 1; j++){
            if(b[j] < b[j+1]){
                int temp = b[j];
                b[j] = b[j+1];
                b[j+1] = temp;
            }
        }
    }
 
    int max = b[0];
    int min = a[0];
    int ans;
 
    if(min >= max){
        ans = r;
    }
    else{
        ans = (r/min) * max + r % min;
    }
 
    printf("%d", ans);
 
    return 0;
}