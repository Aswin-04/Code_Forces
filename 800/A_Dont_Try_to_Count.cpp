#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    string x, s;
    cin >> x >> s;

    int i=6;
    int cnt = 0;

    while(i--) {
        if(x.find(s) != string::npos) {
            cout << cnt << endl;
            return;
        }
        cnt++;
        x+=x;
    }

    cout << -1 << endl;
}

int main() {

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
    return 0;
}
