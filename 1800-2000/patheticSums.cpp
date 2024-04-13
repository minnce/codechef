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

vt<ll> graph[101];
ll res[101];
ll vis[101];

void dfs(ll node, ll currNum) {
    if (vis[node]) return;
    res[node]=currNum;
    vis[node]=1;
    if (currNum==1) currNum=2;
    else currNum=1;
    for (auto e:graph[node]) {
        if (!vis[e]) {
            dfs(e,currNum);
        }
    }
}

void solve()
{
    for (int i = 0; i < 101; i++) {
        graph[i].clear();
        res[i]=0;
        vis[i]=0;
    }
    ll n; cin >>n;
    REP (i,n-1) {
        ll d1,d2; cin>>d1>>d2;
        graph[d1].PB(d2);
        graph[d2].PB(d1);
    }
    dfs(1,1);
    for (int i = 1; i <= n; i++) {
        cout << res[i] << " ";
    }
    cout << endl;
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
