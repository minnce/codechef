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
    int arr[n*2];
    for (int i = 0; i < n*2; i++) {
        cin >> arr[i];
    }
    sort(arr,arr+(n*2));
    int curr = arr[n-1]-arr[0];
    for (int i = 0; i < (n*2)-n+1; i++) {
        curr = min(curr,(arr[i+n-1]-arr[i]));
    }
    cout << curr << endl;
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
