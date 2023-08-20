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
    map<ll,ll> m;
    for (int i = 0; i < k; i++) {
        int dummy;
        cin >> dummy;
        m[i]=dummy;
    }
    for (int i = 0; i < n; i++) {
        string dummy;
        cin >> dummy;
        ll tot = 0;
        for (int j = 0; j < k; j++) {
            if (dummy[j]=='1') {
                tot+=m[j];
            }
        }
        cout << tot << endl;
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
