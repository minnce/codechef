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
	int arr[n];
	for (int i = 0; i < n; i++) {
	    cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {
	    if (arr[i]==1) {
	        cout << 0 << " ";
	    }
	    else {
	        cout << 1 << " ";
	    }
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
