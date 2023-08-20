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
    ll tm,n,sum;
    cin >> tm >> n >> sum;
    ll tot = 0;
    while (sum!=0&&tm!=0) {
        ll dummy = min(n,sum);
        sum-=dummy;
        tot+=pow(dummy,2);
        tm--;
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
