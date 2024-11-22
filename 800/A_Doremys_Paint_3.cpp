#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> v(n);
    for(auto &it: v) cin >> it;


    if(n == 2) {
        cout << "YES\n";
        return;
    }

    unordered_map<int, int> mp;

    for(int num: v) {
        mp[num]++;
    }

    int cnt_1 = 0;
    int cnt_2 = 0;

    for(auto it: mp) {
        if(it.second == 1) cnt_1++;
        else cnt_2+=it.second;
    }

    cnt_2-=(2*cnt_1);
    if(cnt_2 < 0) cout << "NO\n";
    else if(cnt_2%3 == 0 || cnt_1 == 0) cout << "YES\n";
    else cout << "NO\n";

}

int main() {

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
    
    return 0;
}
