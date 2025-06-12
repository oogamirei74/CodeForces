#include<stdio.h>
int main()
{
    int t, a, b, c, d, ans;
    scanf("%d", &t);
    for(int i = 0; i < t; i++)
    {
        ans = 0;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        if(b > a)
            ans = ans + 1;
        if(c > a)
            ans = ans + 1;
        if(d > a)
            ans = ans + 1;
 
        printf("%d\n", ans);
    }
 
    return 0;
}
