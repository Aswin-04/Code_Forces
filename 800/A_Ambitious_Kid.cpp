#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> v(n);
    for(auto &i: v) cin >> i;

    int mini = INT_MAX;
    for(auto i: v) {
        if(mini == 0) break;
        mini = min(mini, abs(i));
    }

    cout << mini << endl;
}

int main() {

    solve();
    return 0;
}
