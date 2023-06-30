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
    for (int i = 0; i< n ;i++) {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    int d = arr[0];
    for (int i = 1; i < n;i++) {
        d%=arr[i];
    }
    cout << d << endl;
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
