#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n,m,k;
    cin >> n >> m >> k;
    int consec = 0;
    int tot=0;
    bool past = false;
    for (int i = 0; i < n; i++) {
        int dummy; cin >> dummy;
        if (dummy == 1) {
            consec++;
        }
        if (i+1==m&&consec==m) {
            tot+=k;
        }
        if (dummy == 0) {
            consec = 0;
        }
    }
    if (consec==n) {
        cout << 100 << endl;
    }
    else {
        cout << tot << endl;
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
