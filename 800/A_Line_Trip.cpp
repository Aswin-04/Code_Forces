#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;

    vector<int> arr(n);
    for(auto &it: arr) cin >> it;

    int mmax = arr[0];
    for(int i=1; i < n; i++) {
        mmax = max(mmax, arr[i]-arr[i-1]);
    }

    mmax = max(mmax, 2*(x-arr[n-1]));
    cout << mmax << endl;
}

int main() {

    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
