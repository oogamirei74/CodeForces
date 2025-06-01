#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    sort(a, a + n);
    long long int sum_x=0,sum_y=0,ans;
    for(int i=0;i<n;i++){
        if(i<n/2){
            sum_x+=a[i];
        }
        else{
            sum_y+=a[i];
        }
    }
    ans=sum_x*sum_x +sum_y*sum_y;
    cout<<ans;
    return 0;
}