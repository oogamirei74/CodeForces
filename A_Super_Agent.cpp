#include<stdio.h>
int main()
{
    char a11, a12, a13,
         a21, a22, a23,
         a31, a32, a33;
 
    scanf("%c %c %c\n%c %c %c\n%c %c %c", &a11, &a12, &a13, 
                                          &a21, &a22, &a23, 
                                          &a31, &a32, &a33);
 
           if(a11 == a33 && a12 == a32 && a13 == a31 && a23 == a21)
           {
               printf("YES");
           }
           else 
           {
            printf("NO");
           }
 
           return 0;
}