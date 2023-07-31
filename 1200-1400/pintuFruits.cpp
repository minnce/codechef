#pragma GCC optimize("O2,no-stack-protector,unroll-loops,fast-math")
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define db double
#define MOD 1000000007
#define PB push_back
#define F first
#define S second
#define uset unordered_set
#define umap unordered_map
#define pq priority_queue
#define MP make_pair
#define vt vector
#define ins insert
#define __int128 int128
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define sz(x) (int)x.size()
#define REP(i, a) for (int i = 0; i < a; i++)
#define pii pair<int, int>;
#define setprf(x) setprecision(x) << fixed
#define setpr(x) setprecision(x)
#define pll pair<ll, ll>;

using namespace std;

typedef vector<ll> vl;
typedef pair<ll,ll> pl;
typedef long double ld;
typedef complex<ld> cd;

void solve()
{
    ll a,b;
    cin >> a >> b;
    ll arr[a], arr2[a];
    map<ll,pair<bool,ll>> m;
    for (int i = 0; i < b; i++) {
        m[i+1]=MP(false,1);
    }
    for (int i = 0; i < a; i ++) {
        cin >> arr[i];
    }
    for (int i = 0; i < a; i ++) {
        cin >> arr2[i];
        m[arr[i]]=MP(true,m[arr[i]].S+arr2[i]);
    }
    ll mini = INT_MAX;
    for (auto e: m) {
        if (e.S.F==true) {
            mini = min(mini,e.S.S-1);    
        }
    }
    cout << mini << endl;
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
