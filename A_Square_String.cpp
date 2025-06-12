#include <bits/stdc++.h>
using namespace std;

bool isSquare(const string &s) {
    int n = s.length();
    if (n % 2 != 0) {
        return false;
    }
    int half = n / 2;
    for (int i = 0; i < half; ++i) {
        if (s[i] != s[half + i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        if (isSquare(s)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}