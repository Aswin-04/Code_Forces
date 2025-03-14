#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    long long sum=0;
    vector<int> arr(n-1);
    for(auto &i: arr) {
        cin >> i;
        sum+=i;
    }

    cout << -1*sum << endl;
}

int main() {

    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}
