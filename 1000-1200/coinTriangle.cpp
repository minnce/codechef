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
    ll n;
	cin >> n;
    cout << ((ll)((sqrt(1 + 8*n) - 1)/2)) << endl;
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
