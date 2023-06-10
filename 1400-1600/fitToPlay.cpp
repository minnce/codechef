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
    ll arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int currMin = arr[0];
    int currMax = arr[0];
    int d = -625;
    for (int i = 1; i < n;i ++) {
        if (arr[i]>currMax) {
            currMax = arr[i];
            d = max(currMax-currMin,d);
        }
        if (arr[i]<currMin) {
            currMin = arr[i];
            currMax = 0;
        }
    }
    if (d<=0) {
        cout << "UNFIT\n";
    }else {
    cout << d << endl;
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
