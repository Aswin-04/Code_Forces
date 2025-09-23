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


ll calc_cost(pll strt, pll dest) {
  return 1ll * abs(strt.first - dest.first) + abs(strt.second - dest.second);
}

void solve() {
  int n, k, a, b;
  cin >> n >> k >> a >> b;

  vector<pii> vp(n);
  for(auto &i: vp) {
    cin >> i.first;
    cin >> i.second;
  }

  pll strt = vp[a-1];
  pll dest = vp[b-1];

  if(a <= k && b <= k) {
    cout << 0 << nline;
    return;
  }

  if(k == 0) {
    cout << calc_cost(strt, dest) << nline;
    return;
  }

  int total_cost = INT_MAX;
  pll p1 = *min_element(vp.begin(), vp.begin()+k, [strt](pll p1, pll p2){
    return calc_cost(strt, p1) < calc_cost(strt, p2);
  });
  pll p2 = *min_element(vp.begin(), vp.begin()+k, [dest](pll p1, pll p2) {
    return calc_cost(dest, p1) < calc_cost(dest, p2);
  });

  cout << min(calc_cost(strt, dest), calc_cost(strt, p1) + calc_cost(p2, dest)) << nline;
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
