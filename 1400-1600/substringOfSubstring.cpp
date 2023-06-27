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
    ll curr = 0;
    ll longest = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i]!=s[0]&&s[i]!=s[s.size()-1]) {
            curr++;
        }
        else {
            curr = 0;
        }
        longest = max(curr,longest);
    }
    if (longest==0) {
        cout << -1 << endl;
    }
    else {
        cout << longest << endl;
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
