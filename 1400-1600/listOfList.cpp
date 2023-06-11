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
    unordered_map<int,int> m;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        m[arr[i]]++;
    }
    int maxi = 0;
    for (const auto& elem : m) {
        maxi = max(maxi,elem.second);
    }
    if (maxi == n) {
        cout << 0 << endl;
    }
    else if (maxi == 1) {
        cout << -1 << endl;
    }
    else {
        cout << (n-(maxi)+1) << endl;
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
