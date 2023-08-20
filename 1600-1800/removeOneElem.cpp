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
    ll n;
    cin >> n;
    ll arr[n];
    ll arr2[n-1];
    for (int i = 0; i < n; i ++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n-1; i++) {
        cin >> arr2[i];
    }
    sort(arr,arr+n);
    sort(arr2,arr2+n-1);
    if (n==2) {
        if (arr2[0]-arr[n-1]<0) {
            cout << arr2[0]-arr[0] << endl;
        }
        else {
            cout << arr2[0]-arr[1] << endl;
        }
    }
    else {
        if (arr2[n-2]-arr[n-1]==arr2[n-3]-arr[n-2]) {
            if (arr2[n-2]-arr[n-1]==0) {
                cout << 1 << endl;
            }
            else {
                cout << arr2[n-2]-arr[n-1] << endl;
            }
        }
        else{
            if (arr2[n-2]-arr[n-2]==0) {
                cout << 1 << endl;
            }
            else {
                cout << arr2[n-2]-arr[n-2]<< endl;
            }
        }
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
