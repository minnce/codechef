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
    ll n,k;
    cin>>n>>k;
    unordered_map<ll,ll> m;
    vt<vt<ll>> v;
    REP (i,n) {
        ll d;
        cin>>d;
        vt<ll> te;
        REP (j,d) {
            ll p;
            cin>>p;
            m[p]++;
            te.PB(p);
        }
        v.PB(te);
    }
    bool f = false;
    if (m.size()<k) cout << "sad\n";
    else {
        REP (i,n) {
            ll d = v[i].size();
            bool f2 = true;
            REP (j,d) {
                if (m[v[i][j]]==1) {
                    f2=false;
                    break;
                }
            }
            if (f2) {
                f=true;
                break;
            }
        }
        if (f) cout << "some\n";
        else cout << "all\n";
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
