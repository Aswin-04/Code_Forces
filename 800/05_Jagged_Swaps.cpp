#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> v(n);
    for(auto &it: v) cin >> it;

    for(int i=1; i < n; i++) {
        if(v[i] < v[0]) {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

int main() {

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
    
    return 0;
}
