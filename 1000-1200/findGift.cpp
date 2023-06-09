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
    cin >> n;
    string s;
    cin >> s;
    int x = 0; int y = 0;
    for (int i = 0; i < n; i++) {
        if (s[i]=='L'&&s[i-1]!='L'&&s[i-1]!='R') {
            x-=1;
        }
        else if (s[i]=='R'&&s[i-1]!='R'&&s[i-1]!='L') {
            x+=1;
        }
        else if (s[i]=='U'&&s[i-1]!='U'&&s[i-1]!='D') {
            y+=1;
        }
        else if (s[i]=='D'&&s[i-1]!='D'&&s[i-1]!='U') {
            y-=1;
        }
     }
     cout << x << " " << y << endl;
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
