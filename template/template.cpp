#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;

#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

using ll = long long;
template <typename T> using V = vector<T>;
template <typename T> using VV = vector<V<T>>;
template <typename T> using VVV = vector<VV<T>>;

#define mp make_pair
#define F first
#define S second
#define eb emplace_back
#define lb lower_bound
#define ub upper_bound
#define all(v) (v).begin(),(v).end()

#define rep(i,n) for(int i=0; i<n; ++i)
#define rrep(i,n) for(int i=n-1; i>=0; --i)
#define repp(i,b,e) for(int i=b; i<e; ++i)
#define rrepp(i,b,e) for(int i=e-1; i>=b; --i)

/*
template <typename T> inline T in() {T x; cin >> x; return x;}
template <typename T> inline T vin(int n) {V<T> v(n); rep(i,n) cin >> v[i]; return v;}
template <typename T> inline T vvin(int m, int n) {VV<T> v(m,V<T>(n)); rep(i,m)rep(j,n) cin >> v[i][j]; return v;}
template <typename T> inline T vvvin(int l, int m, int n) {VVV<T> v(l,VV<T>(m,V<T>(n))); rep(i,l)rep(j,m)rep(k,n) cin >> v[i][j][k]; return v;}
*/

template <typename T> inline void in(T& x) {cin >> x;}
template <typename T> inline void vin(V<T>& v, int n) {rep(i,n) cin >> v[i];}
template <typename T> inline void vvin(VV<T>& v, int m, int n) {rep(i,m)rep(j,n) cin >> v[i][j];}
template <typename T> inline void vvvin(VVV<T>& v, int l, int m, int n) {rep(i,l)rep(j,m)rep(k,n) cin >> v[i][j][k];}

template <typename T> inline void out(const T& x) {cout << x << "\n";}
template <typename T> inline void vout(const V<T>& v, string s = " ")
    {int n = (int)v.size(); rep(i,n) cout << v[i] << (i != n - 1 ? s : "\n");}
template <typename T> inline void vvout(const VV<T>& v, string s = " ")
    {int m = (int)v.size(); rep(i,m) vout(v[i]);}
template <typename T> inline void vvvout(const VVV<T>& v, string s = " ")
    {int l = (int)v.size(); rep(i,l) {cout << i << "\n"; vvout(v[i]);}}

template<typename T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<typename T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

struct Fast {Fast(){std::cin.tie(0); ios::sync_with_stdio(false);}} fast;

int main()
{
    return 0;
}