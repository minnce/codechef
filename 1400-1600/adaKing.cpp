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

map<pair<ll,ll>,ll> m;

void bfs(ll r,ll c, ll k) {
    m[{r,c}]=1;
    queue<pair<pair<ll,ll>,int>> q;
    q.push({{r,c},k});
    while (!q.empty()) {
        auto it = q.front();
        q.pop();
        ll rem = it.S;
        if (rem!=0) {
            rem--;
            auto x = it.F.F;
            auto y = it.F.S;
            if (x-1>0) {
                if (!m[{x-1,y}]) {
                    q.push({{x-1,y},rem});
                    m[{x-1,y}]=1;
                }
                if (y-1>0&&!m[{x-1,y-1}]) {
                    q.push({{x-1,y-1},rem});
                    m[{x-1,y-1}]=1;
                }
                if (y+1<=8&&!m[{x-1,y+1}]) {
                    q.push({{x-1,y+1},rem});
                    m[{x-1,y+1}]=1;
                }
            }
            if (y-1>0) {
                if (!m[{x,y-1}]) {
                    q.push({{x,y-1},rem});
                    m[{x,y-1}]=1;
                }
                if (x+1<=8) {
                    q.push({{x+1,y-1},rem});
                    m[{x+1,y-1}]=1;
                }
            }
            if (x+1<=8) {
                if (!m[{x+1,y}]) {
                    q.push({{x+1,y},rem});
                    m[{x+1,y}]=1;
                }
                if (y+1<=8&&!m[{x+1,y+1}]) {
                    q.push({{x+1,y+1},rem});
                    m[{x+1,y+1}]=1;
                }
            }
            if (y+1<=8&&!m[{x,y+1}]) {
                q.push({{x,y+1},rem});
                m[{x,y+1}]=1;
            }
        }
    }
}

void solve()
{
    ll r,c,k;
    cin>>r>>c>>k;
    m.clear();
    bfs(r,c,k);
    cout << m.size() << endl;
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
