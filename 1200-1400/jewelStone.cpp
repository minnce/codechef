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
    string s, s1;
    cin >> s >> s1;
    int tot = 0;
    for (int i = 0; i < s1.length(); i++) {
        if (find(s.begin(),s.end(),s1[i])!=s.end()) {
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
