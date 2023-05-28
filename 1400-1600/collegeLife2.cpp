#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int s;
    cin >> s;
    int intro[s];
    ll tot = 0;
    for (int i = 0; i < s; i++) {
        cin >> intro[i];
    }
    for (int i = 0; i < s; i++) {
        int dummy;
        cin >> dummy;
        for (int j = 0; j < dummy; j++) {
            int dummy2;
            cin >> dummy2;
            tot+=dummy2-intro[i];
        }
        tot+=intro[i];
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
