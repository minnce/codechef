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
    int b1,b2,b3;
    cin >> b1 >> b2 >> b3;
    if (b1+b2+b3<=1) {
        cout << "Water filling time\n";
    }
    else {
        cout << "Not now\n";
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
