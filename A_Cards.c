#include <stdio.h>
 
int main()
{
    int n, sum=0;
 
    scanf("%d", &n);
 
    int cards[n];
 
    for(int i=0; i < n; i++)
    {
        scanf("%d", &cards[i]);
        sum += cards[i];
    }
 
    sum /= (n/2);
 
    for(int i=0; i < n; i++)
    {
        for(int j=0; j < n; j++)
        {
            if(i!=j && cards[i]+cards[j]==sum)
            {
                printf("%d %d\n", i+1, j+1);
                cards[i] = 0;
                cards[j] = 0;
            }
        }
    }
    
return 0;
}