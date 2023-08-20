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
    int k,q;
    cin >> k >> q;
    vt<ll> sat;
    vt<ll> mot;
    vt<ll> v;
    for (int i = 0; i < k; i++) {
        ll dummy;
        cin >> dummy;
        mot.pb(dummy);
    }
    for (int i = 0; i < k; i++) {
        ll dummy;
        cin >> dummy;
        sat.pb(dummy);
    }
    sort(mot.begin(),mot.end());
    sort(sat.begin(),sat.end());
    for (int i = 0; i < min(k,1000); i++) {
        for (int j = 0; j < min(k,1000); j++) {
            v.pb(mot[i]+sat[j]);
        }
    }
    sort(v.begin(),v.end());
    for (int i = 0; i < q; i++) {
        ll dummy;
        cin >> dummy;
        cout << v[dummy-1] << endl;
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
