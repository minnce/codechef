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
    vector<char> v;
    vector<char> v1;
    for (int i = 0; i < s.length(); i++) {
        v.pb(s[i]);
    }
    for (int i = 0; i < s1.length(); i++) {
        v1.pb(s1[i]);
    }
    bool flag = false;
    for (const auto& elem: v) {
        if ((find(v1.begin(),v1.end(),elem))!=v1.end()) {
            flag = true;
            break;
        }
    }
    if (flag == false) {
        cout << "No\n";
    }
    else {
        cout << "Yes\n";
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
