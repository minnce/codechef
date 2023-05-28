#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n,k,dummy;
    cin >> n >> k;
    if (k==0) {
        cout << n << endl;
    }
    else {
    dummy = n/k;
    cout << (n-(k*dummy)) << endl;
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
