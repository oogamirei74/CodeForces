#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    vector<vector<int>> b(n, vector<int>(m));
    
    vector<int> a_row(n*m+1), a_col(n*m+1);
    vector<int> b_row(n*m+1), b_col(n*m+1);
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            a_row[a[i][j]] = i;
            a_col[a[i][j]] = j;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> b[i][j];
            b_row[b[i][j]] = i;
            b_col[b[i][j]] = j;
        }
    }
    
    vector<int> row_map(n, -1);
    vector<int> col_map(m, -1);
    
    for (int x = 1; x <= n*m; x++) {
        int i = a_row[x];
        int j = a_col[x];
        int i2 = b_row[x];
        int j2 = b_col[x];
        
        if (row_map[i] == -1) {
            row_map[i] = i2;
        } else if (row_map[i] != i2) {
            cout << "NO" << endl;
            return;
        }
        
        if (col_map[j] == -1) {
            col_map[j] = j2;
        } else if (col_map[j] != j2) {
            cout << "NO" << endl;
            return;
        }
    }
    
    cout << "YES" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}