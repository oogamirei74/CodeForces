#include <bits/stdc++.h>
 using namespace std;
 
int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
 
    int mc = 0; // minimum color
    for (int i = 0; i < n; i++) {
        if (a[i] != -1) {
            mc++;
            for (int j = i + 1; j < n; j++) { // notice the i + 1. dont repeat that (similar) stupid mistake you made on #608-A again
                if (a[j] % a[i] == 0) {
                    a[j] = -1;
                }
            }
            a[i] = -1;
        }
    }
 
    cout << mc << endl;
    
    return 0;
}