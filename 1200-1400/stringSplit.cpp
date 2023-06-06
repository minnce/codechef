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
    bool flag= false;
    for (int i = 0; i < n-1; i++) {a
        if (s[i]==s[n-1]) {
            flag = true;
            break;
        }
    }
    if (flag == true) {
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
