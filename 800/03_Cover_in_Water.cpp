#include<bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int cnt = 0;
        bool doesBreak = false;

        for(int i=1; i < n-1; i++) {
            if(s[i] == '#') continue;
            else{
                if(s[i-1] == '.' && s[i+1] == '.') {
                    cnt+=2;
                    doesBreak = true;
                    break;
                }
            }
        }

        if(!doesBreak) {
            cnt = 0;
            for(int i=0; i < n; i++) {
                if(s[i] == '.') cnt+=1;
            }
        }

        cout << cnt << endl;
    }
    
    return 0;
}
