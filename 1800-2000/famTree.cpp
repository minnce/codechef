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

ll maxi = 0;

void dfs(ll curr, ll b, ll w, auto graph, auto arr) {
    for (auto e:graph[curr]) {
        maxi = max(maxi,b-arr[e]);
        maxi = max(maxi,arr[e]-w);
        dfs(e,max(arr[e],b),min(arr[e],w),graph, arr);
    }
}

void solve()
{
    maxi = 0;
    ll n; cin >> n;
    ll arr[n];
    REP (i,n) {
        cin >> arr[i];
    }
    vt<ll> graph[n];
    ll root = 0;
    REP (i,n) {
        ll d; cin >> d; d--;
        if (d<0) root=i;
        else graph[d].PB(i);
    }
    dfs(root,arr[root],arr[root],graph,arr);   
    cout << maxi  <<endl;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
   	ll t=1;
    	while (t--)
    	{
        	solve();
    	}
    	return 0;
}
