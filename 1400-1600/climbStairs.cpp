#pragma GCC optimize("O2,no-stack-protector,unroll-loops,fast-math")
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define PB push_back
#define F first
#define S second
#define uset unordered_set
#define umap unordered_map
#define MP make_pair
#define vt vector
#define all(x) begin(x), end(x)
#define sz(x) (int)x.size()
#define REP(i, a) for (int i = 0; i < a; i++)
#define pii pair<int, int>;
#define pll pair<ll, ll>;

using namespace std;

typedef vector<ll> vl;
typedef pair<ll,ll> pl;

ll N = 1000001;
ll MOD = 1000000007;
vt<ll> ans (N);

void fib() {
    ans[0]=1;
    ans[1]=1;
    for (ll i = 2; i <= N ;i++) {
        ans[i]=(ans[i-1]+ans[i-2])%MOD;
    }
}

void solve()
{
    ll n,g;
    cin >> n >> g;
    if (__builtin_popcount(ans[n])==g) {
        cout << "CORRECT\n";
    }
    else {
        cout << "INCORRECT\n";
    }
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	fib();
   	ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
