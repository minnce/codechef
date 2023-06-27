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
    ll n,m;
    cin >> n >> m;
    int arr[m];
    for (int i = 0; i < m;i++) {
        cin >> arr[i];
    }
    vt<ll> arr2[n];
    for (int i = 0; i < n; i++) {
        int d;
        cin >> d;
        vt<ll> v;
        for (int j = 0; j < d; j++) {
            ll e;
            cin >> e;
            v.PB(e);
        }
        sort(v.begin(),v.end(),greater<ll>());
        arr2[i]=v;
    }
    ll toto = 0;
    for (int i = 0; i < m; i++) {
        if (arr2[arr[i]].size()!=0) {
            toto+=arr2[arr[i]][0];
            arr2[arr[i]].erase(arr2[arr[i]].begin());
        }
    }
    cout << toto << endl;
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
