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
    for (int i = 0; i < n/2; i++) {
        if (s[i]>s[n-i-1]) {
            swap(s[i],s[n-i-1]);
        }
    }
    bool flag = false;
    for (int i = 1; i < n; i++) {
        if (s[i]<s[i-1]) {
            flag = true;
            break;
        }
    }
    if (flag == false) {
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
