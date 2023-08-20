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
    string res = "";
    for (int i = 0; i < n/2; i++) {
        if (s[i]== '1') {
            res = res+"1";
        }
        else {
            res = "0"+res;
        }
        if (s[n-i-1] == '1') {
            res = "1"+res;
        }
        else {
            res = res+"0";
        }
    }
    if (n%2==1) {
        if (s[n/2]=='1') {
            res = res+"1";
        }
        else {
            res = "0"+res;
        }
    }
    cout << res << endl;
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
