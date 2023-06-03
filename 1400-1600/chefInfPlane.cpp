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
    map<int,int> m;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        m[arr[i]]++;
    }
    ll tot = 0;
    for (const auto& elem : m) {
            if (elem.second>=elem.first-1) {
                tot+=elem.first-1;
            }
            else {
                tot+=elem.second;
            }
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
