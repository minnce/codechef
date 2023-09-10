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
    ll n;
    cin>>n;
    vector<ll> v;
    REP (i,n) {
        ll d; cin>>d;
        v.PB(d);
    }
    ll k;
    cin>>k;
    sort(v.begin(),v.end());
    REP (i,k) {
        ll a,b; cin>>a>>b;
        a+=b;
        ll lo = 0, hi = v.size()-1;
        bool f = false;
        while (lo<=hi) {
            ll mid = lo+(hi-lo)/2;
            if (v[mid]==a) {
                f=true;
                break;
            }
            else if (v[mid]>a) {
                hi=mid-1;
            }
            else {
                lo = mid+1;
            }
        }
        if (f) cout << -1 << endl;
        else cout << lo << endl;
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
