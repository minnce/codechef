#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#define ll long long
#define pb push_back
#define F first
#define S second
#define vt vector
using namespace std;

void solve()
{
    ll a,b,n;
    cin >> a >> b >> n;
    if (a==b || (a>b&&a%b==0)) {
        cout << -1 << endl;
    }
    else {
        ll d = lcm(a,b);
        ll e = n/d;
        d = d*e;
        while (d<n||d%b==0) {
            d+=a;
        }
        cout << d << endl;
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
