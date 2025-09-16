#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<int> bad;
        for (int i = 0; i < n; i++) {
            int min_prev = INT_MAX;
            if (i > 0) {
                min_prev = *min_element(a.begin(), a.begin() + i);
            }
            if (min_prev <= a[i]) {
                bad.push_back(i+1);
            }
        }
        cout << bad.size() << endl;
        for (int idx : bad) {
            cout << idx << " ";
        }
        cout << endl;
    }
    return 0;
}