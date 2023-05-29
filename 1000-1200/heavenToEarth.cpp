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
    double n, v1,v2;
    cin >> n >> v1 >> v2;
    double e = n*v2;
    double s = n*v1*sqrt(2);
    if (e>s) {
        cout << "Elevator\n";
    }
    else {
        cout << "Stairs\n";
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
