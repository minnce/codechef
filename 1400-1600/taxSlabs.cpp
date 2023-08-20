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
    ll n,init;
    cin >> n;
    init = n;
    ll tot = 0;
    if (n>=1500000) {
        int dummy = n-1500000;
        tot+=dummy*.3;
        n-=dummy;
    }
    if (n>=1250000) {
        int dummy = n-1250000;
        tot+=dummy*.25;
        n-=dummy;
    }
    if (n>=1000000) {
        int dummy = n-1000000;
        tot+=dummy*.20;
        n-=dummy;
    }
    if (n>=750000) {
        int dummy = n-750000;
        tot+=dummy*.15;
        n-=dummy;
    }
    if (n>=500000) {
        int dummy = n-500000;
        tot+=dummy*.1;
        n-=dummy;
    }
    if (n>=250000) {
        int dummy = n-250000;
        tot+=dummy*.05;
        n-=dummy;
    }
    cout << (init-tot) << endl;
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
