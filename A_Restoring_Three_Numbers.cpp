#include<stdio.h>
 
int max(int a, int b);
 
int main()
{
    int a, b, c, d, mx;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    mx = max(max(max(a,b),c),d);
 
    a = mx - a;
    b = mx - b;
    c = mx - c;
    d = mx - d;
 
    if(a > 0)
    {
        printf("%d ", a);
    }
    if(b > 0)
    {
        printf("%d ", b);
    }
    if(c > 0)
    {
        printf("%d ", c);
    }
    if(d > 0)
    {
        printf("%d ", d);
    }
    return 0;
}
 
int max(int a, int b)
{
    if(a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
 
}