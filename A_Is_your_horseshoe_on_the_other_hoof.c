#include<stdio.h>
int  main()
 
{
    int cnt = 0;
    int s1, s2, s3, s4;
 
    scanf("%d", &s1);
    scanf("%d", &s2);
    if(s1 == s2){
    cnt = cnt+1;
    }
    scanf("%d", &s3);
    if(s3 == s2 || s3 == s1){
    cnt = cnt+1;
    }
    scanf("%d", &s4);
    if(s4 == s3 || s4 == s2 || s4 == s1){
    cnt = cnt+1;
    }
 
    printf("%d", cnt);
 
    return 0;
}