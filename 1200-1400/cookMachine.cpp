#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int a,b;
    cin >> a >> b;
    int tot = 0;
    while (b%a!=0) {
        a/=2;
        tot++;
    }
    while (b!=a) {
        a*=2;
        tot++;
    }
    cout << tot << endl;
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
