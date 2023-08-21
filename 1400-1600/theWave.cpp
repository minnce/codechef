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
    map<ll,ll>m;
    ll maxi = 0;
    vt<ll> v;
    REP (i,n) {
        ll d;
        cin>>d;
        v.PB(d);
        maxi = max(d,maxi);
    }
    sort(v.begin(),v.end());
    REP (i,n) {
        m[v[i]]=i+1;
    }
    REP (i,k) {
        ll d;
        cin>>d;
        if (m[d]) cout << 0 << endl;
        else if (d>maxi) cout << "POSITIVE\n";
        else {
            auto it = lower_bound(v.begin(),v.end(),d);
            if ((n-m[*it]-1)%2==0) cout << "POSITIVE\n";
            else cout << "NEGATIVE\n";
        }
    }
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
   	ll t;
    	t=1;
    	while (t--)
    	{
        	solve();
    	}
    	return 0;
}
