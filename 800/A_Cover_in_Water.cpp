#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int cnt = 0;
    for(int i=1; i < n-1; i++) {
        if(s[i] == '#') continue;
        cnt++;
        if(s[i-1] == s[i] && s[i] == s[i+1]) {
            cout << 2 << endl;
            return;
        }
    }

    if(s[0] == '.') cnt++;
    if(s[n-1] == '.' && n > 1) cnt++;

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
