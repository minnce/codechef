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
    string s;
    cin >> s;
    sort(s.begin(),s.end());
    ll tot = 0;
    for (int i = 1; i < s.length()+1; i++) {
        tot+=((int)s[i-1]-96)*i;
    }
    cout<<tot<<endl;
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
