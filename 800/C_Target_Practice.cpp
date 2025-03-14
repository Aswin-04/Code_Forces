#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n=10;
    vector<vector<char>> arr(n, vector<char>(n));

    for(auto &row: arr) {
        for(auto &j: row) {
            cin >> j;
        }
    }

    vector<vector<int>> points = {
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

    int ans = 0;
    for(int i=0; i < n; i++) {
        for(int j=0; j < n; j++) {
            if(arr[i][j] == 'X') ans+=points[i][j];
        }
    }

    cout << ans << endl;
}

int main() {

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
    
    return 0;
}
