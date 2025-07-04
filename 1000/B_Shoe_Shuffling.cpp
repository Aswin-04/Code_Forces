#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define sp " "
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first 
#define ss second 
#define PI 3.141592653589793238462
#define set_bits __builtin_popcount
#define set_bitsll __builtin_popcountll
#define ctz __builtin_ctz
#define ctzll __builtin_ctzll
#define clz __builtin_clz
#define clzll __builtin_clzll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<long, long> pll;
typedef vector<int> vi;
typedef vector<vector<int>> vii;
typedef vector<long long> vll;
typedef map<int, int> mii;
typedef set<int> si;
typedef set<char> sc;

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " "; _print(x); cerr << nline;
#else
#define debug(x)
#endif

void _print(ll x) {cerr << x;}
void _print(int x) {cerr << x;}
void _print(string x) {cerr << x;}
void _print(char x) {cerr << x;}
void _print(ld x) {cerr << x;}
void _print(double x) {cerr << x;}
void _print(ull x) {cerr << x;}

template<class T, class V> void _print(pair<T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}"; }
template<class T> void _print(vector<T> v) {cerr << "["; for (T i: v) {_print(i); cerr << " ";} cerr << "]";}
template<class T> void _print(vector<vector<T>> v) {cerr << "[\n"; cerr << "  "; for(vector<T> i: v) {_print(i);} cerr << nline; cerr << "]";}
template<class T> void _print(set<T> s) {cerr << "["; for (T i: s) {_print(i); cerr << " ";} cerr << "]";}
template<class T> void _print(unordered_set<T> s) {cerr << "["; for (T i: s) {_print(i); cerr << " ";} cerr << "]";}
template<class T, class V> void _print(map<T, V> m) {cerr << "[\n"; cerr << "  "; for(auto i: m) {_print(i);} cerr << nline; cerr << "]";}
template<class T, class V> void _print(unordered_map<T, V> m) {cerr << "[\n"; cerr << "  "; for(auto i: m) {_print(i);} cerr << nline; cerr << "]";}



void solve() {
    int n;
    cin >> n;

    vi arr(n);
    vi p;
    for(auto &i: arr) cin >> i;

    int l = 0;
    int r = 0;

    while(l < n && r < n) {
      while(r < n && arr[l] == arr[r]) {
        r++;
      }

      int cnt = r-l;
      if(cnt <=  1) {
        cout << -1 << nline;
        return;
      }

      int next = r;
      if(cnt%2 == 0) {
        while(r > l) {
          p.pb(r);
          r--;
        }
      }

      else {
        p.pb(r);
        while((l+1) < r) {
          p.pb(l+1);
          l++;
        }
      }

      r = next;
      l = next;
    }

    for(int i: p) cout << i << sp;
    cout << nline;
}

void solve_new() {
    int n;
    cin >> n;

    vi arr(n);
    for(auto &i: arr) cin >> i;

    int start = 1;
    int end = 1;
    int prev = arr[0];
    vector<pii> vp;
    int i=0;
    int flag = 0;
    while(i < n) {
        if(arr[i] == prev) {
            end = i+1;
            i++;
        }

        else {
            if(start == end) flag = 1;
            vp.push_back({start, end});
            start = i+1;
            end = start;
            prev = arr[i];
        }
    }
    
    vp.push_back({start, end});

    if(start == end) flag = 1;
    if(flag) {
        cout << -1 << nline;
        return;
    }
    
    for(auto [start, end]: vp) {
        cout << end << sp;
        for(int i=start; i < end; i++) {
            cout << i << sp;
        }
    }
    cout << nline;
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("error.txt", "w", stderr);
    #endif

    int t;
    cin >> t;

    while(t--) {
        solve_new();
    }
    
    return 0;
}
