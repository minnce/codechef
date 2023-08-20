#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    set<int> x;
    set<int> y;
    for (int i = 0; i < n; i++) {
        int dx, dy;
        cin >> dx >> dy;
        x.insert(dx);
        y.insert(dy);
    }
    cout << (x.size()+y.size()) << endl;
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
