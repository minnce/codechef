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
    ll x, y;
    cin >> x >> y;
    if (gcd(x,y)!=1) {
        cout << 0 << endl;
    }
    else if (x%2==0||y%2==0) {
        cout << 1 << endl;
    }
    else {
        ll maxi = max(x,y);
        ll mini = min(x,y);
        if (gcd(maxi+1,mini)!=1||gcd(mini+1,maxi)!=1) {
            cout << 1 << endl;
        }
        else {
            cout << 2 << endl;
        }
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
