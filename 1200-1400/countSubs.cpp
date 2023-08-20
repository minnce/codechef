#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    ll count = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            count++;
        }
    }
    cout << (((count+1)*(count))/2) << endl;
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
