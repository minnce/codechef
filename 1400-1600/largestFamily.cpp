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
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    int tot = 0;
    int d = n-1;
    for (int i = 0; i < n; i++) {
        if (d-arr[i]>=0&&arr[i]!=0) {
            d-=(arr[i]);
            tot++;
        }
        else if (arr[i]==0) {
            tot++;
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
