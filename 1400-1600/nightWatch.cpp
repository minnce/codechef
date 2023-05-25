#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    int count = 0;
    if (s[0] == '0' && s[1] == '0') {
        count++;
        s[0] = '1';
    }
    for (int i = 1; i < n-1; i++) {
        if (s[i]=='0'&&s[i+1]=='0'&&s[i-1]=='0') {
            count++;
            s[i]='1';
        }
    }
    if (s[n-1]=='0'&&s[n-2]=='0') {
        count++;
        s[n-1]='1';
    }
    if (s.length()==1) {
        count = 1;
    }
    cout << count << endl;
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
