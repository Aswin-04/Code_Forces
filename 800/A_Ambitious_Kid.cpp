#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> arr(n);
    int mini = INT_MAX;
    for(auto &i: arr) {
        cin >> i;
        mini = min(mini, abs(i));
    }

    cout << mini << endl;
}

int main() {

    solve();
    return 0;
}
