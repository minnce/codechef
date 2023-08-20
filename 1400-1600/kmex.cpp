#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#define ll long long
using namespace std;

void solve()
{
    ll n,m,k;
    cin >> n >> m >> k;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    int cnt = 0;
    int track = 0;
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i]==track) {
            track++;
        }
        else if (track==k) {
            track++;
        }
        if (arr[i]!=k) {
            cnt++;
        }
        if ((track>=k)&&(cnt>=m)&&(m>=k)) {
            found = true;
            break;
        }
    }
    if (found == true) {
        cout << "Yes\n";
    }
    else {
        cout << "No\n";
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
