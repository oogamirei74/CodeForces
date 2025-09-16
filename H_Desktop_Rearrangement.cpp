#include <bits/stdc++.h>
using namespace std;

struct Fenwick {
    int n;
    vector<int> bit;
    Fenwick(int n) : n(n), bit(n+1, 0) {}
    void update(int idx, int delta) {
        for (; idx <= n; idx += idx & -idx) bit[idx] += delta;
    }
    int query(int idx) {
        int res = 0;
        for (; idx > 0; idx -= idx & -idx) res += bit[idx];
        return res;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, q;
    cin >> n >> m >> q;
    vector<string> grid(n);
    for (int i = 0; i < n; i++) cin >> grid[i];

    int N = n * m;
    Fenwick bit(N);
    int total = 0;

    auto index = [&](int r, int c) {
        return (c - 1) * n + r; // 1-based linear index
    };

    // build BIT
    for (int r = 1; r <= n; r++) {
        for (int c = 1; c <= m; c++) {
            if (grid[r-1][c-1] == '*') {
                int idx = index(r, c);
                bit.update(idx, 1);
                total++;
            }
        }
    }

    while (q--) {
        int x, y;
        cin >> x >> y;
        int idx = index(x, y);
        if (grid[x-1][y-1] == '*') {
            grid[x-1][y-1] = '.';
            total--;
            bit.update(idx, -1);
        } else {
            grid[x-1][y-1] = '*';
            total++;
            bit.update(idx, +1);
        }

        int inside = bit.query(total);
        cout << (total - inside) << "\n";
    }

    return 0;
}
