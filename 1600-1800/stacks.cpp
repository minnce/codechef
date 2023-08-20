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
    vt<int> v;
    for (int i = 0; i < n; i++) {
        int d = arr[i];
        auto it = upper_bound(v.begin(),v.end(),d);
        if (it!=v.end()) {
            *it = d;
        }
        else {
            v.pb(d);
        }
    }
    cout << v.size() << " ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
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
