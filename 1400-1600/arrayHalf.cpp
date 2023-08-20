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
    int arr[2*n];
    vector<int> lesser;
    vector<int> greater;
    for (int i = 0; i < n*2; i++) {
        cin >> arr[i];
        if (arr[i]>n&&i<=n-1) {
            lesser.pb(i);
        }
        else if (arr[i]<=n&&i>=n) {
            greater.pb(i);
        }
    }
    ll tot = 0;
    for (int i = 0; i < lesser.size(); i++) {
        tot+=abs(lesser[i]-greater[i]);
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
