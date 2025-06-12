#include<stdio.h>
int main()
{
    int n, ans = 0;
    scanf("%d", &n);
    char a[n];
    scanf("%s", &a);
    for(int i = 0; i + 1 < n; i++)
    {
        if(a[i] == a[i+1])
            ans = ans + 1;
    }
    printf("%d", ans);
 
    return 0;
}