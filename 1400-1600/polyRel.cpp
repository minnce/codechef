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
    int arr[n]; int arr2[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i] >> arr2[i];
    }
    ll tot = 0;
    while (n>=3) {
        tot+=n;
        n/=2;
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
