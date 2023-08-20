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
    map<int,int> m;
    ll n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        m[arr[i]]++;
    }
    bool flag = false;
    for (const auto& elem : m) {
        if (elem.second >= 3) {
            flag = true;
            break;
        }
    }
    sort(arr,arr+n);
    if (arr[n-1]==arr[n-2]) {
        flag = true;
    }
    if (flag == true) {
        cout << "NO\n";
    }
    else {
        cout << "YES\n";
        for (int i = 0; i < n; i+=2) {
            cout << arr[i] << " ";
        }
        if (n%2==1) {
            n-=1;
        }
        for (int i = n-1; i >= 0; i-=2) {
            cout << arr[i] << " ";
        }
        cout << endl; 
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
