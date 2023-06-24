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
    int tot = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i]=='A'||s[i]=='D'||s[i]=='O'||s[i]=='P'||s[i]=='R'||s[i]=='Q') {
            tot+=1;
        }
        else if (s[i]=='B') {
            tot+=2;
        }
    }
    cout << tot << endl;
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
