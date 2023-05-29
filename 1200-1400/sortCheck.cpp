#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    int arr[n];
    int arr2[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
    }
    sort(arr,arr+n);
    bool flag = false;
    for (int i = 0; i < n; i++) {
        if (arr[i]!=arr2[i]) {
            flag = true;
            break;
        }
    }
    if (flag == false) {
        cout << "yes\n";
    }
    else {
        cout << "no\n";
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
