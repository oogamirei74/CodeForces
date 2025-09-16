#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    vector<char> res;
    stack<int> lower, upper;
    int n = s.size();
    vector<bool> deleted;

    for (char c : s) {
        if (c == 'b') {
            if (!lower.empty()) {
                int idx = lower.top();
                lower.pop();
                deleted[idx] = true;
            }
        } else if (c == 'B') {
            if (!upper.empty()) {
                int idx = upper.top();
                upper.pop();
                deleted[idx] = true;
            }
        } else {
            int idx = res.size();
            res.push_back(c);
            deleted.push_back(false);
            if (islower(c)) {
                lower.push(idx);
            } else {
                upper.push(idx);
            }
        }
    }

    string ans;
    for (int i = 0; i < res.size(); i++) {
        if (!deleted[i]) {
            ans += res[i];
        }
    }
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}