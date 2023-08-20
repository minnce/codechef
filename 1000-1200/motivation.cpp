#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n,x;
    cin >> n >> x;
    int best = 0;
    for (int i = 0; i < n; i++) {
        int dummy1, dummy2;
        cin >> dummy1 >> dummy2;
        if (dummy1 <= x && dummy2>best) {
            best = dummy2;
        }
    }
    cout << best << endl;
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
