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
    ll n,a,b,k;
    cin >> n >> a >> b >> k;
    ll aa = n/a;
    ll bb = n/b;
    ll cc = (n/(lcm(a,b)));
    if (aa+bb-cc*2>=k) {
        cout << "Win\n";
    }
    else {
        cout << "Lose\n";
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
