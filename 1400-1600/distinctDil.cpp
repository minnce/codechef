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
    ll sum = 0;
    for (int i =0; i<n;i ++) {
        int d;
        cin >> d;
        sum+=d;
    }
    ll tot = 0;
    for (int i = 1; i < 1e9; i++) {
        if (sum-i>=0) {
            tot++;
            sum-=i;
        }
        else {
            break;
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
