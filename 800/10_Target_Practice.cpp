#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n=10;
    vector<vector<char>> v(n, vector<char>(n));

    for(auto &it: v) {
        for(auto &i: it) {
            cin >> i;
        }
    }

    vector<vector<int>> v1 = {
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
        {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
        {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
        {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
        {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
        {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
        {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
        {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    };

    int sum = 0;
    for(int i=0; i < n; i++) {
        for(int j=0; j < n; j++) {
            if(v[i][j] == 'X') {
                sum+=v1[i][j];
            }
        }
    }

    cout << sum << endl;
    return;
}

int main() {

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
    
    return 0;
}
