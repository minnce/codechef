#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#define ll long long
using namespace std;

void solve()
{
    int n,k,l;
    int fast = 0;
    int fr;
    cin >> n >> k >> l;
    for (int i = 0; i < n-1; i++) {
        int dummy;
        cin >> dummy;
        fast = max(fast,dummy);
    }
    cin >> fr;
    if (fr > fast) {
        cout << "Yes\n";
    }
    else if ((fr+(k*(l-1))) > fast) {
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
