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
    string a,b;
    cin >> a >> b;
    int tot = 0;
    tot+=count(a.begin(),a.end(),'1');
    tot+=count(b.begin(),b.end(),'1');
    if (tot>a.length()) {
        tot = (a.length()*2)-tot;
    }
    ll cumu = 0;
    for (int i = 0; i < tot; i++) {
        cout << 1;
    }
    for (int i = 0; i < (a.length()-tot); i++) {
        cout << 0;
    }
    cout << endl;
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
