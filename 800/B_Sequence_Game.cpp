#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> arr(n);
    vector<int> ans;
    for(auto &i: arr) cin >> i;
    
    ans.push_back(arr[0]);
    for(int i=1; i < n; i++) {
        if(arr[i-1] > arr[i]) {
            ans.push_back(arr[i]);
        }
        ans.push_back(arr[i]);
    }

    cout << ans.size() << endl;
    for(auto &i: ans) {
        cout << i << ' ';
    }
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
