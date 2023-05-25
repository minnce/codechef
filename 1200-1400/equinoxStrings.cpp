#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n,a,b;
    cin >> n >> a >> b;
    int s = 0, an =0;
    for (int i = 0; i < n; i++) {
        string dummy;
        cin >> dummy;
        char dummy2 = dummy[0];
        if (dummy2 == 'E' || dummy2 == 'Q' || dummy2 == 'U' || dummy2 == 'I' || dummy2 == 'N' || dummy2 == 'O' || dummy2 == 'X') {
            s+=a;
        }
        else {
            an+=b;
        }
    }
    if (s > an) {
        cout << "SARTHAK\n";
    }
    else if (an > s) {
        cout << "ANURADHA\n";
    }
    else {
        cout << "DRAW\n";
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
