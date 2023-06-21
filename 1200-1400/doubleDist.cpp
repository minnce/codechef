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
    for (int i =0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    bool flag=false;
    int arr2[n-1];
    for (int i = 1; i < n; i++) {
        arr2[i-1]=arr[i]-arr[i-1];
    }
    for (int i = 1; i < n-1; i++) {
        if (arr2[i]*2!=arr2[i-1]&&arr2[i]/2!=arr2[i-1]) {
            flag = true;
            break;
        }
    }
    if (flag==false) {
        cout << "Yes\n";
    }
    else {
        cout << "No\n";
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
