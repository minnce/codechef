#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	int t,n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    int arr[n];
	    for (int i =0; i < n; i++) {
	        cin >> arr[i];
	    }
	    sort(arr,arr+n);
	    long long sum = 0;
	    for (int i = n-1; i >= 0; i-=2) {
	        sum+=arr[i];
	    }
	    cout << sum << endl;
	}
	return 0;
}
