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

vt<ll> graph[6];
map<pair<ll,ll>, ll> m;

void init() {
    graph[1].PB(2);
    graph[1].PB(1);
    graph[2].PB(2);
    graph[2].PB(3);
    graph[3].PB(2);
    graph[3].PB(4);
    graph[4].PB(2);
    graph[4].PB(5);
    graph[5].PB(2);
    graph[5].PB(1);
    m[MP(1,2)]=1;
    m[MP(1,1)]=0;
    m[MP(2,2)]=1;
    m[MP(2,3)]=0;
    m[MP(3,2)]=1;
    m[MP(3,4)]=0;
    m[MP(4,2)]=1;
    m[MP(4,5)]=0;
    m[MP(5,2)]=1;
    m[MP(5,1)]=0;
}

bool dfs(int pos, string s, int currNode) {
    if (pos==s.size()&&currNode==5) return true;
    else {
        for (auto e:graph[currNode]) {
            ll val = (ll)m[MP(currNode,e)];
            ll nextPos = s[pos]-'0';
            if (val==nextPos) {
                if (dfs(pos+1, s, e)) return true;
            }
        }
        return false;
    }
}

void solve()
{
    string s; cin>>s;
    bool f =dfs(0,s,1);
    if (f) cout << "YES\n";
    else cout << "NO\n";
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	init();
   	ll t;
    	cin >> t;
    	while (t--)
    	{
        	solve();
    	}
    	return 0;
}
