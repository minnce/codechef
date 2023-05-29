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
    int n;
    string s;
    cin >> n >> s;
    int tot = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i]==s[i+1]) {
            tot++;
            i++;
        }
        else {
            tot++;
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
