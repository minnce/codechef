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
    ll n,m,k;
    cin >> n >> m >> k;
    if (n==1&&m==1||(n==1&&m==2)||(n==2&&m==1)) {
        cout << 0 << endl;
    }
    else if (n==1||m==1) {
        cout << k << endl;
    }
    else {
        cout << max((ll)1,(k+1)/2) << endl;
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
