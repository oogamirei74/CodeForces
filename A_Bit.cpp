#include<stdio.h>
int main()
{
    int n, x = 0;
    char a[5];
    scanf("%d", &n);
    for (int i = 0 ; i < n; i++)
    {
        scanf("%s", &a);
        if(a[1] == '+')
            x = x+1;
        else
        {
            x = x-1;
        }
    }
 
    printf("%d", x);
 
    return 0;
}