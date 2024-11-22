#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for(auto &it: v) cin >> it;

    if(k==1) {
        if(is_sorted(v.begin(), v.end())) {
            cout << "YES\n";
        }

        else {
            cout << "NO\n";
        }
    } 

    else {
        cout << "YES\n";
    }

}

int main() {

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
    return 0;
}

