#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    for(int i=1; i < n-1; i++) {
        if(s[i] == '.' && s[i-1] == '.' && s[i+1] == '.') {
            cout << 2 << endl;
            return;
        }
    }

    int cnt = 0;
    for(char ch: s) {
        if(ch == '.') cnt++;
    }

    cout << cnt << endl;
}

int main() {

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
    
    return 0;
}
