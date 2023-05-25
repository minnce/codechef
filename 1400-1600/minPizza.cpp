#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#define ll long long
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll dummy = lcm(n,k);
    cout << dummy/k << endl;
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
