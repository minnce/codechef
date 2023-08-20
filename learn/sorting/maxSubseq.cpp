#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
	int t, n, k;
	cin >> t;
	while (t--) {
	    cin >> n >> k;
	    int arr[n];
	    for (int i = 0; i < n; i++) {
	        cin >> arr[i];
	    }
	    sort(arr, arr+n);
	    long long sum = 0;
	    for (int i = 0; i < n; i++) {
	        if (arr[i] < 0 && k > 0) {
	            sum+=arr[i]*-1;
	            k-=1;
	        }
	        if (arr[i] > 0) {
	            sum+=arr[i];
	        }
	    }
	    cout << sum << endl;
	}
	return 0;
}
