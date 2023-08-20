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
    int n; string s;
    cin >> n >> s;
    ll cnt = 0;
    for (int i = 1; i < s.length(); i++) {
        if (s[i]=='0'&&s[i-1]=='1') {
            cnt++;
        }
    }
    cout << cnt+1 << endl;
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
