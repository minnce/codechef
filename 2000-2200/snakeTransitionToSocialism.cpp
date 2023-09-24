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

map<pair<ll,ll>,ll> mp;

vector<ll> x = {-1,0,-1,-1,0,1,1,1};
vector<ll> y = {-1,-1,0,1,1,1,0,-1};

int BFS(ll n,ll m,vector<vector<ll>>&) {
    queue<pair<ll,ll>> s;
    for (auto e:mp) {
        s.push({e.F.F,e.F.S});
    }
    ll res = 0;
    while (!s.empty()) {
        ll sz = s.size();
        REP (i,sz) {
            auto d = s.front();
            s.pop();
            REP (j,x.size()) {
                if (d.F+x[j]>=0&&d.F+x[j]<n&&d.S+y[j]>=0&&d.S+y[j]<m&&!mp[{d.F+x[j],d.S+y[j]}]) {
                    mp[{d.F+x[j],d.S+y[j]}]=1;
                    s.push({d.F+x[j],d.S+y[j]});
                }
            }
        }
        res++;
    }
    return res;
}

void solve()
{
    ll n,m,maxi=0;
    mp.clear();
    cin>>n>>m;
    vector<vector<ll>> v;
    REP (i,n) {
        vector<ll> v2;
        REP (j,m) {
            ll d;
            cin>>d;
            v2.PB(d);
            if (d>maxi) {
                maxi=d;
                mp.clear();
                mp[{i,j}]=1;
            }
            else if (d==maxi) {
                mp[{i,j}]=1;
            }
        }
        v.PB(v2);
    }
    if (mp.size()==n*m) cout << 0 << endl;
    else cout << BFS(n,m,v)-1 << endl;
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
