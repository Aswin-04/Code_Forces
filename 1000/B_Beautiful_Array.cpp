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

void not_possible() {
  cout << -1 << nline;
}

void solve() {
    ll n, K, B, S;
    cin >> n >> K >> B >> S;

    ll beauty = K*B;

    if(S < beauty) {
      not_possible();
      return;
    }

    S-=beauty;
    if(S > 0) {
      if(S <= K-1) {
        beauty+=S;
        S = 0;
      }

      else {
        beauty+=(K-1);
        S-=(K-1);
      }
    }

    if(S > 0 && K == 1) {
      not_possible();
      return;
    }

    ll cnt = 1;
    vll ans(n);
    ans[0] = beauty;

    while(cnt < n) {
      if(S >= K) {
        ans[cnt] = K-1;
        S-=(K-1);
      }

      else {
        ans[cnt] = S;
        S=0;
        break;
      }

      cnt++;
    }

    if(S > 0) {
      not_possible();
      return;
    }

    for(ll i: ans) {
      cout << i << sp;
    }
    cout << nline;
}

void solve2() {
  ll n, K, B, S;
  cin >> n >> K >> B >> S;

  vll ans(n);
  ans[0] = K*B;
  S-=(K*B);

  if(S < 0) {
    not_possible();
    return;
  }

  for(int i=0; i < n; i++) {
    ll now = min(K-1, S);
    ans[i]+=now;
    S-=now;
  }

  if(S > 0) {
    not_possible();
    return;
  }

  for(ll i: ans) cout << i << sp;
  cout << nline;
}




void solve3() {
  ll n, k, b, s;
  cin >> n >> k >> b >> s;

  if(k * b > s) {
    cout << -1 << nline;
    return;
  }

  vll ans(n);
  ans[0] = k*b;
  ll rem = s-(k*b);

  for(int i=0; i < n; i++) {
    ans[i]+=min(k-1, rem);
    rem-=min(k-1, rem);
  }

  if(rem) {
    cout << - 1 << nline;
    return;
  }

  for(int i=0; i < n; i++) {
    cout << ans[i] << sp;
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
        solve3();
    }
    
    return 0;
}
