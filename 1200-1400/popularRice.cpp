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
    map<string,string> m;
    for (int i = 0; i < n; i++) {
        string dummy,dummy2;
        cin >> dummy >> dummy2;
        m[dummy]=dummy2;
    }
    int tot = 0;
    for (const auto& elem : m) {
        if (elem.second=="+") {
            tot++;
        }
        else {
            tot--;
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
