#include<bits/stdc++.h>
using namespace std;

int main(){
    //precedence of datatypes char < int < long int < long long int < float < double
    
    //Postfix () [] -. . ++ -- Left to right
    //Unary + - ! ~ ++ -- (type)* & sizeof Right to Left
    //Multiplicative * / % Left to Right
    //Additive + - Left to Right
    //Shift << >> Left to Right
    //Relational < <= > >= Left to Right
    //Equality == != Left to Right
    //Bitwise AND & Left to Right
    //Bitwise XOR ^ Left to Right
    //Bitwise OR | Left to Right
    //Logical AND && Left to Right
    //Logical OR || Left to Right
    //Conditional ? : Right to Left
    //Assignment = += -= *= /= %= &= ^= |= <<= >>= Right to Left

    /*
    Overflow Limit
    -10^9 < int < 10^9
    -10^12 < long int < 10^12
    -10^18 < long long int < 10^18
    */

    int a = 100000;
    int b = 100000;
    long long int c = a * 1LL * b;
    long d = a * b; // This will cause overflow
    cout << c << endl; // Output: 10000000000

    double a1 = 100000;
    double b1 = 100000;
    double c1 = a1 * b1;
    cout << c1 << endl; // Output: 1e+010
    cout << fixed << setprecision(0) << c1 << endl; // Output: 10000000000
    // double & float datatype has precision error. They donot store exact values.
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*"; 
        }
        cout << endl;
    }

    //string
    int t;
    cin >> t;
    cin.ignore(); // To ignore the newline character after reading t
    while(t--){
        string s;
        getline(cin, s);
        cout << s << endl;
    }

    string str;
    cin >> str;
    string str_rev;
    for(int i = str.size() - 1; i >= 0; --i) {
        str_rev += str[i];
    }
    cout << str_rev << endl;

    //Arrays
    //Matrix Array
    int n, m;
    cin >> n >> m;;
    int a[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout >> a[i][j] >> " ";
        }
        cout << endl;
    }

    /*Github Commands
    git config --global user.name "Your Name"
    git config --global user.email "youremail@example.com"
    git config --list
    git clone <repository_url>
    git status
    git add <file_name>
    git commit -m "Your commit message"
    git push origin main
    git init [to initialize a new repository]
    git remot add origin <repository_url> [to link local repo to remote repo]
    git remote -v [to verify the link]
    git branch [to check current branch]
    git branch -M main [to rename current branch to main]
    git push -u origin main [to use shortcut]
    git checkout <branch_name> [to switch branches]
    git checkout -b <new_branch_name> [to create and switch to a new branch]
    git branch -d <branch_name> [to delete a branch]
    git pull origin main [to pull latest changes from remote]
    git diff [to see changes made]
    git merge <branch_name> [to merge a branch into current branch]
    git reset --hard HEAD~1 [to undo last commit]
    git rest <file_name> [to unstage a file]
    
    */
        

}

    

