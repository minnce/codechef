#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    float u, v, a, s;
    cin >> u >> v >> a >> s;
    float dummy = sqrt((u*u) - (2*a*s));
    if (v < dummy) {
        cout << "NO\n";
    }
    else {
        cout << "YES\n";
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
