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

vector<vector<ll>> mat;

int dfs(ll i,ll j,vt<vt<ll>>& mat) {
    if (i<0||i>=mat.size()||j<0||j>=mat[0].size()||mat[i][j]==0) {
        return 0;
    }
    mat[i][j]=0;
    return 1+dfs(i+1,j,mat)+dfs(i-1,j,mat)+dfs(i,j+1,mat)+dfs(i,j-1,mat);
}

void solve()
{
    mat.clear();
    ll n,m;
    cin>>n>>m;
    REP(i,n) {
        string s;
        cin>>s;
        vt<ll> v;
        REP (j,m) {
            v.PB((int)s[j]-'0');
        }
        mat.PB(v);
    }
    vt<ll> islands;
    REP (i,n) {
        REP (j,m) {
            if (mat[i][j]==1) {
                islands.PB(dfs(i,j,mat));
            }
        }
    }
    sort(islands.rbegin(),islands.rend());
    ll res = 0;
    for (int i = 1; i < islands.size(); i+=2) {
        res+=islands[i];
    }
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
