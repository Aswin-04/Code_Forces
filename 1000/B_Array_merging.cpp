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

  vi arr(n+1);
  vi brr(n+1);
  for(int i=1; i <= n; i++) cin >> arr[i];
  for(int i=1; i <= n; i++) cin >> brr[i];

  vi freq1(2*n+1);
  vi freq2(2*n+1);
  
  int i=1, j=1, cnt=0;
  while(j <= n) {
    if(arr[i] == arr[j]) {
      cnt++;
      j++;
      continue;
    }

    freq1[arr[i]] = max(freq1[arr[i]], cnt);
    i=j;
    j++;
    cnt = 1;
  }

  freq1[arr[i]] = max(freq1[arr[i]], cnt);

  i=1, j=1, cnt=0;
  while(j <= n) {
    if(brr[i] == brr[j]) {
      cnt++;
      j++;
      continue;
    }

    freq2[brr[i]] =  max(freq2[brr[i]], cnt);
    i=j;
    j++;
    cnt = 1;
  }

  freq2[brr[i]] = max(freq2[brr[i]], cnt);

  debug(freq1)
  debug(freq2)

  int max_cnt = 0;
  for(int i=1; i <= 2*n+1; i++) {
    max_cnt = max(max_cnt, freq1[i]+freq2[i]);
  }

  cout << max_cnt << nline;
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
