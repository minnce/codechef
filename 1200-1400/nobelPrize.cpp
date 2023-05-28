#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    set<int> s;
    for (int i = 0; i < n; i++) {
        int dummy;
        cin >> dummy;
        s.insert(dummy);
    }
    if (s.size()<m) {
        cout << "Yes\n";
    }
    else {
        cout << "No\n";
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
