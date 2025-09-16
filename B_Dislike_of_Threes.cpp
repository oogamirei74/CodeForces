#include <bits/stdc++.h>
using namespace std;

bool isLiked(int n) {
    if (n % 3 == 0 || n % 10 == 3) {
        return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        int count = 0;
        int num = 0;
        while (count < k) {
            num++;
            if (isLiked(num)) {
                count++;
            }
        }
        cout << num << endl;
    }
    return 0;
}