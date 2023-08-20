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
    int x,y;
    cin >> x >> y;
    if (x>y) {
        cout << "SECOND\n";
    }
    else if (x<y) {
        cout << "FIRST\n";
    }
    else {
        cout << "ANY\n";
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
