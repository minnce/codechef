#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll a=0,b=0;
    while (n%10==0) {
        n/=10;
        a++;
    }
    while (n%2==0) {
        n/=2;
        b++;
    }
    if (n!=1 || b>a) {
        cout << "No\n";
    }
    else {
        cout << "Yes\n";
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
