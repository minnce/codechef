#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n,k;
    cin >> n >> k;
    ll arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int held = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i]%k!=0) {
            if (held>=(k-(arr[i]%k))) {
                held-=(k-(arr[i]%k));
            }
            else if (held<(k-(arr[i]%k))) {
                held+=arr[i]%k;
            }
        }
    }
    cout << held << endl;
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
