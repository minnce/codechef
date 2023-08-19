#pragma GCC optimize("O2,no-stack-protector,unroll-loops,fast-math")
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define PB push_back
#define F first
#define S second
#define uset unordered_set
#define umap unordered_map
#define MP make_pair;
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
    ll n,k;
    cin >> n >> k;
    ll arr[n], arr2[n];
    map<ll,ll> m;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
    }
    for (int i = 0; i < n; i++) {
        if (m[arr[i]]) {
            m[arr[i]]=min(m[arr[i]],arr2[i]+1);
        }
        else {
            m[arr[i]]=arr2[i]+1;
        }
    }
    vt<ll> v;
    for (auto e: m) {
        v.PB(e.S);
    }
    sort(v.begin(),v.end());
    if (v.size()<k) {
        cout << -1 << endl;
    }
    else {
        ll toto = 0;
        for (int i = 0; i < k; i++) {
            toto+=v[i]-1;
        }
        cout << toto << endl;
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
