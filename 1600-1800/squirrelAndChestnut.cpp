#pragma GCC optimize("O2,no-stack-protector,unroll-loops,fast-math")
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define PB push_back
#define F first
#define S second
#define uset unordered_set
#define umap unordered_map
#define MP make_pair;
#define vt vector
#define all(x) begin(x), end(x)
#define sz(x) (int)x.size()
#define REP(i, a) for (int i = 0; i < a; i++)
#define pii pair<int, int>;
#define pll pair<ll, ll>;

using namespace std;

typedef vector<ll> vl;
typedef pair<ll,ll> pl;

void solve()
{
    ll m,n,k;
    cin >> m >> n >> k;
    ll init[m];
    ll cont[m];
    for (int i = 0; i < m; i++) {
        cin >> init[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> cont[i];
    }
    ll lo = 0;
    ll hi = 1e18;
    ll ans = hi;
    while (lo<=hi) {
        vt<ll> v;
        ll mid = lo+(hi-lo)/2;
        for (int i = 0; i < m; i++) {
            ll d = mid;
            ll curr = 0;
            if (d-init[i]<0) {
                v.PB(0);
                continue;
            }
            else {
                d-=init[i];
                curr++;
            }
            d/=cont[i];
            curr+=d;
            v.PB(curr);
        }
        ll tot = 0;
        sort(v.begin(),v.end(),greater<ll>());
        for (int i = 0; i < min(m,n); i++) {
            tot+=v[i];
            if (tot>=k) {
                break;
            }
        }
        if (tot>=k) {
            ans = mid;
            hi = mid-1;
        }
        else {
            lo = mid+1;
        }
    }
    cout << ans << endl;
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
