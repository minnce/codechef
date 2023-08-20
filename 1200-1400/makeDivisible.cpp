#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin >> n;
    cout << 3;
    for (int i = 1; i < n-1; i++) {
        cout << 0;
    }
    if (n!=1) {
        cout << 3;
    }
    cout << endl;
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
