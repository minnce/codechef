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
    int n,n1;
    cin >> n >> n1;
    ll tot = 0;
    for (int i = n; i <= n1; i++) {
        string l = to_string(i);
        string lr = l;
        reverse(lr.begin(),lr.end());
        if (lr==l) {
            tot += i;
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
