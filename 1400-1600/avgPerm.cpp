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
    int n;
    cin >> n;
    if (n==3) {
        cout << "3 2 1\n";
    }
    else if (n==4) {
        cout << n << " ";
        for (int i = 1; i < n-1; i++) {
            cout << i << " ";
        }
        cout << n-1 << endl;
    }
    else {
        cout << n << " " << n-3 << " ";
        for (int i = 1; i < n-3; i++) {
            cout << i << " ";
        }
        cout << n-2 << " " << n-1 << endl;
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
