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
    int lc = 0;
    int rc = count(s.begin(),s.end(),')');
    int l[n];
    int r[n];
    for (int i = 0 ; i < n ;i++) {
        if (s[i]=='(') {
            lc++;
        }
        else {
            rc--;
        }
        l[i]=lc;
        r[i]=rc;
    }
    int mi[n];
    for (int i = 0; i < n; i++) {
        mi[i] = min(l[i],r[i])*2;
    }
    int maxi = 0;
    for (int i = 0; i < n ;i++) {
        maxi = max(maxi,mi[i]);
    }
    cout << (n-maxi) << endl;
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
