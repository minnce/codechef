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
    int o = 0;
    int m = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i]==1) {
            o = i;
        }
        else if (arr[i]==n) {
            m = i;
        }
    }
    if (m<o) {
        cout << (n-m+abs(0-o)-2) << endl;
    }
    else {
        cout << (abs(0-o)+n-m-1) << endl;
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
