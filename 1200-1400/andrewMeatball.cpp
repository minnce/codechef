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
    ll n,a;
    cin >> n>>a;
    ll arr[n];
    for (int i = 0; i < n ;i++) {
        cin >> arr[i];
    }
    sort(arr,arr+n,greater<ll>());
    ll tot =0;
    ll d=0;
    for (int i = 0; i<n; i++) {
        tot+=arr[i];
        if (tot>=a) {
            d=i+1;
            break;
        }
    }
    if (d==0) {
        cout << -1 << endl;
    }
    else
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
