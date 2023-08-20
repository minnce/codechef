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
    cin>> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr,arr+n,greater<int>());
    int sum1=0; int sum2=0;
    for (int i = 0; i < n; i++) {
        if (sum1>sum2) {
            sum2+=arr[i];
        }
        else {
            sum1+=arr[i];
        }
    }
    cout << (max(sum1,sum2)) << endl;
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
