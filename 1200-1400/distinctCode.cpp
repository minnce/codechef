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
    set<string> st;
    for (int i = 1; i < s.length(); i++) {
        string str;
        str.pb(s[i-1]);
        str.pb(s[i]);
        st.insert(str);
    }
    cout << (st.size()) << endl;
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
