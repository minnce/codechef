#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin >> n;
    map<int,int> m;
    for (int i = 0; i < n; i++) {
        int dummy;
        cin >> dummy;
        m[dummy]++;
    }
    int ma = 0;
    for (const auto& elem: m) {
        ma = max(ma,elem.second);
    }
    cout << n-ma << endl;
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
