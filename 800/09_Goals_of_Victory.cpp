#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> v(n-1);
    for(auto &i: v) cin >> i;

    int ans = 0;

    for(int i: v) ans+=i;
    cout << 0-ans << endl;
}

int main() {

    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}
