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
    int n, y;
    cin >> n >> y;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int dummy = arr[0];
    for (int i = 1; i < n; i++) {
        dummy = dummy|arr[i];
    }
    int dummy2 = y-dummy;
    if ((dummy2^dummy)==y) {
        cout << dummy2 << endl;
    }
    else {
        cout << -1 << endl;
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
