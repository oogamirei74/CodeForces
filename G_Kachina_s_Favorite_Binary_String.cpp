#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> adj(n-1);

        // Query f(i, i+1) for each adjacent pair
        for (int i = 1; i < n; i++) {
            cout << "? " << i << " " << i+1 << endl;
            fflush(stdout);
            int ans; cin >> ans;
            adj[i-1] = ans;
        }

        // Meaning of adj[i]: f(i,i+1) number of "01" subsequences between s_i and s_(i+1)
        // adj[i] == 1 => s[i] == '0', s[i+1] == '1'
        // adj[i] == 0 => no "01" subsequence between s[i] and s[i+1]: possibilities are (0,0), (1,0), (1,1)

        // Try two assumptions for s[0], '0' or '1', and deduce the rest accordingly
        vector<int> candidate1(n, -1), candidate2(n, -1);
        candidate1[0] = 0; // assume s_1 = '0'
        candidate2[0] = 1; // assume s_1 = '1'

        auto deduce = [&](vector<int> &cand) -> bool {
            for (int i = 0; i < n-1; i++) {
                if (adj[i] == 1) {
                    // must be "01"
                    if (cand[i] == 1) return false; // conflict: s[i] = 1 but must be 0 here
                    cand[i] = 0;
                    cand[i+1] = 1;
                } else {
                    // adj[i] == 0
                    if (cand[i] != -1) {
                        if (cand[i] == 0) {
                            // s[i]=0 => s[i+1] must be 0 here (to avoid "01")
                            if (cand[i+1] != -1 && cand[i+1] != 0) return false;
                            cand[i+1] = 0;
                        } else {
                            // s[i] = 1, s[i+1] can be 0 or 1. Set to 0 if unknown.
                            if (cand[i+1] == -1) cand[i+1] = 0;
                        }
                    } else {
                        // s[i] and s[i+1] unknown, assign s[i]=1, s[i+1]=0 as default
                        cand[i] = 1;
                        cand[i+1] = 0;
                    }
                }
            }
            return true;
        };

        bool ok1 = deduce(candidate1);
        bool ok2 = deduce(candidate2);

        // If no solutions found
        if (!ok1 && !ok2) {
            cout << "! IMPOSSIBLE" << endl;
            fflush(stdout);
        } 
        // Only candidate1 is valid
        else if (ok1 && !ok2) {
            for (int i = 0; i < n; i++) {
                if (candidate1[i] == -1) candidate1[i] = 0;
            }
            cout << "! ";
            for (int i = 0; i < n; i++) cout << candidate1[i];
            cout << endl;
            fflush(stdout);
        } 
        // Only candidate2 is valid
        else if (!ok1 && ok2) {
            for (int i = 0; i < n; i++) {
                if (candidate2[i] == -1) candidate2[i] = 0;
            }
            cout << "! ";
            for (int i = 0; i < n; i++) cout << candidate2[i];
            cout << endl;
            fflush(stdout);
        } 
        // Both valid - check if identical after filling unknowns
        else {
            for (int i = 0; i < n; i++) {
                if (candidate1[i] == -1) candidate1[i] = 0;
                if (candidate2[i] == -1) candidate2[i] = 0;
            }
            if (candidate1 == candidate2) {
                cout << "! ";
                for (int i = 0; i < n; i++) cout << candidate1[i];
                cout << endl;
                fflush(stdout);
            } else {
                cout << "! IMPOSSIBLE" << endl;
                fflush(stdout);
            }
        }
    }

    return 0;
}
