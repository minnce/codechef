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

ll N = 1000;
vt<ll> gr[1000];
ll vis[1000];
ll color[1000];

void dfs(ll v, ll cl) {
    if (vis[v]) return;
    
    vis[v]=1;
    color[v]=cl;
    
    for (auto e : gr[v]) {
        dfs(e,cl);
    }
}

void solve()
{
    for (int i = 0; i < 1000; i++) {
        gr[i].clear();
        color[i]=0;
        vis[i]=0;
    }
    ll n,m; cin>>n>>m;
    REP (i,m) {
        ll d1,d2; cin>>d1>>d2;
        gr[d1].PB(d2);
        gr[d2].PB(d1);
    }
    ll curr = 0;
    REP (i,N) {
        if (!vis[i]) {
        dfs(i,curr);
        curr++;
        }
    }
    ll q; cin>> q;
    REP (i,q) {
        ll d1,d2;
        cin>>d1>>d2;
        if (color[d1]==color[d2]) cout << "YO\n";
        else cout << "NO\n";
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
