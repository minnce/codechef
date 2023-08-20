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
    map<char,int> m;
    cin >> n;
    for (int i = 0; i < n; i++) {
       string s;
       cin >> s;
       for (int j = 0; j < s.length(); j++){ 
           m[s[j]]++;
       }
    }
    int dummy = m['c']/2;
    int dummy2 = m['e']/2;
    dummy = min(dummy,dummy2);
    dummy = min(m['o'],dummy);
    dummy = min(m['d'],dummy);
    dummy = min(m['h'],dummy);
    dummy = min(m['f'],dummy);
    cout << dummy << endl;
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
