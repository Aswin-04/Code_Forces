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
typedef vector<vector<int>> vvi;
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
    int n, m;
    cin >> n >> m;

    vvi table(n, vi(m));

    for(int i=0; i < n; i++) {
      for(int j=0; j < m; j++) {
        cin >> table[i][j];
      }
    }

    mii freq;
    for(int i=0; i < n; i++) {
      for(int j=0; j < m; j++) {
        int crnt_cell = table[i][j];
        if(freq.find(crnt_cell) == freq.end()) {
          freq[crnt_cell]++;
        }

        int has_upper_cell = 1;
        int has_left_cell = 1;
        if(i == 0) has_upper_cell = 0;
        if(j == 0) has_left_cell = 0;

        if(has_upper_cell) {
          if(table[i-1][j] == crnt_cell && freq[table[i-1][j]] < 2) {
            freq[table[i-1][j]]++;
          }
        }

        if(has_left_cell) {
          if(table[i][j-1] == crnt_cell && freq[table[i][j-1]] < 2) {
            freq[table[i][j-1]]++;
          }
        }
      }

    }
    
    ll sum = 0;
    for(auto val: freq) {
      sum+=val.second;
    }

    debug(freq)

    if(sum == freq.size()) cout << sum-1 << nline;
    else cout << sum-2 << nline;
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("error.txt", "w", stderr);
    #endif

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
    
    return 0;
}
