#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string x;
        cin >> x;
        int digit = x[0] - '0';
        int len = x.length();
        int total = 0;
        // For digits 1 to (digit - 1), each has 1+2+3+4 presses
        total += (digit - 1) * 10;
        // For the current digit, add 1+2+...+len
        total += len * (len + 1) / 2;
        cout << total << endl;
    }
    return 0;
}