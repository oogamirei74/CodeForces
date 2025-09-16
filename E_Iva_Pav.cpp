#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; ++i) {
            cin >> a[i];
        }

        int q;
        cin >> q;
        while (q--) {
            int l, k;
            cin >> l >> k;

            if (a[l] < k) {
                cout << -1 << " ";
                continue;
            }

            int and_val = a[l];
            int r = l;
            while (r + 1 <= n && (and_val & a[r + 1]) >= k) {
                and_val &= a[r + 1];
                ++r;
            }

            cout << r << " ";
        }
        cout << "\n";
    }

    return 0;
}
