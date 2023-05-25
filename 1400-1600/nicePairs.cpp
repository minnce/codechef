#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#include <cmath>
using namespace std;

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    int tot = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < i+9&&j<n; j++) {
            if ((j-i) == abs(s[j]-s[i])) {
                tot++;
            }
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
