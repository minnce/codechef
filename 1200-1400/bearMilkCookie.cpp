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
    string arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    if (n==1) {
        if (arr[0]=="cookie") {
            cout << "NO\n";
        }
        else {
            cout << "YES\n";
        }
    }
    else {
        bool flag = false;
        for (int i = 0; i < n-1; i++) {
            if (arr[i]=="cookie"&&arr[i+1]!="milk") {
                flag = true;
                break;
            }
        }
        if (arr[n-1]=="cookie") {
            flag = true;
        }
        if (flag == false) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
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
