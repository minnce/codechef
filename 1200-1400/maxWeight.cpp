#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n,k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    ll sum1 = 0;
    ll sum2 = 0;
    ll sum3 = 0;
    ll sum4 = 0;
    for (int i = 0; i < k; i++) {
        sum1+=arr[i];
    }
    for (int i = k; i < n; i++) {
        sum2+=arr[i];
    }
    for (int i = n-1; i >= n-k; i--) {
        sum3+=arr[i];
    }
    for (int i = n-k-1; i >= 0; i--) {
        sum4+=arr[i];
    }
    int dum1 = abs(sum1-sum2);
    int dum2 = abs(sum3-sum4);
    cout << (max(dum1,dum2)) << endl;
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
