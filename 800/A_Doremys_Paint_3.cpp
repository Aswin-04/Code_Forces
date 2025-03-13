#include<bits/stdc++.h>
using namespace std;

void solve() {

    int n;
    cin >> n;

    map<int, int> mpp;
    for(int i=1; i <= n; i++) {
        int x;
        cin >> x;
        mpp[x]++;
    }

    if(mpp.size() > 2) cout << "NO" << endl;
    else if(abs(mpp.begin()->second - mpp.rbegin()->second) <= 1) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
    
    return 0;
}
