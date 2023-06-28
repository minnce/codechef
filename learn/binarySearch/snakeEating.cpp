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

int isFeasible(int m, int k, vt<ll>& sums) {
    auto getSum = [&](int i, int j) {
        if (i==0) {
            return sums[j];
        }
        else {
            return sums[j]-sums[i-1];
        }
    };
    ll lo = 0; ll hi = m;
    ll ans = 0;
    while (lo <= hi) {
        ll mid = lo + (hi-lo)/2;
        ll need = (m-mid+1)*k - getSum(mid,m);
        if (need<=mid) {
            ans = m-mid+1;
            hi = mid-1;
        }
        else {
            lo = mid+1;
        }
    }
    return ans;
}

void solve()
{
    ll n,q;
    cin >> n >> q;
    vt<ll> v;
    for (int i = 0; i < n;i ++) {
        ll d;
        cin >> d;
        v.PB(d);
    }
    sort(v.begin(),v.end());
    vt<ll> sums;
    ll tot = 0;
    for (int i = 0; i < n; i++) {
        tot+=v[i];
        sums.PB(tot);
    }
    for (int i = 0; i < q; i++) {
        ll ans = 0;
        ll d; cin >> d;
        ll end = upper_bound(v.begin(),v.end(),d-1)-v.begin();
        ans+=(n-end);
        ans+= isFeasible(end-1,d,sums);
        cout << ans << endl;
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
