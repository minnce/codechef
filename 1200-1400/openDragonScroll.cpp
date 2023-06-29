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
    int a,b;
    cin >> n >> a >> b;
    ll totC = 0;
    for (int i = 0; i < n; i++) {
        if ((a&(1<<i))!=0) {
            totC++;
        }
        if ((b&(1<<i))!=0) {
            totC++;
        }
    }
    if (totC>n) {
        totC=n-(totC-n);
    }
    ll tot = 0;
    for (int i = 0; i < totC; i++) {
        tot+=pow(2,(n-1-i));
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
