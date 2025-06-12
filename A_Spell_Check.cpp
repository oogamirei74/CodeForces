#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    string need = "Timur";

    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        if(n != 5){
            cout << "NO" << endl;
            continue;
        }
        int coutT = 0, couti = 0, coutm = 0, coutu = 0, coutr = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == 'T'){
                coutT++;
            } else if(s[i] == 'i'){
                couti++;
            } else if(s[i] == 'm'){
                coutm++;
            } else if(s[i] == 'u'){
                coutu++;
            } else if(s[i] == 'r'){
                coutr++;
            }
        }
        if(coutT == 1 && couti == 1 && coutm == 1 && coutu == 1 && coutr == 1){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;    
}