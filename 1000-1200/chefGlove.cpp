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
    int arr2[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
    }
    bool flag1 = false;
    bool flag2 = false;
    for (int i = 0; i < n; i++) {
        if (arr[i]>arr2[i]) {
            flag1 = true;
        }
        if (arr[i]>arr2[n-i-1]) {
            flag2 = true;
        }
    }
    if (flag1==false&&flag2==false) {
        cout << "both\n";
    }
    else if (flag1==false) {
        cout << "front\n";
    }
    else if (flag2==false) {
        cout << "back\n";
    }
    else {
        cout << "none\n";
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
