#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        long long int n, k;
        cin >> n >> k;
        long long int div = k/(n-1);
        long long int rem = k%(n-1);
        long long int kthposint = n*div+rem;
        if(rem==0){
            kthposint--;
        }
        cout << kthposint << endl;
    }
}