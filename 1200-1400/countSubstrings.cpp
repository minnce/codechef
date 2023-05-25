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
    for (int i = 0; i < n; i++) {
        string dummy = "";
        for (int j = i; j < n; j++) {
            dummy+=s[j];
            if ((dummy[0] == '1') && (dummy[dummy.length()-1] == '1')) {
                count++;
            }
        }
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
