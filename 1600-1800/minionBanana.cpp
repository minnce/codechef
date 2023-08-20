#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define F first
#define S second
#define vt vector
using namespace std;

void solve()
{
    int n,h;
    cin >> n >> h;
    vt<ll> v;
    ll ma = 0;
    for (int i = 0; i<n ;i++) {
        ll d;
        cin >> d;
        v.pb(d);
        ma = max(ma,d);
    }
    ll hi = ma;
    ll lo = 1;
    ll ans = hi;
    while (lo<=hi) {
        ll tot = 0;
        ll mid = lo+(hi-lo)/2;
        for (int j = 0; j < v.size();j++) {
            tot+=(v[j]+mid-1)/mid;
        }
        if (tot>h) {
            lo=mid+1;
        }
        else {
            ans = mid;
            hi = mid-1;
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
