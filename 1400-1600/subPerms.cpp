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
    int n,k;
    cin >> n >> k;
    if (n==1&&k==1) {
        cout << 1 << endl;
    }
    else if (n==1||k==1) {
        cout << -1 << endl;
    }
    else {
        for (int i = k-1; i > 0; i--) {
            cout << i << " ";
        }
        for (int i = n; i >=k; i--) {
            cout << i << " ";
        }
        cout << endl;
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
