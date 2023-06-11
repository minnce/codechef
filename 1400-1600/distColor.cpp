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
    ll mod = 1e9+7;
    int n,k;
    cin >> n >> k;
    ll tot = 1;
    for (int i = 0; i < n; i++) {
        if (k==0) {
            break;
        }
        else {
            tot=(k*tot)%mod;
            k--;
        }
    }
    cout << tot << endl;
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
