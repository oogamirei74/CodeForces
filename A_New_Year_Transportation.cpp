#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, t;
    cin >> n >> t;
    vector<int> a(n-1);
    for(int i = 0; i < (n-1); i++){
        cin >> a[i];
    }
        int cellno = 1;
        while(cellno < t){
            cellno += a[cellno - 1];
        }
            if(cellno == t){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
    return 0;
}