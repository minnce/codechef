#include <iostream>
#include <cmath>
#include <bits/stdc++.h>


using namespace std;

int main() {
	int t,n,k;
	cin >> t;
	while (t--) {
	    cin >> n >> k;
	    int arr[n];
	    for (int i = 0; i < n; i++) {
	        cin >> arr[i];
	    }
	    bool flag = false;
	    sort(arr, arr+n);
	    if (n == 1) {
	        cout << "YES\n";
	    }
	    else if ((arr[0]+arr[n-1])<=k) {
	        cout << "YES\n";
	    }
	    else {
	        cout << "No\n";
	    }
	}
	return 0;
}
