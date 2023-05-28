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
    int a,b,c;
    cin >> a >> b >> c;
    if (a>=10&&b>=10&&c>=10&&a+b+c>=100) {
        cout << "PASS\n";
    }
    else {
        cout << "FAIL\n";
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
