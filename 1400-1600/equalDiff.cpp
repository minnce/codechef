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
    map<int,int>m;
    for (int i = 0; i < n ; i++) {
        int dummy;
        cin >> dummy;
        m[dummy]++;
    }
    if (n==2) {
        cout << 0 << endl;
    }
    else if (n==3) {
        cout << 1 << endl;
    }
    else {
        ll highest = 0;
        for (const auto& elem : m) {
            if (elem.second > highest) {
                highest = elem.second;
            }
        }
        if (n-highest<n-2||n-2<0) {
            cout << n-highest << endl;
        }
        else {
            cout << n-2 << endl;
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
