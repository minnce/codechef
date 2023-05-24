#include <iostream>
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main() {
	int t,n;
	long long s;
	cin >> t;
	while (t--) {
	    cin >> n;
	    long long arr[n];
	    for (int i = 0; i < n; i++) {
	        cin >> arr[i];
	    }
	    sort(arr,arr+n);
	    long long maxDif = 999999999999999;
	    for (int i = 0; i < n-1; i++) {
	        if (abs(arr[i]-arr[i+1]) < maxDif) {
	            maxDif = abs(arr[i]-arr[i+1]);
	        }
	    }
	    cout << maxDif << endl;
	}
	return 0;
}
