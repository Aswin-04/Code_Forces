#include<bits/stdc++.h>
using namespace std;

// Optimal Solution

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for(int i=0; i < n; i++) {
            cin >> arr[i];
        } 

        if(k == 1 && !is_sorted(arr.begin(), arr.end())) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
    return 0;
}

// My solution

int halloumi_boxes(vector<int> & arr, int n, int k) {
    
    if(n == 1) return 1;
    if(k == 1) {
        for(int i=0; i < n-1; i++) {
            if(arr[i] > arr[i+1]) {
                return 0;
            }
        }
        return 1;
    }

    for(int i=n-1; i >= 1; i--) {
        int didSwap = 0;
        for(int j=0; j < i; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                didSwap = 1;
            }
        }
        if(didSwap == 0) return 1;
    } 

    return 1;
}

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for(int i=0; i < n; i++) {
            cin >> arr[i];
        } 

        int result = halloumi_boxes(arr, n, k);
        if(result) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}

