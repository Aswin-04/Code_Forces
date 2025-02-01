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
  ll a, b;
  cin >> a >> b;

  int cnt1 = 0;
  while(a%2 == 0) {
    a/=2;
    cnt1++;
  }  

  int cnt2 = 0;
  while(b%2 == 0) {
    b/=2;
    cnt2++;
  }

  if(a != b) {
    cout << -1 << nline;
    return;
  }

  ll diff = abs(cnt1-cnt2);
  cout << (diff+2)/3 << nline;
}

void solve1() {
    ll a, b;
    cin >> a >> b;

    if(a == b) {
      cout << 0 << nline;
      return;
    }

    ll val = a;
    int cnt = 0;
    if(a > b) {
      int flag = 0;
      while(val) {
        if(val == b) break;
        if(val < b || val%2 == 1) {
          flag = 1;
          break;
        }
        val/=2;
        cnt++;
      }

      if(val == 0 || flag) cout << -1 << nline;
      else cout << (cnt+2)/3 << nline;
    }

    else {
      int flag = 0;
      while(val <= 1e18) {
        if(val == b) break;
        if(val > b || (val*2) > 1e18) {
          flag = 1;
          break;
        }
        val*=2;
        cnt++;
      }

      if(flag) cout << -1 << nline;
      else cout << (cnt+2)/3 << nline;
    }
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
