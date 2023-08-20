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
    int n,x;
    cin >> n >> x;
    for (int i = 0; i < n/2; i++) {
        cout << x-1-i << " " << x+i+1 << " ";
    }
    if (n%2==1) {
        cout << x;
    }
    cout << endl;
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
