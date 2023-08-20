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
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int o = 0;
    int e = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i]%2==1) {
            o++;
        }
        else {
            e++;
        }
    }
    if (o%2==0&&e>=1&&o>=2) {
        cout << "YES\n";
    }
    else if (o>=6&&o%2==0&&e==0) {
        cout << "YES\n";
    }
    else if (o==2) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
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
