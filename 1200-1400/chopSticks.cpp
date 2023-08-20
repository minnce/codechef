#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
	ll n, d;
	cin >> n >> d;
	ll arr[n];
	for (int i = 0; i < n; i++) {
	    cin >> arr[i];
	}
	sort(arr,arr+n);
	int dummy = 0;
	int tot = 0;
	for (int i = 1; i < n;i++) {
	    if (arr[i]-arr[i-1]<=d) {
	        tot++;
	        i++;
	    }
	}
	cout << tot << endl;
}
