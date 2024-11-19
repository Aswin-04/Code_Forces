#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> b(n);
    for(auto &i: b) cin >> i;

    vector<int> a;
    a.push_back(b[0]);
    for(int i=1; i < n; i++) {
        if(b[i-1] <= b[i]) a.push_back(b[i]);
        else {
            a.push_back(b[i]);
            a.push_back(b[i]);
        }
    }

    cout << a.size() << endl;
    for(auto i: a) cout << i << " ";
    cout << endl;
}

int main() {

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
    
    return 0;
}
