#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> commands;
    for (int l = 0; l < n; l++) {
        commands.push_back("pushfront a[" + to_string(l) + "]");
        for (int r = l; r < n; r++) {
            if (r != l) {
                commands.push_back("pushback a[" + to_string(r) + "]");
            }
            commands.push_back("min");
        }
        commands.push_back("popfront");
    }
    cout << commands.size() << endl;
    for (const string& cmd : commands) {
        cout << cmd << endl;
    }
    return 0;
}