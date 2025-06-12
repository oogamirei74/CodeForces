#include<stdio.h>
int main()
{
    int n, k, Participants = 0;
 
    scanf("%d %d", &n, &k);
 
    int a[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
 
    for(int i = 0; i < n; i++)
    {
        if(a[i] >= a[k-1] && a[i] > 0)
            {
                Participants = Participants + 1;
            }
    }
 
    printf("%d", Participants);
 
    return 0;
}