#include<stdio.h>
int main()
{
    int n, ans = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        int Petya, Vasya, Tonya;
        scanf("%d %d %d", &Petya, &Vasya, &Tonya);
        if(Petya + Vasya + Tonya >= 2)
        {
            ans = ans + 1;
        }
    }
    printf("%d", ans);
 
    return 0;
}
 