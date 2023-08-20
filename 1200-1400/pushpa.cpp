#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;
	map<int,int> m;
	int arr[n];
	for (int i = 0; i < n; i++) {
	    cin >> arr[i];
	    m[arr[i]]++;
	}
	int ma = 0;
	for (int i = 0; i < n; i++) {
	    ma = max(ma,(arr[i]+m[arr[i]]-1));
	}
	cout << ma << endl;

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
