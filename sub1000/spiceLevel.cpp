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
    int x;
    cin >> x;
    if (x<4) {
        cout << "MILD\n";
    }
    else if (x < 7) {
        cout << "MEDIUM\n";
    }
    else {
        cout << "HOT\n";
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
