#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    float s,a,b,c;
    cin >> s >> a >> b >> c;
    float dummy = s*(1+(c/100));
    if (dummy >= a && dummy <= b) {
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
