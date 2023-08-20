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
    int x,y,z;
    cin >> x >> y >> z;
    if (x>=y) {
        cout << "PIZZA\n";
    }
    else if (x>=z) {
        cout << "BURGER\n";
    }
    else {
        cout << "NOTHING\n";
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
