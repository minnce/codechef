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
    vector<int> v;
    int currVal = 1;
    char prev = s[0];
    char cur;
    for (int i = 1; i < s.length(); i++) {
        cur = s[i];
        if (cur==prev) {
            currVal++;
        }
        else {
            v.pb(currVal);
            currVal=1;
        }
        if (i==s.length()-1) {
            v.pb(currVal);
        }
        prev = cur;
    }
    int tot = 0;
    for (const auto& elem : v) {
        if (elem<=9) {
            tot+=2;
        }
        else if (elem<=99) {
            tot+=3;
        }
        else if (elem<=999) {
            tot+=4;
        }
        else if (elem<=9999) {
            tot+=5;
        }
        else {
            tot+=6;
        }
    }
    if (tot>=s.length()||s.length()==1) {
        cout << "NO\n";
    }
    else {
        cout << "YES\n";
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
