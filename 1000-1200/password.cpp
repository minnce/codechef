#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    string s;
    cin >> s;
    bool lower = false;
    bool upper = false;
    bool num = false;
    bool spec = false;
    for (int i = 0; i < s.length(); i++) {
        if ((s[i] == '@' || s[i] == '#' || s[i] == '%' || s[i] == '&' || s[i] == '?')&&(i != 0 && i != s.length()-1)) {
            spec = true;
        }
        else if (s[i] >= 97 && s[i] <= 122) {
            lower = true;
        }
        else if ((s[i] >= 65 && s[i] <= 90)&&((i != 0 && i != s.length()-1))) {
            upper = true;
        }
        else if (s[i] >= 48 && s[i] <= 57 && i != 0 && i != s.length()-1) {
            num = true;
        }
    }
    if (lower==true&&upper==true&&num==true&&spec==true&&s.length()>=10) {
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
