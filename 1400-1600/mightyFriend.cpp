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
    ll n,k;
    cin >> n >> k;
    vector<ll> v1, v2;
    for (int i = 0; i < n; i++) {
        ll dummy;
        cin >> dummy;
        if (i%2==0) {
            v1.pb(dummy);
        }
        else {
            v2.pb(dummy);
        }
    }
    sort(v1.begin(),v1.end(), greater<ll>());
    sort(v2.begin(),v2.end());
    if (k>v2.size()) {
        k = v2.size();
    }
    for (int i = 0; i < k; i++) {
        if (v2[i]<v1[i]) {
            swap(v2[i],v1[i]);
        }
    }
    ll tot1 = 0; ll tot2 = 0;
    for (int i = 0; i < v1.size();i++) {
        tot1+=v1[i];
    }
    for (int i = 0; i < v2.size();i++) {
        tot2+=v2[i];
    }
    if (tot2 > tot1) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
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
