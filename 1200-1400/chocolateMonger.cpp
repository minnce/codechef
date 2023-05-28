#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	int t, x, n;
	cin >> t;
	while (t--) {
	    cin >> n >> x;
	    int arr[n];
	    set<int> d;
	    for (int i = 0;i < n; i++) {
	        cin >> arr[i];
	        d.insert(arr[i]);
	    }
	    if (n-x>d.size()) {
	        cout << d.size() << endl;
	    }
	    else {
	        cout << n-x << endl;
	    }
	}
	return 0;
}
