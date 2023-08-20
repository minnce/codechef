#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int a,b,p,q;
    cin >> a >> b >> p >> q;
    if (a==p&&b==q) {
        cout << 0 << endl;
    }
    else if ((a+b)%2==0&&(p+q)%2==0) {
        cout << 2 << endl;
    }
    else if ((a+b)%2==1&&(p+q)%2==1) {
        cout << 2 << endl;
    }
    else {
        cout << 1 << endl;
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
