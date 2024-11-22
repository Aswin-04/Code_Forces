#include<bits/stdc++.h>
using namespace std;

void solve() {
    int  n, k;
    cin >> n >> k;
    
    vector<int> v(n);
    for(auto &it: v) cin >> it;

    if(find(v.begin(), v.end(), k) != v.end()) {
        cout << "YES\n";
    }

    else cout << "NO\n";
}

int main() {

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
    
    return 0;
}
