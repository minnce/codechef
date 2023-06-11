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
    int arr2[n];
    for (int i = 0; i < n*2; i+=2) {
        cin >> arr[i];
        cin >> arr[i+1];
    }
    sort(arr,arr+n*2);
    int arr3[n*2];
    for (int i = 0; i < n*2; i+=2) {
        arr3[i]=arr[i/2];
        arr3[i+1]=arr[n*2-(i/2)-1];
    }
    for (int i = 0; i < n*2; i+=2) {
        arr2[i/2]=max(arr3[i],arr3[i+1]);
    }
    if (n==1) {
        cout << arr2[0] << endl;
    }
    else {
        cout << arr2[(n)/2] << endl;
    }
    for (int i = 0; i < n*2; i+=2) {
        cout << arr3[i] << " " << arr3[i+1] << " ";
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
