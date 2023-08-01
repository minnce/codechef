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

void solve()
{
    ll n,m,k,l,r;
    cin >> n >> m >> k >> l >> r;
    vector<pair<ll,ll>> v;
    ll best = 1e9;
    REP(i,n) {
        ll d1,d2;
        cin>>d1>>d2;
        if (d1>k) {
            d1=max(d1-m,k);
        }
        else if (d1<k) {
            d1=min(d1+m,k);
        }
        if (d1>=l&&d1<=r) {
            best = min(best,d2);
        }
    }
    if (best==1e9) {
        cout << -1 << endl;
    }
    else {
        cout << best << endl;
    }
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
   	ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
