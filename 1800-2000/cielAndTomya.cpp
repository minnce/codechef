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

vt<pair<ll,ll>> graph[11];
ll vis[11];
vt<ll> lens;

void dfs(ll currNode, ll endNode, ll currLen) {
    if (vis[currNode]) return;
    if (currNode==endNode) {
        lens.PB(currLen);
        return;
    }
    vis[currNode]=1;
    for (auto e:graph[currNode]) {
        dfs(e.F, endNode, currLen+e.S);
    }
    vis[currNode]=0;
}

void solve()
{   
    lens.clear();
    for (int i = 0; i <= 10; i++) {
        graph[i].clear();
        vis[i]=0;
    }
    ll n,m; cin>>n>>m;
    REP (i,m) {
        ll x,y,dep; cin>>x>>y>>dep;
        graph[x].PB(MP(y,dep));
        graph[y].PB(MP(x,dep));
    }
    dfs(1,n,0);
    ll sm = 1000000;
    ll res = 0;
    REP (i,lens.size()) {
        //cout << lens[i] << " ";
        if (lens[i]<sm) {
            sm=lens[i];
            res=1;
        }
        else if (lens[i]==sm) res++;
    }
    //cout << "smallest is: " << sm << endl;
    cout << res << endl;
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
