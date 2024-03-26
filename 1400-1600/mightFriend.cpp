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
    vt<ll> v1,v2;
    ll s1 = 0, s2 = 0;
    REP (i,n) {
        ll d; cin>>d;
        if (i%2) {
            s2+=d;
            v2.PB(d);
        }
        else {
            s1+=d;
            v1.PB(d);
        }
    }
    sort(v1.rbegin(),v1.rend());
    sort(v2.begin(),v2.end());
    ll sz = v2.size();
    k = min(sz,k);
    REP (i,k) {
        if (v1[i]>v2[i]) {
            s1-=v1[i]; s1+=v2[i];
            s2+=v1[i]; s2-=v2[i];
        }
    }
    if (s2>s1) cout << "YES\n";
    else cout << "NO\n";
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
