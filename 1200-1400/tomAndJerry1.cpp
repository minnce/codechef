#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int a,b,c,d,k;
    cin >> a >> b>> c >> d >> k;
    if ((((abs(a-c)+(abs(b-d)))-k)%2==0)&&((abs(a-c)+abs(b-d))-k<=0)) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
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
