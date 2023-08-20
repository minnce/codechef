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
    ll n;
    cin >> n;
    ll tot=0;
    vt<pair<ll,ll>> v (pow(n,2)+1);
    for (ll i = 1; i <= n; i++) {
        for (ll j = 1; j <= n; j++) {
            ll d;
            cin >> d;
            v[d]=MP(i,j);
        }
    }
    for (int i = 2; i < v.size(); i++) {
        ll dist = abs(v[i-1].F-v[i].F)+abs(v[i-1].S-v[i].S);
        tot+=dist;
    }
    cout << tot << endl;
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
