#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    bool flag= false;
    for (int i = 1; i < n; i++) {
        if (abs(arr[i]-arr[i-1])>1) {
            flag = true;
            break;
        }
    }
    if (flag==true) {
        cout << "NO\n";
    }
    else {
        cout << "YES\n";
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
