#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    int arr[n];
	    for (int i = 0; i < n; i++) {
	        cin >> arr[i];
	    }
	    sort(arr,arr+n);
	    int dummy1 = -1;
	    int dummy2 = -1;
	    bool cd = false;
	    for (int i = 0; i < n-1; i++) {
	        if (arr[i]==arr[i+1] && cd == false) {
	            dummy2 = dummy1;
	            dummy1 = arr[i];
	            cd = true;
	        }
	        else if (arr[i] == arr[i+1] && cd == true) {
	            cd = false;
	        }
	        else {
	            cd = false;
	        }
	    }
	    if (dummy1 != -1 && dummy2 != -1) {
	        cout << dummy1*dummy2 << endl;
	    }
	    else {
	        cout << -1 << endl;
	    }
	}
	return 0;
}
