#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        vector<int> freq(26, 0);
        int maxFreq = 0;

        for (char c : s) {
            int f = ++freq[c - 'a'];
            maxFreq = max(maxFreq, f);
        }

        if (maxFreq > n / 2) {
            cout << (n - (n - maxFreq) * 2) << "\n";
        } else {
            cout << (n % 2) << "\n";
        }
    }
    return 0;
}
