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
#define REP(i, a) for (long long i = 0; i < a; i++)
#define pii pair<int, int>;
#define setprf(x) setprecision(x) << fixed
#define setpr(x) setprecision(x)
#define pll pair<ll, ll>;

using namespace std;

typedef vector<ll> vl;
typedef pair<ll,ll> pl;
typedef long double ld;
typedef complex<ld> cd;

vt<ll> v;

void precomp() {
    REP(i,100009) {
        ll d = i*i;
        bool f = false;
        while (d) {
            ll e = d%10;
            d/=10;
            if (e!=0&&e!=1&&e!=4&&e!=9) {
                f= true;
                break;
            }
        }
        if (!f) v.PB(i*i);
    }
}

void solve()
{
    ll a,b;
    cin>>a>>b;
    ll res = 0;
    for (int i = 0; i < v.size(); i++) {
        if (v[i]>=a&&v[i]<=b) res++;
    }
    cout << res << endl;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	precomp();
   	ll t;
    	cin >> t;
    	while (t--)
    	{
        	solve();
    	}
    	return 0;
}
