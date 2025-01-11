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

int get_upper_bound(int target, vi &v) {
  int n = v.size();
  int low = 0;
  int high = n-1;

  int ans = n;
  while(low <= high) {
    int mid = (low+high)/2;
    if(v[mid] > target) {
      ans = v[mid];
      high = mid-1;
    }
    else low = mid+1;
  }

  return ans;
} 

void solve() {
    int n;
    char c;
    string s;

    cin >> n >> c;
    cin >> s;

    if(c == 'g') {
      cout << 0 << nline;
      return;
    }

    string t = s+s;
    vi greens;
    for(int i=0; i < t.size(); i++) {
      if(t[i] == 'g') greens.pb(i);
    }

    int maxi = 0;
    for(int i=0; i < n; i++) {
      if(s[i] == c) {
        int ub = get_upper_bound(i, greens);
        maxi = max(maxi, ub-i);
      }
    }

    cout << maxi << nline;
    
}

void solve2() {
    int n;
    char c;
    string s;

    cin >> n >> c;
    cin >> s;

    int last = -1;
    int ans = INT_MIN;

    s.append(s);
    for(int i=s.size()-1; i >= 0; i--) {
      if(s[i] == 'g') last = i;
      if(s[i] == c) {
        ans = max(ans, last-i);
      }
    }

    cout << ans << nline;
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("error.txt", "w", stderr);
    #endif

    int t;
    cin >> t;

    while(t--) {
        solve2();
    }
    
    return 0;
}