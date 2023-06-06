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
    if (s[0]=='1'&&s[1]!='1') {
        s[0]='2';s[1]='2';
    }
    for (int i = 1; i < n-1; i++) {
        if (s[i]=='1') {
            s[i-1]='2';s[i]='2';
            if (s[i+1]!='1') {
                s[i+1]='2';
            }
        }
    }
    if (s[n-1]=='1') {
        s[n-1]='2';s[n-2]='2';
    }
    cout << (s.length()-count(s.begin(),s.end(),'2')) << endl;
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
