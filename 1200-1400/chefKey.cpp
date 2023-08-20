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
    ll n,m,c;
    cin >> n >> m >> c;
    ll tot = 0;
    if (n*m<c) {
        cout << 0 << endl;
    }
    else {
        for (int i = 1; i <= max(n,m); i++) {
            if (c%i==0&&c/i<=min(n,m)) {
                tot++;
            }
        }
        cout << tot << endl;
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
