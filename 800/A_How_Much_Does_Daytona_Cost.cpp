#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    int flag = 0;
    for(auto &i: arr) {
        cin >> i;
        if(i == k) flag = 1;
    }

    if(flag) cout << "YES" << endl;
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
