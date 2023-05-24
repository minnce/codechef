#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    int arrb[n];
	    int arrg[n];
	    for (int i = 0; i < n; i++) {
	        cin >> arrb[i];
	    }
	    for (int i = 0; i < n; i++) {
	        cin >> arrg[i];
	    }
	    int curr = 0;
	    sort(arrb,arrb+n);
	    sort(arrg,arrg+n);
	    for (int i = 0; i < n; i++) {
	        curr = max((arrg[i]+arrb[n-1-i]),curr);
	    }
	    cout << curr << endl;
	}
	return 0;
}
