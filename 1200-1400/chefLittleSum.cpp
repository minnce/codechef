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
    ll tot = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        tot+=arr[i];
    }
    ll currSum = arr[0];
    ll minSum = tot+currSum;
    ll minInd = 1;
    for (int i = 0; i < n; i++) {
        if (tot+currSum<minSum) {
            minSum = tot+currSum;
            minInd = i+1;
        }
        currSum+=arr[i+1];
        tot-=arr[i];
    }
    cout << minInd << endl;
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
