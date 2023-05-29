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
    ll n, u, d;
    cin >> n >> u >> d;
    ll arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    ll curr = arr[0];
    int tot = 1;
    bool par = true;
    for (int i = 1; i < n; i++) {
        ll next = curr-arr[i];
        if (next>0&&next<=d) {
            tot++;
        }
        else if (next>0&&par==true) {
            tot++;
            par = false;
        }
        else if (next<0&&abs(next)<=u) {
            tot++;
        }
        else if (next==0) {
            tot++;
        }
        else {
            break;
        }
        curr = arr[i];
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
