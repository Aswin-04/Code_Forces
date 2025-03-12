#include<bits/stdc++.h>
using namespace std;

void print_yes() {
    cout << "YES" << '\n';
}

void print_no() {
    cout << "NO" << '\n';
}

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for(auto &i: arr) cin >> i;

    if(k == 1) {
        if(is_sorted(arr.begin(), arr.end())) print_yes();
        else print_no();
        return;
    }

    print_yes();
}

int main() {

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
    return 0;
}

