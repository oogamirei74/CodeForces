#include<bits/stdc++.h>
using namespace std;

int main(){
    int a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;

    string s;
    cin >> s;

    int calories = 0;
    for(int i = 0; i < s.length(); i++){
        char ch = s[i];
        if(ch == '1'){
            calories += a1;
        } else if(ch == '2'){
            calories += a2;
        } else if(ch == '3'){
            calories += a3;
        } else{
            calories += a4;
        }
    
    }  
    cout << calories << endl;
}