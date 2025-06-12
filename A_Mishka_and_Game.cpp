#include<stdio.h>
int main()
{
    int n, a, b, M = 0, C = 0, draw = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d %d", &a, &b);
        if(a > b)
        {
            M = M + 1;
        }
        else if(a < b)
        {
            C = C + 1;
        }
        else if(a == b)
        {
            draw = draw + 1;
        }
 
    }
    if(M > C)
    {
        printf("Mishka");
    }
    else if(M < C)
    {
        printf("Chris");
    }
    else if(M < draw && C < draw || M == C)
    {
        printf("Friendship is magic!^^");
    }
    
    return 0;
}