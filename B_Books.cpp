#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int maxBooks = 0, currentSum = 0, left = 0;

    for (int j = 0; j < n; j++) {
        currentSum += a[j];
        
        while (currentSum > t) {
            currentSum -= a[left];
            left++;
        }

        maxBooks = max(maxBooks, j - left + 1);
    }

    cout << maxBooks << endl;

    return 0;
}
