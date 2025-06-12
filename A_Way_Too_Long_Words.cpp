#include<stdio.h>
#include<string.h>
int main()
{
    int n, d;
    char a[100];
    scanf("%d", &n);
 
    for(int i = 0; i < n; i++)
    {
        scanf("%s", &a);
 
        d = strlen(a);
 
        if(d > 10)
        {
        printf("%c%d%c\n", a[0], d-2, a[d-1]);
        }
        else
        {
            printf("%s\n",a);
        }
    }
    return 0;
}