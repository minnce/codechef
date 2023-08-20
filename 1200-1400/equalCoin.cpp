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
    int x,y;
    cin >> x >> y;
    if (x%2==0&&y%2==0) {
        cout << "YES\n";
    }
    else if (x==0 && y==1) {
        cout << "NO\n";
    }
    else if (x%2!=0) {
        cout << "NO\n";
    }
    else if (x%2==0&&y%2!=0&&x>0) {
        cout << "YES\n";
    }
    else {
        y-=(x/2);
        if (y%2!=0) {
            cout << "NO\n";
        }
        else {
            cout << "YES\n";
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
