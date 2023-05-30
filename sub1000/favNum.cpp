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
    int a;
    cin >> a;
    if (a%7==0&&a%2==0) {
        cout << "Alice\n";
    }
    else if (a%9==0&&a%2==1) {
        cout << "Bob\n";
    }
    else {
        cout << "Charlie\n";
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
