#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;

    vector<int> v(n);
    for(auto &it: v) cin >> it;

    int mmax = v[0];
    for(int i=1; i < n; i++) {
        mmax = max(mmax, v[i] - v[i-1]);
    }

    mmax = max(mmax, 2* (x - v[n-1]));
    cout << mmax << '\n';
}

int main() {

    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
