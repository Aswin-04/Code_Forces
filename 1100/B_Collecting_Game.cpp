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

int get_lower_bound(int low, int high, ll target,  vector<pii>& arr) {

  int res = -1;
  while(low <= high) {
    int mid = low + ((high-low) >> 1);
    if(arr[mid].ff > target) high = mid-1;
    else {
      low = mid+1;
      res = arr[mid].ss;
    }
  }
  return res;
}

void solve() {
  int n;
  cin >> n;

  vector<pii> arr(n);
  for(int i=0; i < n; i++) {
    cin >> arr[i].ff;
    arr[i].ss = i;
  }

  sort(all(arr));

  vll pre_sum(n);
  pre_sum[0] = arr[0].ff;

  for(int i=1; i < n; i++) {
    pre_sum[i] = arr[i].ff + pre_sum[i-1];
  }

  vi res(n);
  res[arr[n-1].ss] = n-1;

  for(int i=n-2; i >= 0; i--) {
    int rv = get_lower_bound(i+1, n-1, pre_sum[i],  arr);
    if(rv != -1) res[arr[i].ss] = res[rv];
    else res[arr[i].ss] = i;
  }

  for(int val: res) cout << val << sp;
  cout << nline;
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
