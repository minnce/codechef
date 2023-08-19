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

vt<ll> precomp(1000,2);

void pre() {
    for (int i = 2; i<1000; i++) {
        precomp[i]=precomp[i-1]*(2+(i-1)/10);
    }
}


void solve()
{
    ll n,d;
    cin >> n >> d;
    d = min(d,(ll)48);
    if (d==0) cout << 1 << endl;
    else cout << min(n,precomp[d]) << endl;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
   	ll t;
   	pre();
    	cin >> t;
    	while (t--)
    	{
        	solve();
    	}
    	return 0;
}
