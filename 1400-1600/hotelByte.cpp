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
    int arr2[n];
    map<int,ll> m;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n ;i++) {
        cin >> arr2[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = arr[i]; j < arr2[i]; j++) {
            m[j]++;
        }
    }
    ll maxi = 0;
    for (const auto& elem : m) {
        maxi = max(maxi,elem.second);
    }
    cout << maxi << endl;
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
