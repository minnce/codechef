#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    set<int> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int dummy;
        cin >> dummy;
        s.insert(dummy);
    }
    cout << (s.size()) << endl;
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
