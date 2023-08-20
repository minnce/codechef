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
    int n,x;
    cin >> n >> x;
    ll arr[n];
    ll toto= 0;
    ll mini = INT_MAX;
    for (int i = 0; i < n;i++) {
        cin >> arr[i];
        toto+=arr[i];
        mini = min(mini,arr[i]);
    }
    if (toto<x) {
        cout << -1 << endl;
    }
    else if (toto%x==0||(toto-mini)/x==0) {
        cout << toto/x << endl;
    }
    else if (toto/x==(toto-mini)/x) {
        cout << -1 << endl;
    }
    else {
        cout << toto/x << endl;
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
