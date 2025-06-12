#include<stdio.h>
#include<math.h>
int main()
{
    int a11, a12, a13, a14, a15,
        a21, a22, a23, a24, a25,
        a31, a32, a33, a34, a35,
        a41, a42, a43, a44, a45,
        a51, a52, a53, a54, a55;
        
    int ans;
 
    scanf("%d%d%d%d%d\n%d%d%d%d%d\n%d%d%d%d%d\n%d%d%d%d%d\n%d%d%d%d%d", &a11, &a12, &a13, &a14, &a15,
                                                                        &a21, &a22, &a23, &a24, &a25,
                                                                        &a31, &a32, &a33, &a34, &a35,
                                                                        &a41, &a42, &a43, &a44, &a45,
                                                                        &a51, &a52, &a53, &a54, &a55);
 
          if(a11 == 1)
            ans = 4;
          else if(a12 == 1)
            ans = 3;
          else if(a13 == 1)
            ans = 2;
          else if(a14 == 1)
            ans = 3;
          else if(a15 == 1)
            ans = 4;
          else if(a21 == 1)
            ans = 3;
          else if(a22 == 1)
            ans = 2;
          else if(a23 == 1)
            ans = 1;
          else if(a24 == 1)
            ans = 2;
          else if(a25 == 1)
            ans = 3;
          else if(a31 == 1)
            ans = 2;
          else if(a32 == 1)
            ans = 1;
          else if(a33 == 1)
            ans = 0;
          else if(a34 == 1)
            ans = 1;
          else if(a35 == 1)
            ans = 2;
          else if(a41 == 1)
            ans = 3;
          else if(a42 == 1)
            ans = 2;
          else if(a43 == 1)
            ans = 1;
          else if(a44 == 1)
            ans = 2;
          else if(a45 == 1)
            ans = 3;
          else if(a51 == 1)
            ans = 4;
          else if(a52 == 1)
            ans = 3;
          else if(a53 == 1)
            ans = 2;
          else if(a54 == 1)
            ans = 3;
          else
            ans = 4;
 
          printf("%d", ans);
 
          return 0;
 
 
 
}