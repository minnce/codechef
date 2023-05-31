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
    ll n,k,l;
    cin >> n >> k >> l;
    int arr[n] = {0};
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        int dummy, dummy2;
        cin >> dummy >> dummy2;
        if (dummy2==l) {
            arr[i]=dummy;
        }
        else {
            arr[i]=0;
        }
    }
    sort(arr,arr+n);
    for (int i = n-1; i >= 0; i--) {
        if (arr[i]!=0) {
            sum+=arr[i];
            k--;
        }
        if (k==0) {
            break;
        }
    }
    if (k==0) {
    cout << sum << endl;
    }
    else {
        cout << -1 << endl;
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
