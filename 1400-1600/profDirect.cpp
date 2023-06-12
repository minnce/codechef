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
    bool flag = false;
    for (int i = 1; i < n; i++) {
        if (s[i]=='R'&&s[i-1]=='R') {
            flag = true;
            break;
        }
        else if (s[i]=='L'&&s[i-1]=='L') {
            flag=true;
            break;
        }
    }
    if (flag==true) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
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
