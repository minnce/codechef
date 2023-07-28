#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define F first
#define S second
#define vt vector
#define INS insert
using namespace std;

void solve()
{
    int n,x;
    cin >> n >> x;
    ll dummy = n*x;
    if (dummy>=10000&&dummy<100000) {
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
